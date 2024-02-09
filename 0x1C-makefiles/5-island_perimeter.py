#!/usr/bin/python3

def determine_soroundings(array, y, x):

    mask = 1
    top = array[y - 1][x] ^ mask if y > 0 else 1
    bottom = array[y + 1][x] ^ mask if y < (len(array) - 1) else 1
    left = array[y][x - 1] ^ mask if x > 0 else 1
    right = array[y][x + 1] ^ mask if x < (len(array[y]) - 1) else 1
    positions = top + bottom + right + left
    return positions


def island_perimeter(grid):

    land = 1
    perimeter = 0
    for i in range(len(grid)):
        for j, x in enumerate(grid[i]):
            if x == land:
                perimeter += determine_soroundings(grid, i, j)
    return perimeter
