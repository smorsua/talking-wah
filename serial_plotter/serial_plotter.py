
import matplotlib.pyplot as plt 
import serial
import collections

PORT_NAME = 'COM28'
BAUD_RATE = 460800

MAX_ITEMS = 1000

# d = collections.deque([0]*MAX_DEQUE_ITEMS , maxlen=MAX_DEQUE_ITEMS)
arr = [0]*MAX_ITEMS
index = 0;
plt.style.use('ggplot')

plt.ion()

fig, ax  = plt.subplots()
line, = ax.plot(arr)

with serial.Serial(PORT_NAME, BAUD_RATE) as ser:        
    # Read loop
    while True:
        # Update deque
        value = float(ser.readline().decode("ascii"))
        arr[index] = value
        index += 1
        if index >= MAX_ITEMS:
            index = 0
        
        # Update plot
        line.set_ydata(arr);
        fig.canvas.draw()
        fig.canvas.flush_events()