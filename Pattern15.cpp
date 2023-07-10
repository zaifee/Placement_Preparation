
#include <iostream>

using namespace std;
/*
1 
2 3 
4 5 6 
7 8 9 10 
*/
int main()
{
    int n, count = 1;
    cout<<"Enter any Number : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j <= n; j++){
            if(j >= 1 && j <= i){
                cout<<count<<" ";
                count++;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    
    
    
    return 0;
}
