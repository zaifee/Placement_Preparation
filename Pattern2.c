
    /*
    * * * * *
    * * * *
    * * * 
    * *
    *
    */






#include<stdio.h>
void main()
{
    int i, n;
    printf("Enter any Number of Your choice : ");
    scanf("%d", &n);
    for(i = 1; i<=n; i++){
        int j;
        for(j = 1; j<=n; j++){
            if(j <= 6-i){
                printf(" *");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    
}
