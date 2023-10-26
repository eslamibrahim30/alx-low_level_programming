#!/usr/bin/python3
"""
This module contains the function island_perimeter
"""


def island_perimeter(grid):
    """
    This function returns the perimeter of the island
    described in grid
    """
    first_1_row = len(grid[0])
    last_1_row = 1
    first_1_col = len(grid)
    last_1_col = 1
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if (grid[i][j] == 1 and j + 1 < first_1_row):
                first_1_row = j + 1
            if (grid[i][j] == 1 and j + 1 > last_1_row):
                last_1_row = j + 1
    for i in range(len(grid[0])):
        for j in range(len(grid)):
            if (grid[j][i] == 1 and j + 1 < first_1_col):
                first_1_col = j + 1
            if (grid[j][i] == 1 and j + 1 > last_1_col):
                last_1_col = j + 1
    return ((last_1_row - first_1_row + last_1_col - first_1_col + 2) * 2)
