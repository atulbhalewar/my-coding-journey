#include <iostream>
using namespace std;
//1 is even
//0 is odd
bool isEven(int a) {
  if (a&1){
    return 0;
  }
  else{
    return 1;
  }
}
int main(){
  int num;
  cin>>num;
if (isEven(num)){
  cout<<"number is even"<<num<<endl;
}
  else {
    cout<<"number is odd"<<num<<endl;
  }
}