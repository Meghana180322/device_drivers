#include<stdio.h>
#include<string.h>

int fac(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * fac(n - 1);
    }
}

int fib(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}

int power(int exp) {
    if (exp == 0) {
        return 1;
    } else {
        return 2 * power(exp - 1);
    }
}

enum cal { FAC, FIB, POWER, MAX };

int main() {
    int (*fp[MAX])(int) = {fac, fib, power};
    int n;
    char str[10];

    while (1) {
        printf("enter the choice, fac for factorial, fib for fibonacci, power for power: ");
        scanf("%s", str);

        printf("enter the value: ");
        scanf("%d", &n);

        if (strcmp(str, "fac") == 0) {
            printf("factorial of %d is %d\n", n, fp[FAC](n));
        } else if (strcmp(str, "fib") == 0) {
            printf("fibonacci of %d is %d\n", n, fp[FIB](n));
        } else {
            printf("power of %d is %d\n", n, fp[POWER](n));
        }

        return 0;
    }
}

