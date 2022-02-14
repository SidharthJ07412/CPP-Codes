#include <iostream>
using namespace std;
//Traingle Pattern
int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n-i;j++)
   {
      cout<<" ";
      
    }
    for(int z=1;z<=i;z++)
    {
      cout<<z<<" ";
      
    }
    cout<<endl;    
  }
  return 0;
}