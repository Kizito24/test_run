#!/usr/bin/env python3

# Entering Investment amount
inv_amnt =int(input("Enter amount invested\n"))

# Entering expected interest
exp_intrst = int(input("Enter your expected interest\n"))

for i in range(10):
    inv_amnt = inv_amnt + (inv_amnt * exp_intrst)

print("Total amount after investment period of 10yrs = \n", inv_amnt)
