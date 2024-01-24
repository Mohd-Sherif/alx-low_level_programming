#!/usr/bin/python3
"""Module that calculates the perimeter of an island in a grid."""

def island_perimeter(grid):
    """Calculates the perimeter of the island in grid."""
    p = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                p += water_neighbors(grid, i, j)
    return p

def water_neighbors(grid, i, j):
    """Calculates the number of water neighbors a cell has in a grid."""
    n = 0

    if i <= 0 or not grid[i - 1][j]:
        n += 1

    if j <= 0 or not grid[i - 1][j]:
        n += 1

    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
        n += 1

    if i >= len(grid) - 1 or not grid[i + 1][j]:
        n += 1

    return n
