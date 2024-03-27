#include <stdio.h>
#include <math.h>

int main() {
    int b, c;
    double a;

    printf("Введіть значення b = ");
    scanf("%d", &b);

    printf("Введіть значення c = ");
    scanf("%d", &c);

    if (c < 4) {
        a = sqrt(b) + 2 * sqrt(c);
    }
    if (c == 4) {
        a = pow(b, 2) * c / (c + 6); 
    }
    if (c > 4) {
        a = pow(b, 2) + pow(c, 3);
    }

    printf("Значенння a = %.2f\n", a);

    return 0;
}