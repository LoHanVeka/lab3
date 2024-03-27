#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Введіть чотири цілих додатних числа: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int Fibonacci = 0;
    
    
    if ((c == a + b) && (d == b + c)) {
        Fibonacci = 1;
    }
    
    if (Fibonacci) {
        printf("Задані числа утворюють послідовність чисел Фібоначчі.\n");
    } else {
        printf("Задані числа не утворюють послідовність чисел Фібоначчі.\n");
    }

    return 0;
}