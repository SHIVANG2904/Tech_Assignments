#include <iostream>
#include<cmath>
using namespace std;
int main ()
{
  int n, c = 0, no = 2, i, curr = 0;
  cout<<"n = ";
  cin>>n;
  while (c != n)
  {
     int count = 0;
     for (i = 2; i <= sqrt (no); i++)
     {
       if (no % i == 0)
       {
          count++;
          break;
       }
     }
      if (count == 0)
      {
           c++;
           curr = no;
      }
      no = no + 1;
   }
  cout<<curr;
  return 0;
}