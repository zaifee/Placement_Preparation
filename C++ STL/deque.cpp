
#include <iostream>
#include<vector>

using namespace std;

int main()
{
    // Declaring the vector if we already know the Size
    vector<int> v1(3, 9);
    for(int i: v1){
        cout<<i<<" ";
    }cout<<endl;
    
    // copying vector into another vector
    vector<int> copying(v1);
    for(int i: copying){
        cout<<i<<" ";
    }cout<<endl;
    
    
    
    
    vector<int> v;
    cout<<"Capacity means memory allocate to the vector "<<v.capacity()<<endl;
    
    v.push_back(1);
    cout<<"Capacity means memory allocate to the vector "<<v.capacity()<<endl;
    
    v.push_back(2);
    cout<<"Capacity means memory allocate to the vector "<<v.capacity()<<endl;
    
    v.push_back(3);
    cout<<"Capacity means memory allocate to the vector "<<v.capacity()<<endl;
    
    cout<<"Size of the vector "<<v.size()<<endl;
    cout<<"Element at Index "<<v.at(0);
    
    cout<<"Element at front "<<v.front()<<endl;
    cout<<"Element at back "<<v.back()<<endl;
    
    cout<<"Before pop "<<endl;
    for(int i: v){
        cout<<i<<" ";
    }cout<<endl;
    v.pop_back();
    cout<<"After pop "<<endl;
    for(int i: v){
        cout<<i<<" ";
    }cout<<endl;
    
    // clear function clear the vector element not the memory assigned to the vector
    cout<<"Before Clear the Size of the vector is : "<<v.size()<<endl;
    v.clear();
    cout<<"After Clear the Size of the vector is : "<<v.size()<<endl;
    
    
    
    
    return 0;
}
