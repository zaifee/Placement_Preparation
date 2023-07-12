class Solution {
    public int subtractProductAndSum(int n) {
        int sum = 0;
        int product = 1;
        while(n != 0){ // n = 234 // 23!=0(t)// 2!=0
          int digit = n%10; // 4 // 23%10 =3 //2
            product = product * digit; // 1*4 = 4 *3 = 12*2= 24
            sum = sum + digit; // 0 + 4 = 4+ 3 = 7 + 2 = 9
             n = n/10; // 23 // 2 // 0
        } // 0 != 0 conditon true
         
         int ans = product - sum; // 24-9
           return ans;  // = 15 Ans
        
    }
}
