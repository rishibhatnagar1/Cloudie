import pygame
from pygame.locals import *
import pygame.mixer
import serial
import time

#portStr = '\dev\ttyACM0'
arduino = serial.Serial('/dev/ttyACM0', 9600)

pygame.display.set_mode((120, 120), DOUBLEBUF | HWSURFACE)
pygame.init()

pygame.mixer.init()

Drums1 = pygame.mixer.Sound('happy.wav')
Drums2 = pygame.mixer.Sound('DigChick.wav')

Keys1 = pygame.mixer.Sound('sad.wav')
Keys2 = pygame.mixer.Sound('Atmosphere1.wav')

Synth1 = pygame.mixer.Sound('Synth1.wav')
Synth2 = pygame.mixer.Sound('Synth2.wav')

prevBy = 'a'

while True:
    by = arduino.read(1)
    print by

    if by == 'a':
        Drums1.stop()
        Drums1.play(-1)
        Drums2.stop()
        Keys1.stop() 
        Keys2.stop() 
        Synth1.stop()
        Synth2.stop()

    elif by == 'b':
        Drums1.stop()
        Drums2.stop()
        Drums2.play(-1)
        Keys1.stop() 
        Keys2.stop() 
        Synth1.stop()
        Synth2.stop()

    elif by == 'c':
        Drums1.stop()
        Drums2.stop()
        Keys1.stop()
        Keys1.play(-1) 
        Keys2.stop() 
        Synth1.stop()
        Synth2.stop()

    elif by == 'd':
        Drums1.stop()
        Drums2.stop()
        Keys1.stop() 
        Keys2.stop() 
        Keys2.play(-1)
        Synth1.stop()
        Synth2.stop()

    elif by == 'e':
        Drums1.stop()
        Drums2.stop()
        Keys1.stop() 
        Keys2.stop() 
        Synth1.stop()
        Synth1.play(-1)
        Synth2.stop()

    elif by == 'f':
        Drums1.stop()
        Drums2.stop()
        Keys1.stop() 
        Keys2.stop() 
        Synth1.stop()
        Synth2.stop()
        Synth2.play(-1)

    elif prevBy == By:
        Drums1.stop()
        Drums2.stop()
        Keys1.stop() 
        Keys2.stop() 
        Synth1.stop()
        Synth2.stop()

    prevBy = by

    # if by == 'a1':
    #     Drums1.play(-1)

    # elif(by == 'b1'):
    #     Drums2.play(-1)

    # elif(by == 'c1'):
    #     Keys1.play(-1)

    # elif(by == 'd1'):
    #     Keys2.play(-1)

    # elif(by == 'e1'):
    #     Synth1.play(-1)

    # elif(by == 'f1'):
    #     Synth2.play(-1)

    # elif(by == 'a0'):
    #     Drums1.stop()

    # elif(by == 'b0'):
    #     Drums2.stop()

    # elif(by == 'c0'):
    #     Keys1.stop()

    # elif(by == 'd0'):
    #     Keys2.stop()

    # elif(by == 'e0'):
    #     Synth1.stop()

    # elif(by == 'f0'):
    #     Synth2.stop()