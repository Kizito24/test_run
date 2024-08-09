#!/usr/bin/env python3

if __name__ == "__main__":
    from sys import argv
    argv.pop(0)
    added_vals = 0
    for i in argv:
        added_vals += int(i)
    print(added_vals)
