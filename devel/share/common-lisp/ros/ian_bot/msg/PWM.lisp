; Auto-generated. Do not edit!


(cl:in-package ian_bot-msg)


;//! \htmlinclude PWM.msg.html

(cl:defclass <PWM> (roslisp-msg-protocol:ros-message)
  ((pin
    :reader pin
    :initarg :pin
    :type cl:fixnum
    :initform 0)
   (width
    :reader width
    :initarg :width
    :type cl:fixnum
    :initform 0))
)

(cl:defclass PWM (<PWM>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <PWM>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'PWM)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name ian_bot-msg:<PWM> is deprecated: use ian_bot-msg:PWM instead.")))

(cl:ensure-generic-function 'pin-val :lambda-list '(m))
(cl:defmethod pin-val ((m <PWM>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ian_bot-msg:pin-val is deprecated.  Use ian_bot-msg:pin instead.")
  (pin m))

(cl:ensure-generic-function 'width-val :lambda-list '(m))
(cl:defmethod width-val ((m <PWM>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader ian_bot-msg:width-val is deprecated.  Use ian_bot-msg:width instead.")
  (width m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <PWM>) ostream)
  "Serializes a message object of type '<PWM>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'pin)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'width)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'width)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <PWM>) istream)
  "Deserializes a message object of type '<PWM>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'pin)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'width)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'width)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<PWM>)))
  "Returns string type for a message object of type '<PWM>"
  "ian_bot/PWM")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PWM)))
  "Returns string type for a message object of type 'PWM"
  "ian_bot/PWM")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<PWM>)))
  "Returns md5sum for a message object of type '<PWM>"
  "4d014280e020a5ca2f6af8bf78a593ff")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'PWM)))
  "Returns md5sum for a message object of type 'PWM"
  "4d014280e020a5ca2f6af8bf78a593ff")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<PWM>)))
  "Returns full string definition for message of type '<PWM>"
  (cl:format cl:nil "#0-31~%uint8 pin~%~%#500 - 2500 (0-3000)~%uint16 width~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'PWM)))
  "Returns full string definition for message of type 'PWM"
  (cl:format cl:nil "#0-31~%uint8 pin~%~%#500 - 2500 (0-3000)~%uint16 width~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <PWM>))
  (cl:+ 0
     1
     2
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <PWM>))
  "Converts a ROS message object to a list"
  (cl:list 'PWM
    (cl:cons ':pin (pin msg))
    (cl:cons ':width (width msg))
))
