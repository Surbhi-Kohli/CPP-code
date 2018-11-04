#include<iostream>
using namespace std;
         int main() {
        int n,zeroCount=0;
        cin>>n;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<1;
      zeroCount=0;
      if(i%2==0)
      {
      
          while(j<=i-1)
          {
            if(zeroCount==i-2)
            break;
             
            cout<<0;
            j++;
            zeroCount++;
          }
          
      }
    }
    cout<<endl;
  }
  
	return 0;
}
