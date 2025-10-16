/*
Parameters and Arguments
Information can be passed to functions as a parameter. Parameters act as variables inside the function.

Parameters are specified after the function name, inside the parentheses. You can add as many parameters 
as you want, just separate them with a comma:

Syntax
returnType functionName(parameter1, parameter2, parameter3) {
  // code to be executed
}
In the example below, the function takes a string of characters with name as parameter. When the 
function is called, we pass along a name, which is used inside the function to print "Hello" and the name 
of each person:

Example
void myFunction(char name[]) {
  printf("Hello %s\n", name);
}

int main() {
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  return 0;
}

// Hello Liam
// Hello Jenny
// Hello Anja
When a parameter is passed to the function, it is called an argument. So, from 
the example above: name is a parameter, while Liam, Jenny and Anja are arguments.
*/ 


/*
Multiple Parameters
Inside the function, you can add as many parameters as you want:

Example
void myFunction(char name[], int age) {
  printf("Hello %s. You are %d years old.\n", name, age);
}

int main() {
  myFunction("Liam", 3);
  myFunction("Jenny", 14);
  myFunction("Anja", 30);
  return 0;
}

// Hello Liam. You are 3 years old.
// Hello Jenny. You are 14 years old.
// Hello Anja. You are 30 years old.

Notes on Parameters
Note that when you are working with multiple parameters, the function 
call must have the same number of arguments as there are parameters, 
and the arguments must be passed in the same order.
*/ 



/*
Pass Arrays as Function Parameters
You can also pass arrays to a function:

Example
void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    printf("%d\n", myNumbers[i]);
  }
}

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  myFunction(myNumbers);
  return 0;
}


Example Explained
The function (myFunction) takes an array as its parameter (int myNumbers[5]), 
and loops through the array elements with the for loop.

When the function is called inside main(), we pass along the myNumbers array, 
which outputs the array elements.

Note that when you call the function, you only need to use the name of the 
array when passing it as an argument myFunction(myNumbers). However, the full 
declaration of the array is needed in the function parameter (int myNumbers[5]).
*/ 



/*
Return Values
The void keyword, used in the previous examples, indicates that the function should not return a value. If you want the function to return a value, you can use a data type (such as int or float, etc.) instead of void, and use the return keyword inside the function:

Example
int myFunction(int x) {
  return 5 + x;
}

int main() {
  printf("Result is: %d", myFunction(3));
  return 0;
}

// Outputs 8 (5 + 3)
This example returns the sum of a function with two parameters:

Example
int myFunction(int x, int y) {
  return x + y;
}

int main() {
  printf("Result is: %d", myFunction(5, 3));
  return 0;
}

// Outputs 8 (5 + 3)



You can also store the result in a variable:

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
*/ 