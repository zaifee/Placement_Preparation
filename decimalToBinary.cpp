//Modulous Method
void covertToBinary(int n){
int binaryNo = 0;
int i= 0;
  while(n > 0){
    int digit = n % 2; //yaha galti ki modulo 10 se kar raha tha
    binaryNo = digit * (10,i++) + binaryNo;  //isse bits ko reverese kar rahe hai
    n = n  / 2;  //right shift kar diya to left most bit pop out ho jai gi jo pehle digit me use hoi thi
  }
  cout << binaryNo;
}







//bitwise Method -- 1 se kam hoga dono jagah 
void covertToBinary(int n){
int binaryNo = 0;
int i= 0;
  while(n > 0){
    int digit = n & 1;
    binaryNo = digit * (10,i++) + binaryNo;  //ise bits reverse kar rahe hai
    n = n  >> 1;  //right shift kar diya to left most bit pop out ho jai gi jo pehle digit me use hoi thi
  }
  cout << binaryNo;
}
