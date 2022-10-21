
import time
import pygame
from pygame.locals import *

RED = (255, 0, 0)
GRAY = (150, 150, 150)
BLUE = (0, 3, 199)
SPIKECOLOR = (95, 0, 179)

pygame.init()
w, h = 1400,800
screen = pygame.display.set_mode((w, h))
running = True
pointx = 500
pointy = 400
pointz = 0
prespike = pygame.draw.rect(screen, SPIKECOLOR)
spike = pygame.transform.rotate(prespike, 180)
img = pygame.image.load('icon.png')

img = pygame.transform.rotozoom(img, 0, 0.22)
img.convert()
rect = img.get_rect()
rect.center = 150, 550
moving = False

while running:
    vel = -2
    for event in pygame.event.get():
        if event.type == QUIT:
            running = False
    spike.x += vel
    time.sleep(0.01)
    
    screen.fill(BLUE)
    screen.blit(img, rect)
    pygame.draw.rect(screen, BLUE, rect, 1)
    pygame.display.update()

pygame.quit()






# for loop through the event queue  
for event in pygame.event.get():
      
        # Check for QUIT event      
    if event.type == pygame.QUIT:
        running = False