#include<iostream>
using namespace std;
int main(){
     int i, n, t1 = 0, t2 = 1, next = 0;
     cout<<"n = ";
     cin >> n;
     if(n == 0 || n == 1) 
        cout << n; 
     else
        next = t1 + t2;
     for (i = 3; i <= n; ++i)
     {
        t1 = t2;
        t2 = next;
        next = t1 + t2;
     }
     cout << t2;
}