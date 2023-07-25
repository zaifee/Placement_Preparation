
#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    // creation
    unordered_map<string,int> um;
    
    // insertion
    pair<string,int> p = make_pair("nawaz", 1);
    um.insert(p);
    
    // 2 
    pair<string, int> pair2("love", 2);
    um.insert(pair2);
    
    //3 
    um["meara"] = 1;
    
    um["mera"] = 3;
    
    // search
    cout << um["mera"]<<endl;
    cout<< um["nawaz"]<<endl;
    cout<<um["love"] <<endl;
    // if the item or key is not present it gives zero.
    
    cout << um["Isha"] <<endl; 
    // cout<< um.at("Isha")<<endl;
    
    
    // to check whether the particular key is present or not
    cout<<um.count("nawaz")<<endl;
   cout<< um.size()<<endl;
   
//   erase the item or key
 cout<<um.erase("nawaz")<<endl;
 cout << um.size() <<endl;
 
//  accessing every element
// for(auto i: um){
//     cout << i.first << " " << i.second <<endl;
// }
// iterator
unordered_map<string,int> :: iterator it = um.begin();
while(it != um.end()){
    cout << it->first << " " << it->second << endl;
    it++;
}
cout << um.size() << endl;

    

    return 0;
}
