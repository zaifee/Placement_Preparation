
#include <iostream>

using namespace std;
/*
for n = 6 
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5
6 6 6 6 6 6 

*/

int main()
{
    int n;
    cout<<"Enter any Number : ";
    cin>>n;
    for(int i=1; i <= n; i++){
        for(int j=1; j<=n; j++){
            if(j >= 1 && j <= i){
               cout<< i ;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
