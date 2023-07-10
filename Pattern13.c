
#include <stdio.h>

int main()
{
   /*
   3 2 1 
   3 2 1 
   3 2 1
   
   */
   int n;
   printf("Enter any number of row : ");
   scanf("%d", &n);
   for(int i=1; i <= n; i++){
       for(int j=1; j <= n; j++){
           printf(" %d ", n-j+1);
    }
     printf("\n");
   }    
    
    return 0;
}
