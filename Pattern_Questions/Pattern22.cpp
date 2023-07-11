
#include <iostream>
using namespace std;
/*
A 
B B 
C C C
HERE WE ARE USING 'A'+ i -1 formula whre i the no. of rows.
*/


int main()
{
      int n;
      cout<<"Enter any number of rows : "<<endl;
      cin>>n;
      for(int i=1; i<=n; i++){
          for(int j=1; j<=n; j++){
              char ch = 'A'+ i -1;
              if(j <= i){
                  cout<<ch<<" ";
              }else{
                  cout<<" ";
              }
          }cout<<endl;
      }
      
      
      
    return 0;
}
