#include <stdio.h>
#define SPACE 50

int main(int argc, char *argv[]) {

    char name[SPACE];

    // Header
    printf("Assignment #1-1, Brandon Baniqued, bbaniqued@sdsu.edu\n");

    printf("What is your name?\n");

    scanf("%[^\n]s", name);

    printf("Hello %s!", name);

    return 0;
}