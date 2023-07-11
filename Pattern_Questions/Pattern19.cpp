
#include <iostream>

using namespace std;
/*
A B C 
D E F 
G H I 
*/

int main()
{
    int n;
    cout<<"Enter the any Number of rows : "<<endl;
    cin>>n;
    char count = 'A';
    for(int i=1; i<=3; i++){
       
        for(int j=1; j<=3; j++){
            cout<<count<<" ";
            count++;
            
        }cout<<endl;
    }
    return 0;
}
