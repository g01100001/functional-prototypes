/*
Numeric Types
Use int when you need to store a whole number without decimals, like 35 or 1000, and float or double 
when you need a floating point number (with decimals), like 9.99 or 3.14515.
*/

// int
#include <stdio.h>

int main() {
  int myNum = 1000;
  printf("%d", myNum);
  return 0;
}

// float
// float myNum = 5.75;
// printf("%f", myNum);


// double
// double myNum = 19.99;
// printf("%lf", myNum);



/*
float vs. double

The precision of a floating point value indicates how many digits the value can have after the decimal point. The precision of float is 
six or seven decimal digits, while double variables have a precision of about 15 digits. Therefore, it is often safer to use double for 
most calculations - but note that it takes up twice as much memory as float (8 bytes vs. 4 bytes).
*/


