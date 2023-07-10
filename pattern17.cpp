
#include <iostream>

using namespace std;
/*
A A A 
B B B 
C C C 
*/
int main()
{
     int n, i, j;
     
    cout<<"Enter any Number : ";
    cin>>n;
   
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            char ch = 'A'+i-1;
            cout<<ch<<" ";
              
            
           
        }
        cout<<endl;
    }

    return 0;
}
