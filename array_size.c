/*
Get Array Size or Length
To get the size of an array, you can use the sizeof operator:

Example
int myNumbers[] = {10, 25, 50, 75, 100};
printf("%zu", sizeof(myNumbers)); // Prints 20

Why did the result show 20 instead of 5, when the array contains 5 elements?

- It is because the sizeof operator returns the size of a type in bytes.

You learned from the Data Types chapter that an int type is usually 4 bytes, so from the example above, 4 x 5 (4 bytes x 5 elements) = 20 bytes.

Knowing the memory size of an array is great when you are working with larger programs that require good memory management.

But when you just want to find out how many elements an array has, you can use the following formula (which divides the size of the array by the size of the first element in the array):

Example
int myNumbers[] = {10, 25, 50, 75, 100};
int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

printf("%d", length);  // Prints 5
*/ 

/*
Making Better Loops
In the array loops section in the previous chapter, we wrote the size of the array in the loop condition (i < 4). This is not ideal, since it will only work for arrays of a specified size.

However, by using the sizeof formula from the example above, we can now make loops that work for arrays of any size, which is more sustainable.

Instead of writing:

Example
int myNumbers[] = {25, 50, 75, 100};
int i;

for (i = 0; i < 4; i++) {
  printf("%d\n", myNumbers[i]);
}

It is better to write:

Example
int myNumbers[] = {25, 50, 75, 100};
int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
int i;

for (i = 0; i < length; i++) {
  printf("%d\n", myNumbers[i]);
}
*/ 