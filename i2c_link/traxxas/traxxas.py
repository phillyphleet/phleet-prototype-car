import Adafruit_PCA9685
import time
pwm = Adafruit_PCA9685.PCA9685()

pwm.set_pwm_freq(100) # Vxl5s operates at 100 hz

pwm.set_pwm(1,0,620) #traxxas setting of middle ground
time.sleep(2)

for i in range(100):
	pwm.set_pwm(1,0,620) #traxxas setting of middle ground
	pwm.set_pwm(1,0,660) 

pwm.set_pwm(1,0,620) #traxxas setting of middle ground

time.sleep(2)

for i in range(100):
	pwm.set_pwm(1,0,620) #traxxas setting of middle ground
	pwm.set_pwm(1,0,595) 


pwm.set_pwm(1,0,620) #traxxas setting of middle ground
