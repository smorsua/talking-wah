
import matplotlib.pyplot as plt 
import matplotlib.animation as animation

import random
import serial
import collections
import time

PORT_NAME = 'COM28'
BAUD_RATE = 9600

MAX_DEQUE_ITEMS = 1000

d = collections.deque([0]*MAX_DEQUE_ITEMS , maxlen=MAX_DEQUE_ITEMS)
plt.style.use('ggplot')


with serial.Serial(PORT_NAME, BAUD_RATE) as ser:        
    # Read loop
    while True:
        # Update deque
        value = float(ser.readline())
        if value > 1:
            continue
        d.append(value)
        
        # Replot data
        plt.clf()
        plt.plot(d, linewidth=0.5)
        plt.pause(0.05) # Process GUI events


