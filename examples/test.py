import traxxas_new
import steering

for i in range(2):
    traxxas_new.stepForward()
    traxxas_new.stepForward()
    traxxas_new.stepForward()
    traxxas_new.stepForward()
    traxxas_new.stepForward()
    steering.turnRight()
    traxxas_new.stepForward()
    steering.turnRight()
    traxxas_new.stepForward()
    steering.turnRight()
    traxxas_new.stepForward()
    steering.center()
