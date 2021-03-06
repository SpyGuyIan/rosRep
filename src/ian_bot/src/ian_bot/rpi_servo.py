#!/usr/bin/env python


import rospy
from ian_bot.msg import PWM
from ian_bot.srv import PWMgetResponse, PWMget, PWMfreq, PWMfreqResponse
import pigpio

class RPiPWM():

	def __init__(self):
		self.sub = rospy.Subscriber("/pi/servo", PWM, self.set_PWM_callback)
		self.pulseSrv = rospy.Service('/pi/servo_pos', PWMget, self.handle_get_PWM)
		self.freqSrv = rospy.Service('/pi/pwm_freq', PWMfreq, self.handle_freq_change)
		self.gpio = pigpio.pi()
		if not self.gpio.connected:
			rospy.logerr("pigpio not connected") ##########start it
			exit()
		for i in range(32)
			self.gpio.set_PWM_range(i, 10**4)
		rospy.loginfo("initialized")
		
	def handle_get_PWM(self, req):
		return PWMgetResponse(self.gpio.get_PWM_dutycycle(req.pin))
	
	def handle_freq_change(self, req):
		self.gpio.set_PWM_frequency(req.pin, req.freq)
		return PWMfreqResponce(self.gpio.get_PWM_frequency(req.pin))
	
	def set_PWM_callback(self, msg):
		#data.pin, data.width
		if not 0<=msg.pin<=31 or not (msg.width == 0 or 500<=msg.width<=2500):
			rospy.logerr_throttle(1, "Malformed PWM message: %d | %d" % (msg.pin, msg.width))
			return
		#convert to duty cycle
		hz = self.gpio.get_PWM_frequency(msg.pin)
		duty = (1/hz)*10**10/msg.width #10^6*10^4
		rospy.loginfo("Pin: %d, Duty: %d", msg.pin, duty)
		self.gpio.set_PWM_dutycycle(msg.pin, duty)

if __name__ == "__main__":
	try:
		rospy.init_node('rpi_servo', anonymous=True)
		RPiPWM()
		rospy.spin()
	except rospy.ROSInterruptException:
		pass
