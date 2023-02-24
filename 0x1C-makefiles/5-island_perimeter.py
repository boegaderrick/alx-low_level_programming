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
        return
    if len(grid) < 2:
        return
    if not all(type(i) is list for i in grid):
        return

    length = 0
    width = 1
    perimeter = None

    for i in grid:
        for j in i:
            if type(j) is not int:
                return
            if j == 1:
                length += 1

    if length > 0 and length < 101:
        perimeter = 2 * (length + width)

    return perimeter
