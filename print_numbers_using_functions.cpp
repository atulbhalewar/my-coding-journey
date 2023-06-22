#include<iostream>
using namespace std;
void printcounting(int n)
{
  //function body
for (int i=1;i<=n; i++)
{
  cout<<i<<" ";
}
  cout<<endl;
}
int main(){
  int n;
  cin>>n;
  //funcion call1
  printcounting(n);
  return 0;
}