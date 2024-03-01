#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sayHi(char name[]) {
    printf("Hello user %s\n", name);
}

int cubeNumber(int num) {
    int result = pow(num, 3);
    return result;
}

int max(int num1, int num2) {
    int result;

    if (num1 > num2) {
        result = num1;
    } else {
        result = num2;
    }

    return result;
}

int main() {
    sayHi("Fidelia");
    printf("The maximum of 3 and 9 is %d\n", max(3, 9));
    return 0;
}
