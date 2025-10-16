/*
Function Declaration and Definition

Example
// Create a function
void myFunction() {
  printf("I just got executed!");
}

int main() {
  myFunction(); // call the function
  return 0;
}

A function consist of two parts:

Declaration: the function's name, return type, and parameters (if any)
Definition: the body of the function (code to be executed)
void myFunction() { // declaration
  // the body of the function (definition)
}
For code optimization, it is recommended to separate the declaration and the definition of the function.

You will often see C programs that have function declaration above main(), and function definition below main().

This will make the code better organized and easier to read:

Example
// Function declaration
void myFunction();

// The main method
int main() {
  myFunction();  // call the function
  return 0;
}

// Function definition
void myFunction() {
  printf("I just got executed!");
}
*/ 


/*
What About Parameters

Example
int myFunction(int x, int y) {
  return x + y;
}

int main() {
  int result = myFunction(5, 3);
  printf("Result is = %d", result);
  return 0;
}
// Outputs 8 (5 + 3)




It is considered good practice to write it like this instead:

Example
// Function declaration
int myFunction(int x, int y);

// The main method
int main() {
  int result = myFunction(5, 3); // call the function
  printf("Result is = %d", result);
  return 0;
}

// Function definition
int myFunction(int x, int y) {
  return x + y;
}
*/ 

/*
Functions Calling Other Functions
As long as you declare functions first, it is also possible to use functions to call other functions:

Example
Use one function to call another function:

// Declare two functions, myFunction and myOtherFunction
void myFunction();
void myOtherFunction();

int main() {
  myFunction(); // call myFunction (from main)
  return 0;
}

// Define myFunction
void myFunction() {
  printf("Some text in myFunction\n");
  myOtherFunction(); // call myOtherFunction (from myFunction)
}

// Define myOtherFunction
void myOtherFunction() {
  printf("Hey! Some text in myOtherFunction\n");
}
*/ 