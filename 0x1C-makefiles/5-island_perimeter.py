#!/usr/bin/python3
""" Return the perimeter of the island """


def island_perimeter(grid):
    """ Returns the parameter of the island
    Args:
        grid - list : list of list of integers
    Return:
        The parameter of an island
    """

    if not grid:
        return 0
    count = 0
    rows, columns = len(grid), len(grid[0])
    for i in range(rows):
        for j in range(columns):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    count += 1
                if i == rows - 1 or grid[i + 1][j] == 0:
                    count += 1
                if j == 0 or grid[i][j - 1] == 0:
                    count += 1
                if j == columns - 1 or grid[i][j + 1] == 0:
                    count += 1
    return count