#include <stdio.h>

int main() {
    int number;

    printf("nhap vao mot so nguyen: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("So %d là so chan.\n", number);
    } else {
        printf("So %d là so le.\n", number);
    }

    return 0;
}
