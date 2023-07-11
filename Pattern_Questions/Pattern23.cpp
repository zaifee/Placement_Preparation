
#include <iostream>
using namespace std;
/*
it is like counting take a count var and increment it 
pattern will be for n = 4 
A 
B C 
D E F 
G H I J 
*/


int main()
{
    char value = 'A';
    for(int i=1; i<=4; i++){
        for(int j=1; j<=4; j++){
            if(j <= i){
                cout<<value<<" ";
                value++;
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }

    return 0;
}
