#include <iostream>

using namespace std;
/*
D 
C D 
B C D 
A B C D
*/
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        char ch = 'A'+n-i;
        for(int j=1; j<=n; j++){
            
            if(j <= i){
                cout<<ch<<" ";
                ch++;
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }
    
    
    
    
    return 0;
}
