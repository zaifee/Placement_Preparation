
#include <iostream>
#include<deque>


using namespace std;

int main()
{
//   Deque is the type of element in which we can do insertion and deletion from both ends
   deque<int> d;
   d.push_back(1);
   d.push_back(2);
   d.push_front(0);
   for(int i: d){
       cout<<i<<" ";
   }cout<<endl;
   
//   for pop the element 
    cout<<"Before pop "<<endl;
    for(int i: d){
        cout<<i<<" ";
    }cout<<endl;
    d.pop_back();
    cout<<"After pop "<<endl;
    for(int i: d){
        cout<<i<<" ";
    }cout<<endl;
    
// can we pop the front element let's try  !!! Not possible
 cout<<"front element "<<d.front()<<endl;
 cout<<"Back element "<<d.back()<<endl;
  
  cout<<"Checking queue is empty ?:"<<d.empty()<<endl;
  cout<<"Element at Index :"<<d.at(1)<<endl;
// erase function takes argument to erase the size of the queue becomes 0 after erase the max size remains same.
 cout<<"Before erase: "<<d.size()<<endl;
  d.erase(d.begin(), d.begin()+1);
  cout<<"After erase: "<<d.size()<<endl;
  for(int i: d){
      cout<<i<<" ";
  }cout<<endl;
  
  
  d.push_front(0);
  d.push_back(2);
  for(int i: d){
      cout<<i<<" ";
  }cout<<endl;
  
  d.pop_back();
  for(int i: d){
      cout<<i<<" ";
  }cout<<endl;
  
  
    
   
   
   
    return 0;
}

    

    
  
