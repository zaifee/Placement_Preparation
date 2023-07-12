
#include <iostream>

using namespace std;

int main()
{
    int a = 4, b = 6;
    cout<<"a&b"<<( a & b)<<" "<<endl; // 4&6  =binary(100 and 110) = binary(100) =4 in decimal
    cout<<"a|b"<<(a|b)<<endl;  // 4|6  =binary(100 or 110) = binary(110) =6 in decimal
    cout<<"~a"<<(~a)<<endl;   // not(a) = (4) = binary(.....0100) = (100)+1 = (101) = 5 in decimal
    cout<<"a^b"<<(a^b)<<endl;  //4&6  =binary(100 and 110) = binary(010) = 2 in decimal

    return 0;
}
