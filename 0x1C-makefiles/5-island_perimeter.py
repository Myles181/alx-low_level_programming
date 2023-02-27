#!/usr/bin/python3

def island_perimeter(grid):
    for j in grid:
        perimeter = len(j)
    perimeter *= 2
    return perimeter
