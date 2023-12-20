
import matplotlib.pyplot as plt 
import random

import serial
import collections

PORT_NAME = 'COM1'
BAUD_RATE = 115200

MAX_DEQUE_ITEMS = 1000

d = collections.deque(maxlen=MAX_DEQUE_ITEMS)

plt.ion()

fig = plt.figure() 
ax = fig.add_subplot() 
line1, = ax.plot(list(d)) 
    
# plt.ioff()
# plt.show()

with serial.Serial(PORT_NAME, BAUD_RATE) as ser:    
    # Read loop
    while True:
        # value = float(ser.readline())
        value = random.random() * 10
        d.append(value)        
        line1.set_ydata(list(d)) 
        fig.canvas.draw()
        fig.canvas.flush_events()
  

