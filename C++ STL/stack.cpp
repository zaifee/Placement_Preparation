#include <iostream>
#include<stack>

using namespace std;

int main()
{
    stack<string> s;
    s.push("Nawaz");
    s.push("Mohd");
   
   cout<<s.top();
   s.pop();
   cout<<endl;
   cout<<"Now the top element is: "<<s.top()<<endl;
   cout<<"Now the top element is: "<<s.size()<<endl;
   cout<<"Now the top element is: "<<s.empty()<<endl;
   
   
   
    return 0;
}
