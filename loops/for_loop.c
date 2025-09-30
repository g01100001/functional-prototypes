/*
For Loop
When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop:

Syntax
for (expression 1; expression 2; expression 3) {
  // code block to be executed
}
Expression 1 is executed (one time) before the execution of the code block.

Expression 2 defines the condition for executing the code block.

Expression 3 is executed (every time) after the code block has been executed.
*/ 

/*
Print Numbers
The example below will print the numbers 0 to 4:

Example
int i;

for (i = 0; i < 5; i++) {
  printf("%d\n", i);
}

Example explained

Statement 1 sets a variable before the loop starts: int i = 0
Statement 2 defines the condition for the loop to run: i < 5. If the condition is true, the loop will start over again, if it is false, the loop will end.
Statement 3 increases a value each time the code block in the loop has been executed: i++
*/ 

/*
Print Even Numbers
This example prints even values between 0 and 10:

Example
int i;

for (i = 0; i <= 10; i = i + 2) {
  printf("%d\n", i);
}




Sum of Numbers
This example calculates the sum of numbers from 1 to 5:

Example
int sum = 0;
int i;

for (i = 1; i <= 5; i++) {
  sum = sum + i;
}

printf("Sum is %d", sum);




Countdown
This example prints a countdown from 5 to 1:

Example
int i;

for (i = 5; i > 0; i--) {
  printf("%d\n", i);
}
*/ 