#include <stdio.h>

void cube(int num) {
    printf("The Cube is: %d\n",num * num * num);
}

int main() {
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);
    printf("\n\n------: Here :------\n\n");
    cube(number);
    return 0;
}