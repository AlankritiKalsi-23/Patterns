/*
   1
  23
 456
78910
*/

#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  int i=1, count=1;
  while(i<=n)
    {
      int space=n-i;
      while(space){
        cout<<" ";
        space=space-1;
      }
      
      int j=1;
      while(j<=i)
        {
          cout<<count;
          count=count+1;
          j=j+1;
        }
      cout<<endl;
      i=i+1;
    }
}
