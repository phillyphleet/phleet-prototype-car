import Adafruit_PCA9685
import time
pwm = Adafruit_PCA9685.PCA9685()

pwm.set_pwm_freq(100) # Vxl5s operates at 100 hz

# Center is about 640...

def center():
    pwm.set_pwm(2,0,640) 
    time.sleep(1)

def turnLeft():
    pwm.set_pwm(2,0,800) 
    time.sleep(1)

def turnRight():
    pwm.set_pwm(2,0,460) 
    time.sleep(1)




