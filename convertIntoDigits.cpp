#include <iostream>
using namespace std;
void convertIntoDigits(int &n){
int ans = 0;
 int digit;
  while(n){
   digit = n % 10;
    ans = (ans * 10) + digit;
    n = n/10;
    cout << digit << endl;
  }
  
}
int main() {
 int n = 345;
 convertIntoDigits(n);

  return 0;
}
