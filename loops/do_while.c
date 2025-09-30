/*
The Do/While Loop
The do/while loop is a variant of the while loop. This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.

Syntax
do {
  // code block to be executed
}
while (condition);
The example below uses a do/while loop. The loop will always be executed at least once, even if the condition is false, because the code block is executed before the condition is tested:

Example
int i = 0;

do {
  printf("%d\n", i);
  i++;
}
while (i < 5);

Do not forget to increase the variable used in the condition, otherwise the loop will never end!
*/ 

/*
Condition is False from the Start
In the example above, the condition i < 5 was true at the beginning, so the loop executed multiple times. But what if the condition is false right from the start?

In the example below, the variable i starts at 10, so the condition i < 5 is false immediately - yet the do/while loop still runs once:

Example
Even if the condition is false from the start, the code block will still execute one time:

int i = 10;

do {
  printf("i is %d\n", i);
  i++;
} while (i < 5);
*/ 


/*
Summary
The do/while loop always runs at least once, even if the condition is already false. This is different from a regular while loop, which would skip the loop entirely if the condition is false at the start.

This behavior makes do/while useful when you want to ensure something happens at least once, like showing a message or asking for user input.
*/ 