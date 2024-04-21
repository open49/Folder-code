import pygame
import sys
import random
import math

# Khởi tạo Pygame
pygame.init()

# Thiết lập màn hình
width, height = 800, 600
screen = pygame.display.set_mode((width, height))
pygame.display.set_caption("Cây bao trùm min")

# Màu sắc
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)
RED = (255, 0, 0)

# Kích thước ô vuông
cell_size = 20

# Số ô trên chiều ngang và dọc
cols = width // cell_size
rows = height // cell_size

# Hàm để vẽ lưới ô vuông
def draw_grid():
    for i in range(cols):
        pygame.draw.line(screen, WHITE, (i * cell_size, 0), (i * cell_size, height))
    for j in range(rows):
        pygame.draw.line(screen, WHITE, (0, j * cell_size), (width, j * cell_size))

# Hàm để vẽ cây bao trùm min
def draw_tree(x, y, radius):
    pygame.draw.circle(screen, RED, (x, y), radius)

# Hàm chính
def main():
    clock = pygame.time.Clock()

    running = True
    while running:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                running = False

        screen.fill(BLACK)
        draw_grid()

        # Random vị trí và bán kính của cây bao trùm min
        tree_x = random.randint(0, cols - 1) * cell_size + cell_size // 2
        tree_y = random.randint(0, rows - 1) * cell_size + cell_size // 2
        tree_radius = random.randint(10, 50)

        draw_tree(tree_x, tree_y, tree_radius)

        pygame.display.flip()
        clock.tick(1)  # 1 frame mỗi giây

    pygame.quit()
    sys.exit()

if __name__ == "__main__":
    main()
