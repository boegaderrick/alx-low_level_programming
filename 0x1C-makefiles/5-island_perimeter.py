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

    length = 0
    width = 1
    perimeter = 0

    for i in grid:
        for j in i:
            if type(j) is not int:
                return 0
            if j == 1:
                length += 1

    if length > 0:
        perimeter = 2 * (length + width)

    return perimeter
