/*
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
*/  

#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  int i=1;
  while(i<=n)
    {
      int j=1;
      while(j<=n-i+1)
        {
          cout<<j;
          j=j+1;
        }
      
      int star=i-1;
      while(star)
        {
          cout<<"*";
          star=star-1;
        }

      int star2 = i-1;
      while(star2)
        {
          cout<<"*";
          star2=star2-1;
        }

      int col=n-i+1;
      while(col>=1)
        {
          cout<<col;
          col=col-1;
        }
      cout<<endl;
      i=i+1;
    }
}
