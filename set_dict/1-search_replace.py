#!/usr/bin/python3
def search_replace(my_list, search, replace):
    new_list = my_list.copy()
    for i in my_list:
        if i == search:
            new_list[new_list.index(search)] = replace
    return new_list
