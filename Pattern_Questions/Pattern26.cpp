
#include <iostream>
using namespace std;
/*
1 2 3 4 
  2 3 4 
    3 4 
      4 
      */

int main()
{
   int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=n; j++){
            
            if(j >= i){
                cout<<j<<" ";
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }


    return 0;
}
