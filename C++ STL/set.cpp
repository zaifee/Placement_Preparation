// ------------------Set-----------------------------------//
// Set include only unique element not duplicate and the modification of element inside the set cannot be done.
// We can either insert or delete --> no modification 
// It's implementation behing the scene are done by BST .
// elements in the set are return in sorted order.
// the diff b/t ordered set and unordered set is ordered_set are slow and unordered set return element in unsorted order.
#include <iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;
    // inert take O(log n) time
    s.insert(0);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(0);
    s.insert(0);
    s.insert(0);  //Here it will insert only unique element in the set not pushing duplicate element in the set.
    
    for(int i: s){
        cout<<i<<" ";
    }cout<<endl;
    
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    
    for(int i: s){
        cout<<i<<" ";
    }cout<<endl;
    
    // here count tell the element present or not
    cout<<"3 is present or not ? "<<s.count(3)<<endl; //1
    cout<<"5 is present or not ? "<<s.count(5)<<endl; //0
    
    // find function returns the elements
    set<int>:: iterator itr = s.find(3);
   

    for(auto it = itr; it != s.end(); it++){
        cout<<*it<<" ";  // it will print value at this location
    }cout<<endl;
    
    // the time complexity for insert, find, range, count, is O(log n) while rest of are O(1);
    
          
    
   
    return 0;
}

