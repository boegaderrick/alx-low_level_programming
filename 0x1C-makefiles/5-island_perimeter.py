#!/usr/bin/python3
"""This module contains a fuction that calculates the perimeter of an island"""


def island_perimeter(grid):
    """
    This function calculates the perimeter of an island
    Grid is a matrix of zeros and ones
    One represents land area and zero represents water area
    Every valid cell (ones) is a square of side length 1
    """
    if type(grid) is not list:
        return 0
    if len(grid) < 2:
        return 0
    if not all(type(i) is list for i in grid):
        return 0

    p = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 0:
                continue
            if (j - 1 == -1) or (grid[i][j - 1] == 0):
                p += 1
            if (i - 1 == -1) or (grid[i - 1][j] == 0):
                p += 1
            if (j + 1 == len(grid[i])) or (grid[i][j + 1] == 0):
                p += 1
            if (i + 1 == len(grid)) or (grid[i + 1][j] == 0):
                p += 1
    return p
