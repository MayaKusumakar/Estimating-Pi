# Estimating-Pi
## Problem
For this program, the Monte Carlo method is utilized for estimating pi. 

The program randomly chooses points within the square and the probability of a point being inside the circle is proportional to the area of the square that it occupies.

Pi is approximated by picking a large number of points between [-1, 1] and counting the numbers that are inside the circle. 

The number of points inside the circle divided by the total number of points generated is the probability of being inside the circle


## Assumptions
Input will always be valid.

## Valid Input
  - Seed: an integer
  - Number of iterations: an integer greater than 0

Randomness:

- Seed the random number generator using srand with the user provided seed
- srand is called once in your entire program

## Requirements
  - Print all floats to 2 decimal points unless stated otherwise
  - Must have at least three functions in your program

## Restrictions
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
