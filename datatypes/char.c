/*
The char Type
The char data type is used to store a single character.

The character must be surrounded by single quotes, like 'A' or 'c', and we use the %c format specifier to print it:
*/
#include <stdio.h>

int main() {
  char myGrade = 'A';
  printf("%c", myGrade);
  return 0;
}
// A


// Alternatively, if you are familiar with ASCII, you can use ASCII values to display certain characters.
//      Note that these values are not surrounded by quotes (''), as they are numbers:
#include <stdio.h>

int main() {
  char a = 65, b = 66, c = 67;
  printf("%c\n", a);
  printf("%c\n", b);
  printf("%c", c);
  return 0;
}
// A
// B
// C





