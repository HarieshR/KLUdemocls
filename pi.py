import time
import sys
import Adafruit_DHT
import RPi.GPIO as GPIO
GPIO_setmode(GPIO.BCM)
GPIO_setwarnings(False)

IRPIN=20
buzzer = 18
TH_pin=17
Fan = 2
FIREPIN=16
motor = 3
servo = 4
GASPIN=21
ldrpin=22
GPIO.setup(GASPIN,GPIO.IN)
GPIO.setup(servo,GPIO.OUT)
GPIO.setup(FIREPIN,GPIO.IN)
GPIO.setup(motor,GPIO.OUT)
GPIO.setmode(GPIO.BOARD)
GPIO.setup(IRPIN,GPIO.IN)
GPIO.setup(buzzer,GPIO.OUT)
TH_name=Adafruit_DHT.DHT11
GPIO.setup(Fan,GPIO.OUT)
while True:
    value=GPIO.input(IRPIN)

    if(value==True):
        GPIO.output(buzzer,True)
        print("obstacle detected")
        time.sleep(1)
    else:
        print("obstacle not detected")
        time.sleep(1)
    
#Temp>30 turn on fan
    humidity,temperature=Adafruit_DHT.read_retry(TH_pin)
    if(temperature>30):
        GPIO.output(Fan,True)
        print("Temperature is greater than 30'C, turned on Fan ")
        print("TEMP:",temperature)
        print("HUM:",humidity)
        time.sleep(1)
    else:
        print("Temperature is lesser than 30'C ")
        time.sleep(1)
#IF FIRE SENSOR DETECTS FIRE THEN TURN ON MOTOR

    firevalue=GPIO.input(FIREPIN)
    
    if(firevalue==True):
        GPIO.output(motor,True)
        print("fire is detected")
        time.sleep(1)
    else:
        print("fire is not detected")
        time.sleep(1)
#GAS SENSOR DETECTS GAS LEAKAGE THEN CONTROL SERVO MOTOR

    gasvalue=GPIO.input(GASPIN)

    if(gasvalue==True):
        print("smoke is detected")
        GPIO.output(servo,True)
        time.sleep(1)
    else:
        print("smoke is not detected")
        time.sleep(1)
#LDR SENSOR TO TURN ON/OFF LIGHT BULB

    count=0
    GPIO.setup(ldrpin,GPIO.OUT)
    GPIO.output(ldrpin,GPIO.LOW)
    time.sleep(0.1)
    GPIO.setup(ldrpin,GPIO.IN)

    while(GPIO.input(ldrpin)==GPIO.LOW):
        count+=1
        print(count)
        time.sleep(1)
        
    #LCD TO DISPLAY RESPECTIVE MSGS
    LCD_RS=7
    LCD_E=8
    LCD_D4=25
    LCD_D5=24
    LCD_D6=23
    LCD_D7=18

    LCD_WIDTH=16
    LCD_CHR=True
    LCD_CMD=False
    LCD_LINE_1=0x80
    LCD_LINE_2=0xc0

    #Timing constants
    E-PULSE=0.0005
    E_DELAY=0.0005

    GPIO.setup(LCD_E,GPIO.OUT)
    GPIO.setup(LCD_RS,GPIO.OUT)
    GPIO.setup(LCD_D4,GPIO.OUT)
    GPIO.setup(LCD_D5,GPIO.OUT)
    GPIO.setup(LCD_D6,GPIO.OUT)
    GPIO.setup(LCD_D7,GPIO.OUT)

    def lcd_init():
        #initialise display
        lcd_byte(0x33,LCD_CMD)
        lcd_byte(0x32,LCD_CMD)
        lcd_byte(0x06,LCD_CMD)
        lcd_byte(0x0C,LCD_CMD)
        lcd_byte(0x28,LCD_CMD)
        lcd_byte(0x01,LCD_CMD)
        time.sleep(E_DELAY)