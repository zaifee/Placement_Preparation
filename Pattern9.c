/*
A B C D C B A
A B C   C B A
A B       B A 
A            A

*/
int main()
{
    int i, j, k;
    for(i = 1; i<=4; i++){
         char ch = 'A';
        for(j = 1;  j<=7; j++){
            
            if(j < 6-i || j >= 3+i){
                printf("%c", ch);
                 j<=3?ch++:ch--;
                   
                
            }else{
                if(j == 4){
                 ch--;
                }
                printf(" ");
                
               
            }
        }
        printf("\n");
    }

    return 0;
}
