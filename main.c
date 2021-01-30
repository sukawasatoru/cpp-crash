#include <stdio.h>

// https://stackoverflow.com/questions/8481783/what-is-the-easiest-way-to-make-a-c-program-crash
int main() {
    *((unsigned int*)0) = 0xDEAD;
    printf("Hello\n");
}
