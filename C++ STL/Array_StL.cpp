#include <iostream>
#include<array>

using namespace std;

int main()
{
    // C++ 
    int a[3] = {1,2,3};
    // array stl
         // datatype, no.of element> name of the array you want to give
    array<int, 4>a1 = {1,2,3,4};
    int n = a1.size();
    
    for(int i=0; i<n; i++){
       // cout<<a1[i];
    }
    cout<<"Accessing the Element at Index : "<<a1[2]<<endl;
    cout<<"Accessing the Element at Index : "<<a1.at(2)<<endl;
    
 //   cout<<"Checking Array is empty or not"<<a.empty()<<endl;  for simple array it will not work
   //stl array operation
      cout<<"Checking Array is empty or not "<<a1.empty()<<endl;
      cout<<"First elementof array "<<a1.front()<<endl;
      cout<<"Last element of array "<<a1.back()<<endl;  // all operation are done at O(1) time
    
    
    return 0;
}
