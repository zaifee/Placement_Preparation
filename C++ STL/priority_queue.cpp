
#include <iostream>
#include<queue>

using namespace std;

int main()
{
 // it will fectches the maximum element from the queue or from maxi   
    priority_queue<int> maxi;  //declaration of max heap
    
    priority_queue<int, vector<int>, greater<int> >mini;  //declaration of min heap
   
    maxi.push(3);
    maxi.push(0);
    maxi.push(2);
    maxi.push(4); 
    maxi.push(5);
    
    cout<<"size of maxi "<<maxi.size()<<endl;
    int n = maxi.size();
    for(int i=0; i<n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;
    
    
    mini.push(3);
    mini.push(0);
    mini.push(2);
    mini.push(4); 
    mini.push(5);
    
    int m = mini.size();
    for(int i=0; i<m; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;
    
    
    cout<<"khali hai kya bhai -> "<<maxi.empty()<<endl;
    
    
    return 0;
}
