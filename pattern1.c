#include <stdio.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    for (int i = 1;i <= num;i++) {
        for (int j = 1; j <= i;j++) {
            printf("*");
        }
        for (int j = 1;j <= num - i;j++) {
            printf("  ");
        }
        for (int j = 1;j <= i;j++) {
            printf("*");
        }

        printf("\n");
    }
    for (int i = 1;i <= num - 1;i++) {
        for (int j = 1; j <= num - i;j++) {
            printf("*");
        }
        for (int j = 1;j <= i;j++) {
            printf("  ");
        }
        for (int j = 1;j <= num - i;j++) {
            printf("*");
        }


        printf("\n");
    }
    return 0;
}