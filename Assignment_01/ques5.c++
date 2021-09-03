#include<iostream>
using namespace std;
int main()
{
    long n,a=0,b=1,temp=0,i,y=0;
    cout<<"n = ";
    cin>>n;   
    for(int i=1;y<n;i++)
    {
        if(temp<i)
        {
            temp=a+b;
            a=b;
            b=temp;
        }
        if(i!=temp)
        {
           cout<<i<<" ";
           y++;
        }
    }
    return 0;
}
