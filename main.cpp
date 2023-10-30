
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int factorial(int num) {
    // Base Case is 0 and 1 both equal 1
    if (num == 0 || num == 1) {
        return 1;
    }
    else {
        return num * factorial(num-1);
    }
}
int main() {

    int number;
    printf("Enter Number: ");
    scanf("%d", &number);

    int answer = factorial(number);
    printf("The answer is %d", answer);

    return 0;
}