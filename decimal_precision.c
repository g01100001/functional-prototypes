/*
Set Decimal Precision
You have probably already noticed that if you print a floating point number, the output will 
show many digits after the decimal point:
*/ 

#include <stdio.h>

int main() {
  float myFloatNum = 3.5;
  double myDoubleNum = 19.99;
  
  printf("%f\n", myFloatNum);
  printf("%lf", myDoubleNum);
  return 0;
}

// If you want to remove the extra zeros (set decimal precision), you can use a dot (.) followed by a number that specifies how many digits that should be shown after the decimal point:

// Example
float myFloatNum = 3.5;

// printf("%f\n", myFloatNum);   // Default will show 6 digits after the decimal point
// printf("%.1f\n", myFloatNum); // Only show 1 digit
// printf("%.2f\n", myFloatNum); // Only show 2 digits
// printf("%.4f", myFloatNum);   // Only show 4 digits