#include <stdio.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
            for(int j =1 ;j<=(2*num);j++){
                if(j<=i|| j >=(2*num)-i+1){
                    printf("*");
                }
                else{
                    printf(" ");
                }
               
            }
             printf("\n");
        }
        for(int i=num-1;i>=1;i--){
            for(int j =1 ;j<=(2*num);j++){
                if(j<=i|| j >=(2*num)-i+1){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
             printf("\n");
        }
      
    return 0;
}