Assignment #1, Brandon Baniqued
Brandon.baniqued@gmail.com
Introductory C program
This assignment is designed to familiarize you with GIT and Virtual Machines and C programming
Contents
4 sub-assignments in total.
* prog1_1.c:
Prompt the user to enter their name. The program will then take in their full name and print a greeting to them using their full name.
* prog1_2.h:
A header file that contains the functions MakeStack, Push, Pop, and Grow. It will also contain a typedef stack with data, size, and capacity.
* prog1_2.c:
A source file that implements the functions MakeStack, Push, Pop, and Grow functionality. The MakeStack holds the initial capacity integer. The Grow function doubles a stacks capacity without changing any of the values held by the stack. The Push and Pop functions work as expected for a stack. The Push function Grows the stack is there isn’t enough capacity to hold the pushed data. The Pop function returns -1 if there is no data in the stack.
* prog1_3.c:
A driver program that takes a single command line argument. The command line argument will be an integer number. If there is not a single command line argument the program prints an error message and quits. For valid inputs, the program will print a single right carrot and take the command line input from STDIN. The program will split each of the lines, and ignore multiple space characters. If there are exactly two tokens and the first token is the string “push” then the program will convert the second token to an integer and push the value onto the stack. If the first token is the string “pop” then the program will Pop a value off the stack and print it to STDOUT on its own line. All other inputs are ignored.

