#!/usr/bin/python3


def island_perimeter(grid):
    """ Return the perimeter of an island
        Args:
            grid (list): One list of list of integer represent island
        Return:
            the perimeter of the island
    """
    width = len(grid[0])
    height = len(grid)
    cateto_0 = 0
    cateto_1 = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                cateto_0 += 1
                if ((j > 0 and grid[i][j - 1] == 1) or (
                        i > 0 and grid[i - 1][j] == 1)):
                    cateto_1 += 1
    return cateto_0 * 4 - cateto_1 * 2
