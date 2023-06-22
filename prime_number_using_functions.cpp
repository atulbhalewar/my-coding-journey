#include <iostream>
using namespace std;
//1 hogya means prime hai
//0 hogya means prime nahi hai
bool isPrime(int n)
{
for (int i=2; i<n; i++)
{
  //divide hogya hai means not a prime number
  if (n%i==0)
  {
  return 0;  
  }

}
  return 1;
}
int main()
{
  int n;
  cin>>n;
if (isPrime(n))
{
  cout<<"it is a prime number"<<endl;
}
 cout<<"it is not a prime number"<<endl;   
   return 0;
}