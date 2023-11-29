#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// generates an estimation of pi utilzing the monte carlo method. This program
// uses the seed and number of iterations to estimate with given by the user.
double rand_double(double low, double high) {
  /*
  generate a random double between low and high inclusive
  @low: the lowest possible double that can be generated
  @high: the highest possible double that can be generated
  @returns: a random number between low and high
  */
  return low + ((double)rand()) / (((double)RAND_MAX / (high - low)));
}

void generateCoordinates(int numIterations, double setOfCoordinates[][2]) {
  /*
  generates a set of coordinates for the monte carlo method and put it into the
array
@numIterations: the number of coordinates needed to be generated
@setOfCoordinates: the array that will hold the generated coordinates
@returns: nothing
  */

  for (int i = 0; i < numIterations; i++) {
    for (int j = 0; j < 2; j++) {
      setOfCoordinates[i][j] = rand_double(-1.0, 1.0);
    }
  }
}

bool isInCircle(double x, double y) {
  /*
  checks if a point is in the circle
@x: the x coordinate of the point
@y: the y coordinate of the point
@returns: true if the point is in the circle, false otherwise
  */

  double distance = sqrt(pow(x, 2) + pow(y, 2));
  if (distance <= 1) {
    return true;
  }
  return false;
}

int numPointsinCircle(double orderedPairs[][2], int numIterations) {
  /*
  calculates the number of ordered pairs in the circle
@orderedPairs: the array that holds the generated coordinates
@numIterations: the number of coordinates
@returns: the number of points in the circle
  */
  int numPoints = 0;
  for (int i = 0; i < numIterations; i++) {
    double x = orderedPairs[i][0];
    double y = orderedPairs[i][1];
    if (isInCircle(x, y)) {
      numPoints++;
    }
  }
  return numPoints;
}

double estimatePi(int numIterations, double orderedPairs[][2]) {
  /*
  estimates pi using the monte carlo method
  @numIterations: the number total ordered pairs
  @orderedPairs: the array that holds the generated coordinates
  @returns: the estimated value of pi
          */
  int numPoints = numPointsinCircle(orderedPairs, numIterations);
  double probability = (double)numPoints / (double)numIterations;

  return probability * 4;
}

int main(void) {
  /*
  main function that prompts the user for the seed and number of iterations,
  declares variables, calls functions, and in the end, prints the estimated
  value of pi
  @returns: 0 if the program is successful
  */
  int seed;
  int numIterations;

  printf("Enter the seed for the random number generator: ");
  scanf("%d", &seed);
  printf("Enter the number of iterations to run: ");
  scanf("%d", &numIterations);

  srand(seed);
  double setOfCoordinates[numIterations][2];
  generateCoordinates(numIterations, setOfCoordinates);
  double estimatedPi = estimatePi(numIterations, setOfCoordinates);

  printf("The value of pi is %.2lf.", estimatedPi);

  return 0;
}