;; Auto-generated. Do not edit!


(when (boundp 'franka_control::ErrorRecoveryResult)
  (if (not (find-package "FRANKA_CONTROL"))
    (make-package "FRANKA_CONTROL"))
  (shadow 'ErrorRecoveryResult (find-package "FRANKA_CONTROL")))
(unless (find-package "FRANKA_CONTROL::ERRORRECOVERYRESULT")
  (make-package "FRANKA_CONTROL::ERRORRECOVERYRESULT"))

(in-package "ROS")
;;//! \htmlinclude ErrorRecoveryResult.msg.html


(defclass franka_control::ErrorRecoveryResult
  :super ros::object
  :slots ())

(defmethod franka_control::ErrorRecoveryResult
  (:init
   (&key
    )
   (send-super :init)
   self)
  (:serialization-length
   ()
   (+
    0
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;;
   self)
  )

(setf (get franka_control::ErrorRecoveryResult :md5sum-) "d41d8cd98f00b204e9800998ecf8427e")
(setf (get franka_control::ErrorRecoveryResult :datatype-) "franka_control/ErrorRecoveryResult")
(setf (get franka_control::ErrorRecoveryResult :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

")



(provide :franka_control/ErrorRecoveryResult "d41d8cd98f00b204e9800998ecf8427e")


