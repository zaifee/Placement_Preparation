
#include <iostream>
using namespace std;
// Home work questins
/*
1 1 1 1 
  2 2 2 
    3 3 
 
*/

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=n; j++){
            
            if(j >= i){
                cout<<i<<" ";
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }

    return 0;
}
