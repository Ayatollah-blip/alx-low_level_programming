#!/usr/bin/python3

def island_perimeter(grid):
    if not grid:
        return 0
    column, row = len(grid), len(grid[0])
    count = 0
    for gri in grid:
        for gr in gri:
            if gr == 1:
                count += 1 