#!/usr/bin/python3
"""
This code is to find the perimeter of a grid
"""

def island_perimeter(grid):
    for j in grid:
        perimeter = len(j)
    perimeter *= 2
    return perimeter
