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
        return (2 * (v + h))
    else:
        return 0


if __name__ == "__main__":
    """self test"""
    """16 expected"""
    grid = [
        [1, 1, 1, 1, 1],
        [1, 1, 1, 1, 1],
        [1, 1, 1, 1, 1]
    ]
    print("16 expected")
    print(island_perimeter(grid))
    """ 20 expected"""
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 1, 0, 0, 0],
        [1, 1, 1, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 1, 1, 1]
    ]
    print("20 expected")
    print(island_perimeter(grid))
    """28 expected"""
    grid = [
        [0, 1, 0, 0, 0, 1],
        [1, 1, 0, 0, 0, 1],
        [1, 1, 0, 1, 1, 1],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 1, 1, 0, 1]
    ]
    print("28 expected")
    print(island_perimeter(grid))
