/*
Nested Loops
It is also possible to place a loop inside another loop. This is called a nested loop.

The "inner loop" will be executed one time for each iteration of the "outer loop":

Example
int i, j;

// Outer loop
for (i = 1; i <= 2; ++i) {
  printf("Outer: %d\n", i);  // Executes 2 times

  // Inner loop
  for (j = 1; j <= 3; ++j) {
    printf(" Inner: %d\n", j);  // Executes 6 times (2 * 3)
  }
}
*/

/*
Multiplication Table Example
This example uses nested loops to print a simple multiplication table (1 to 3):

Example
int i, j;

for (i = 1; i <= 3; i++) {
  for (j = 1; j <= 3; j++) {
    printf("%d ", i * j);
  }
  printf("\n");
}
Result

1 2 3
2 4 6
3 6 9

*/ 