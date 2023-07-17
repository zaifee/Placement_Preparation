// map is the type of data Structure which store the value in the form of key-value and it return the value
// in the sorted order that is known as ordered_map while other is different that i.e unsorted.
#include <iostream>
#include<map>
using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "Mohd";
    m[2] = "Nawaz";
    m[9] = "Nothing";
    
    m.insert({5, "Zaifee"});
    
    for(auto i: m){
        cout<<i.first<<i.second<<endl;
    }
    // for checking element is present or not 
    cout<<"9 is present or not : "<<m.count(2)<<endl;
    
    // erase   -- time complexity would be O(log n) for insert,erase and all other func 
    cout<<"Before Erase "<<endl;
    for(auto i: m){
        cout<<i.first<<i.second<<" ";
    }cout<<endl;
    
    //we have to provide just value in case of Erase
    m.erase(9);
    
    cout<<"After Erase "<<endl;
    for(auto i: m){
        cout<<i.first<<i.second<<" ";
    }cout<<endl;
    
    
    // find return the iterator in case of map
    auto it = m.find(5);
    
    for(auto i=it; i != m.end(); i++){
        cout<<(*i).first<<endl;
    }
    
    
    
    cout<<m.size();
    
    
    
    
    
    return 0;
}
