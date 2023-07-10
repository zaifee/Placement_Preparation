#include <stdio.h>
/*
* * * * *
  * * *
    *


*/
int main()
{    
    int rows;
    printf("Enter any Number of YOur choice : ");
    scanf("%d", &rows);
    for(int i =1; i<=rows; i++){
        for(int j =  1; j <= 2*rows-1; j++){
            if(j >= i && j <= 2*rows-i){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
