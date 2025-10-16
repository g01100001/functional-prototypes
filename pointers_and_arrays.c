/*
Pointers & Arrays
You can also use pointers to access arrays.

Consider the following array of integers:

Example
    int myNumbers[4] = {25, 50, 75, 100};



you can loop through the array elements with a for loop:

Example
int myNumbers[4] = {25, 50, 75, 100};
int i;

for (i = 0; i < 4; i++) {
  printf("%d\n", myNumbers[i]);
}
Result:

25
50
75
100


Instead of printing the value of each array element, let's print the memory address of each array element:

Example
    int myNumbers[4] = {25, 50, 75, 100};
    int i;

    for (i = 0; i < 4; i++) {
    printf("%p\n", &myNumbers[i]);
    }
Result:

0x7ffe70f9d8f0
0x7ffe70f9d8f4
0x7ffe70f9d8f8
0x7ffe70f9d8fc


Note that the last number of each of the elements' memory address is different, with an addition of 4.

It is because the size of an int type is typically 4 bytes, remember:

Example
// Create an int variable
    int myInt;

    // Get the memory size of an int
    printf("%zu", sizeof(myInt));
    Result:4


So from the "memory address example" above, you can see that the compiler reserves 4 bytes of memory for each array element, which means that the entire array takes up 16 bytes (4 * 4) of memory storage:

Example
    int myNumbers[4] = {25, 50, 75, 100};

// Get the size of the myNumbers array
printf("%zu", sizeof(myNumbers));
Result:16
*/ 


/*
How Are Pointers Related to Arrays
Ok, so what's the relationship between pointers and arrays? Well, in C, the name of an array, is actually a pointer to the first element of the array.

Confused? Let's try to understand this better, and use our "memory address example" above again.

The memory address of the first element is the same as the name of the array:

Example
    int myNumbers[4] = {25, 50, 75, 100};

// Get the memory address of the myNumbers array
printf("%p\n", myNumbers);

// Get the memory address of the first array element
printf("%p\n", &myNumbers[0]);
Result:

0x7ffe70f9d8f0
0x7ffe70f9d8f0


This basically means that we can work with arrays through pointers!

How? Since myNumbers is a pointer to the first element in myNumbers, you can use the * operator to access it:

Example
int myNumbers[4] = {25, 50, 75, 100};

// Get the value of the first element in myNumbers
printf("%d", *myNumbers);
Result: 25



To access the rest of the elements in myNumbers, you can increment the pointer/array (+1, +2, etc):

Example
int myNumbers[4] = {25, 50, 75, 100};

// Get the value of the second element in myNumbers
printf("%d\n", *(myNumbers + 1));

// Get the value of the third element in myNumbers
printf("%d", *(myNumbers + 2));

// and so on..
Result:

50
75


Or loop through it:

Example
int myNumbers[4] = {25, 50, 75, 100};
int *ptr = myNumbers;
int i;

for (i = 0; i < 4; i++) {
  printf("%d\n", *(ptr + i));
}
Result:

25
50
75
100



It is also possible to change the value of array elements with pointers:

Example
int myNumbers[4] = {25, 50, 75, 100};

// Change the value of the first element to 13
*myNumbers = 13;

// Change the value of the second element to 17
*(myNumbers +1) = 17;

// Get the value of the first element
printf("%d\n", *myNumbers);

// Get the value of the second element
printf("%d\n", *(myNumbers + 1));
Result:

13
17
*/

/*
This way of working with arrays might seem a bit excessive. Especially with simple arrays like in the 
examples above. However, for large arrays, it can be much more efficient to access and manipulate 
arrays with pointers.

It is also considered faster and easier to access two-dimensional arrays with pointers.

And since strings are actually arrays, you can also use pointers to access strings.

For now, it's great that you know how this works. But like we specified in the previous chapter; 
pointers must be handled with care, since it is possible to overwrite other data stored in memory.
*/ 



