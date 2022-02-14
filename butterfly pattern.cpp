#include <iostream>
using namespace std;

//----> ButterFly Pattern <---- 

int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=2*n;i++)
  { if(i<=n)
  {
   for(int j=1;j<=2*n;j++)
   { if(j<=i||j>=2*n+1-i)
   {
     cout<<"*";
     }
     else
     cout<<" ";
   }
   }
   else
  {for(int j=1;j<=2*n;j++)  
   { if(j<=2*n+1-i||i<=j)
   cout<<"*";
   else
   cout<<" ";
   }
   }
    cout<<endl;
   }
   return 0;
   }