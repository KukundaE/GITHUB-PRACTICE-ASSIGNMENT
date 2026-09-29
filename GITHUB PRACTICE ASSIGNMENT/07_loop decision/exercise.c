#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, n3;
    printf("Enter three different integers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    int largest = n1;
    int smallest = n1;

    if (n2 > largest) largest = n2;
    if (n3 > largest) largest = n3;

    if (n2 < smallest) smallest = n2;
    if (n3 < smallest) smallest = n3;

    printf("Largest is %d\n", largest);
    printf("Smallest is %d\n", smallest);



    return 0;
}
