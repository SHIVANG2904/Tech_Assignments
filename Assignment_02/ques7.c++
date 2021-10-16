#include <iostream>
using namespace std; 
int main(void) {  
        int n,i,j,k=1,temp; 
        cout<<"Enter N:"; 
        cin>>n; 
        for(i=1;i<=n;i++) 
        { 
                for(j=1;j<=i;j++) 
                { 
                        cout<<k; 
                        if(i != j) 
                            cout<<"*"; 
                        k++; 
                } 
                cout<<endl; 
        } 
        k-=n; 
        temp=k; 
        for(i=n;i>=1;i--) 
        { 
                for(j=1;j<=i;j++) 
                { 
                        cout<<temp; 
                        if(j == i) 
                           continue; 
                        else 
                           cout<<"*"; 
                        temp++; 
                } 
                cout<<endl; 
                k-=(i-1); 
                temp=k; 
        } 
return 0; 
}