#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total = 0;
    int counter = 0;
    int grade;

    printf("Enter grade (-1 to end): ");
    scanf("%d", &grade);

    while (grade != -1) {
        total = total + grade;
        counter = counter + 1;
        printf("Enter grade (-1 to end): ");
        scanf("%d", &grade);
    }

    if (counter != 0) {
        printf("Average is %d\n", total / counter);
    } else {
       printf("No grades entered\n");
    }
    return 0;
}
