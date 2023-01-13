import pygame
from pygame.locals import * 


def draw_block():   # making function for block 
    surface.fill((110,110,5))    # now fill the the space with the colour because the screen colour is changed with block colour
    surface.blit(block,(block_x,block_y))
    pygame.display.flip()  # updating the whole things to screen 

if __name__ == "__main__":    # calling the pygames
    pygame.init()    # pygame is inititated at this point 
    surface = pygame.display.set_mode((800,800))   # for display means to print screen
    surface.fill((124, 145, 102))  # updating the code to screen
    
    
   
    block = pygame.image.load("resources/block.jpg").convert()    # providing image of the block
    block_x = 100   # size of the block in x direction 
    block_y = 100   # size of the block in y direction
    surface.blit(block,(block_x,block_y))  #blit fucntion draw the block on screen


    pygame.display.flip()   # flip update the screen
    
    running = True
    while running:
        for event in pygame.event.get():
            if event.type==KEYDOWN:
                if event.key == K_ESCAPE:   # if press ESC the program will exit
                    running = False

                if event.key == K_UP:
                    block_y = block_y - 10
                    draw_block()
                if event.key == K_DOWN:
                    block_y = block_y + 10
                    draw_block()
                if event.key == K_LEFT:
                    block_x = block_x - 10
                    draw_block()
                if event.key == K_RIGHT:
                    block_x = block_x + 10
                    draw_block()


            elif event.type == QUIT:
                running = False
