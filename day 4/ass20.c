#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0) {
        printf("%d is a whole number", num);
    }
    else {
        printf("%d is not a whole number", num);
    }

    return 0;
}
