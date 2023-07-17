
#include <iostream>
#include<list>

using namespace std;

int main()
{
    list<int> l(6, 1);
    // copying list
    list<int> copying(l);
    for(int i: copying){
        cout<<i<<" ";
    }cout<<endl;
    l.push_back(2);
    l.push_front(1);
    
    for(int i: l){
        cout<<i<<" ";
    }cout<<endl;    // it is implemented using doubly-linked list more fun begin,front, back, empty,size, erase
    
    // erase take O(n) times because it is iterating through each element
    
    cout<<"Before erase "<<l.size()<<endl;
    for(int i: l){
        cout<<i<<" ";
    }cout<<endl;
    l.erase(l.begin());
    cout<<"After erase "<<l.size()<<endl;
    for(int i: l){
        cout<<i<<" ";
    }cout<<endl;
    
    l.push_front(1);
    l.push_front(0);
    l.push_back(3);
    
    for(int i: l){
        cout<<i<<" ";
    }cout<<endl;
    
    l.pop_front();
    for(int i: l){
        cout<<i<<" ";
    }cout<<endl;
    



    return 0;
}
