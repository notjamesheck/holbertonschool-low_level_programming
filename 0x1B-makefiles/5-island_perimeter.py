#!/usr/bin/python3
"""interview algo"""


def island_perimeter(grid):
    """finding perimeter of square"""
    v = 0
    h = 0
    p = 0
    for x in grid:
        for y in x:
            if y == 1:
                p += 1
        if p > 0:
            v += 1
        if p > h:
            h = p
        if x == 1:
            break
        p = 0
    if v == h or (v == 1 and h == 1):
        return (v * 4)
    elif v != h and v != 0 and h != 0:
        return (v * h)
    else:
        return 0


if __name__ == "__main__":
    """self test"""
    """20 expected"""
    grid = [
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 1, 1],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
    """12 expected"""
    grid = [
        [1, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
    """3 expected"""
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 1]
    ]
    print(island_perimeter(grid))
