#!/usr/bin/python3
# 5-island_perimeter.py
# Juan Duque <3428@holbertonschool.com>
""" Reference to Script of Technical Interview """

def island_perimeter(grid):
    """ Return the perimeter of an island
        Args:
            grid (list): One list of list of integer represent island
        Return:
            the perimeter of the island
    """
    c = 0
    for x in range(0, len(grid), 1):
        for j in range(0, len(grid[0]), 1):
            if grid[x][j] == 1:
                c = c + 4
                if j - 1 >= 0 and grid[x][j - 1] == 1:
                    c -= 2
                if x - 1 >= 0 and grid[x - 1][j] == 1:
                    c -= 2
    return (c)
