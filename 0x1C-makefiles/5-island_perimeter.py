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
    width = len(grid[0])
    height = len(grid)
    count = 0

    for i in range(0, height, 1):
        for j in range(0, width, 1):
            if grid[i][j] == 1:
                count += 4
                if ((j - 1 >= 0 and grid[i][j - 1] == 1) or (
                        i - 1 >= 0 and grid[i - 1][j] == 1)):
                    count -= 2
    return (count)
