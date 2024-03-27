#include <stdio.h> 
#include <math.h>
int main () {

    int b,c;
    double a;

    printf("Введіть значення b = ");
    scanf("%d", &b);

    printf("Введіть значення c = ");
    scanf("%d", &c);

   if (c<4)
   {
        if (c==0)
        {
            printf("Діленя на 0");
        }
        else{
            
            a = (sqrt(b) + 2 * sqrt(c)) / (pow(b, 2) * c);  
            printf("a = %.2f", a);

        }
        

    } else if (c == 4) { 
        a = pow(b, 2) * c / (c + 6);
        printf("a = %.2f", a);
    } else if (c > 4) { 
        a = pow(b, 2) + pow(c, 3); 
        printf("a = %.2f", a);
    }

    return 0;
}