# Estimating-Pi
## Problem
For this problem you will be implementing a Monte Carlo method for estimating of pi. Imagine that you have a circle of radius 1 whose center is at (0,0) surrounded by a square with sides of length 2 

If we randomly choose points within the square the probability of a point being inside the circle is proportional to the area of the square that it occupies.

Pi can be approximated by picking a large number of points between [-1, 1] and counting the number that are inside the circle. The number of points inside the circle divided by the total number of points generated is the probability of being inside the circle


## Assumptions
Input will always be valid.

## Valid Input
Seed: an integer
Number of iterations: an integer greater than 0
Randomness
In order to match my outputs you will need to make calls to random functions in the exact order that I do

Make sure to seed the random number generator using srand with the user provided seed
Make sure you only call srand once in your entire program
Make sure you call it before any other calls to any other random function


1. First generate a random number between [-1, 1] for the x-axis
2. Then generate a random number between [-1, 1] for the y-axis

Make sure you generate new x,y coordinates for every point you pick instead of reusing one point over and over.
Numbers that fall exactly on the edge of the circle are considered to be inside the circle
## Requirements
Print all floats to 2 decimal points unless stated otherwise
You must use have at least three functions in your program
Restrictions
No global variables may be used
# Examples

## Example 1
Enter the seed for the random number generator: 4

Enter the number of iterations to run: 10

The value of pi is 2.80.

## Example 2
Enter the seed for the random number generator: -7

Enter the number of iterations to run: 2

The value of pi is 4.00.

## Example 3
Enter the seed for the random number generator: -7

Enter the number of iterations to run: 10000

The value of pi is 3.14.
