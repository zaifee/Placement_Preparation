#include <iostream>

using namespace std;
/*
A B C 
B C D 
C D E  
formula used here is: i+j-1 = 1 ;
WE HAVE TO MAP THIS formula WTH ALPHABETS IN ORDER TO MAP THIS WE HAVE TO ADD A-1 ON BOTH SIDE
'A'-1+ i +j-1 = 1 + 'A'- 1 
so it comes out to be => 'A'+ i+ j -2 = 'A'; WE USE THIS FORMULA 
*/
int main()
{
    int n;
    cout<<"Enter any number or rows of your choice : "<<endl;
    cin>>n;
    int i = 1;
   for(int i=1; i<=n; i++){
       for(int j=1; j<=n; j++){
           char ch = 'A'+i+ j-2;
           cout<<ch<<" ";
       }cout<<endl;
   }
  
    return 0;
}
