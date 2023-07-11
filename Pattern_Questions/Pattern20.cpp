
#include <iostream>

using namespace std;
/*
1 2 3 
2 3 4 
3 4 5  
formula used here is: i+j-1;

*/
int main()
{
    int n;
    cout<<"Enter any number or rows of your choice : "<<endl;
    cin>>n;
    int i = 1;
   for(int i=1; i<=n; i++){
       for(int j=1; j<=n; j++){
           cout<<i+j-1<<" ";
       }cout<<endl;
   }
  
    return 0;
}
