/*
 * prog1_3.c
 *
 *  Created on: May 29, 2018
 *      Author: bmbaniqued
 */

#include "prog1_2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])

{
	int n;
	int len;
	int i;
	int word;
	char line[256];
	char command[15], value[15];

	STACK* stk = MakeStack(10);

	printf("Assignment #1-3, Brandon Baniqued, bbaniqued@sdsu.edu \n");

	if (argc != 2) {

		printf("This program expects a single command line argument.\n");

		return 1;

	}

	n = atoi(argv[1]);

	for (int i = 1; i <= n; i++) {

		printf("> ");

		fgets(line, 256, stdin);

		len = strlen(line);

		word = 1;

		int j = 0;

		while (j < len) {

			if(line[j] != ' ' && line[j+1] == ' ') {

				word = word + 1;
				
				if (line[j + 2] == ' ') {
					
					word = word -1;
					
				}

			}

			j++;

		}

		sscanf(line, "%s", command);

		if (strcmp(command, "push") == 0) {

			sscanf(line, "%s %s", command, value);

			if (word == 2)

				Push(stk, atoi(value));

			}

		else if (strcmp(command, "pop") == 0) {

				printf("%d\n", Pop(stk));

			}

		}

	}



