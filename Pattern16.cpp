
#include <iostream>

using namespace std;
/*
1 
2 1 
3 2 1 
4 3 2 1 
5 4 3 2 1 

*/

int main()
{
   int n, count = 1;
    cout<<"Enter any Number : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j >=1 && j <= i){
                cout<<i-j+1<<" ";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
