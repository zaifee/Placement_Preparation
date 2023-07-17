// algorithm like binary Search and all...
#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
   vector<int> v;
   v.push_back(1);  //As it is binary search so will push in sorted order
   v.push_back(3);
   v.push_back(4);
   v.push_back(6);
   
   cout<<"finding 6 " <<binary_search(v.begin(), v.end(),  6);
   
//   Here we can find the lower bond and upper bond of the algorithm
    cout<<"lower bond "<<lower_bound(v.begin(), v.end(), 6)-v.begin()<<endl;
    cout<<"Upper bond"<<upper_bound(v.begin(), v.end(), 4)-v.begin()<<endl;
    
    
    int a = 4;
    int b = 5;
    int c = 0;
    
    // it will take only two arguments
    cout<<"Max"<<max(a,b)<<endl;
    
    cout<<"Min"<<min(a,b)<<endl;
    
    // swap
    swap(a, b);
    cout<<"a"<<a<<endl;
    
    // reversing of string or number
    string ab = "abcd";
    reverse(ab.begin(), ab.end());
    cout<<ab<<endl;
    
    // rotate take from where we have to start, middle element, and end element
    rotate(v.begin(), v.begin()+1, v.end());
    cout<<"After rotate "<<endl;
    for(int i: v){
        cout<<i<<" ";
    }cout<<endl;
    
    
    //sorting
    sort(v.begin(), v.end());
    for(auto i: v){
        cout<<i;
    }
   
   
    return 0;
}
