

#include <stdio.h>
/*
* * * * * * *
* * *   * * *
* *       * * 
*           *

*/
int main()
{
    int i, j, k;
    for(i = 1; i<=4; i++){
        
        for(j = 1;  j<=7; j++){
            
            if(j < 6-i || j >= 3+i){
                printf("*");
                
            }else{
                printf(" ");
               
            }
        }
        printf("\n");
    }

    return 0;
}
