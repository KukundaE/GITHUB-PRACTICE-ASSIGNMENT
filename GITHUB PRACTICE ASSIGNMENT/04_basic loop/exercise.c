#include <stdio.h>
#include <stdlib.h>

int main(){

     int x = 1;
    int sum = 0;

    while (x <= 10) {
        sum = sum + x;
        x = x + 1;
    }
    printf("Sum from 1 to 10 is %d\n", sum);





    return 0;
}
