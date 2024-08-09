#!/usr/bin/python3
"""
A module containing the class square
"""


class Square:
    def __init__(self, size=0):
        """
        Initialize the class Square
         Args:
            Size: The size of the square
        """
    if type(size) != int:
        raise TypeError("Size must be an integer")
    elif size < 0:
        raise ValueError("Size must be >= 0")
    else:
        self.__size = size
