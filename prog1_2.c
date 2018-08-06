/*
 * prog1_2.c
 *
 *  Created on: May 29, 2018
 *      Author: bmbaniqued
 */

#include "prog1_2.h"
#include <stdio.h>
#include <stdlib.h>

STACK* MakeStack(int initialCapacity) {
	STACK* new_stack = malloc(sizeof(STACK));

	new_stack->size = 0;
	new_stack->capacity = initialCapacity;
	new_stack->data = (int*) malloc(initialCapacity * sizeof(int));

	return new_stack;

}

void Push(STACK *stackPtr, int data) {

	if (stackPtr->size < stackPtr->capacity) {
		stackPtr->data[stackPtr->size++] = data;
	}
}

int Pop(STACK *stackPtr) {
	if (stackPtr->size == 0) {
		return -1;
	} else {
		return stackPtr->data[--(stackPtr->size)];
	}
}

void Grow(STACK *stackPtr) {
	int i;
	stackPtr->capacity *= 2;
	int *arr = (int *) malloc(sizeof(int) * stackPtr->capacity);
	for (i = 0; i < stackPtr->size; ++i) {
		arr[i] = stackPtr->data[i];
	}
	stackPtr->data = arr;
}