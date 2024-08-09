#!/usr/bin/python3
class MyClass:
    def __init__(self, value):
        self.value = value

    def __repr__(self):
        return f"MyClass({self.value})"

obj = MyClass(42)
print(repr(obj))

