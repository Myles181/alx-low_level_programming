#!/usr/bin/python3
"""
This code is to find the perimeter of a grid
"""

def island_perimeter(grid):
    """Description:
        Finds the perimeter of a grid
        1 represent land
        0 represent water
    Args:
        grid(list)

    Return:
        perimeter
    """
    perimeter = 0
    side = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                side = 4
                if grid[i - 1][j] == 1:
                    side -= 1
                if grid[i + 1][j] == 1:
                    side -= 1
                if grid[i][j - 1] == 1:
                    side -= 1
                if grid[i][j + 1] == 1:
                    side -= 1
                perimeter += side
    return perimeter
