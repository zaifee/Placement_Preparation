
#include <iostream>
#include<queue>

using namespace std;

int main()
{
    queue<string> q;
    q.push("Mohd");
    q.push("Nawaz");
    q.push("qureshi");
    
    cout<<"Top element is :"<<q.front()<<endl;
    cout<<"Queue size "<<q.size()<<endl;
    q.pop();
    cout<<q.size()<<endl;
    cout<<"Top element after pop :"<<q.front()<<endl;
    
    
    

    return 0;
}
