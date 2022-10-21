
from turtle import *
import random
import math


screen = Screen()
screen.colormode(255)

bgcolor("black")
speed(0)
hideturtle()

r = random.randint(20,200)
g = random.randint(20,200)
b = random.randint(20,200)
for i in range(1000):
    circle(i)
    
    r+=random.randint(-10,10)
    g+=random.randint(-10,10)
    b+=random.randint(-10,10)
    
    if r<0:
        r = 0
    if r>255:
        r = 255
    
    if g<0:
        g = 0
    if g>255:
        g = 255
    
    if b<0:
        b = 0
    if b>255:
        b = 255
    
    rainbow = (r,g,b)
    
    print(rainbow)
    color(rainbow)
    circle(i*0.8)
    right(2*1.618)
    forward(2*1.618)
done()
