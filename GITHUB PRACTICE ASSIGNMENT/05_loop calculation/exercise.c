#include <stdio.h>
#include <stdlib.h>

int main(){

     int x, y;
    printf("Enter base x: ");
    scanf("%d", &x);
    printf("Enter exponent y: ");
    scanf("%d", &y);

    int i = 1;
    int power = 1;
    while (i <= y) {
        power = power * x;
        i = i + 1;
    }
    printf("%d to power %d is %d\n", x, y, power);


    return 0;
}
