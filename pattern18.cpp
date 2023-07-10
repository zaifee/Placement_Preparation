
#include <iostream>

using namespace std;
/*
 A B c 
 A B c 
 A B c  
 */
int main()
{
     int n, i, j;
     
    cout<<"Enter any Number : ";
    cin>>n;
   
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            char ch = 'A'+j-1;
            cout<<ch<<" ";
              
            
           
        }
        cout<<endl;
    }

    return 0;
}
