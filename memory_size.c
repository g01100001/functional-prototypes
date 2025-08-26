// Get the Memory Size
// We introduced in the data types chapter that the memory size of a variable varies depending on the type:

// Data Type	Size
// int	2 or 4 bytes
// float	4 bytes
// double	8 bytes
// char	1 byte
// The memory size refers to how much space a type occupies in the computer's memory.

// To actually get the size (in bytes) of a data type or variable, use the sizeof operator:

// Example


#include <stdio.h>

int main() {
  int myInt;
  float myFloat;
  double myDouble;
  char myChar;
 
  printf("%zu\n", sizeof(myInt));//4
  printf("%zu\n", sizeof(myFloat));//4
  printf("%zu\n", sizeof(myDouble));//8
  printf("%zu\n", sizeof(myChar));//1
  
  return 0;
}

