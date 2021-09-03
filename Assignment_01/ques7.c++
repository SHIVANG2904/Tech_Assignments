#include <iostream>
    using namespace std;
    int main()  
    {  
        int n,sum = 0;  
        cin>>n;
        int num = n;   
        while(n > 0)
        {  
            int rem = n%10;  
            sum = sum + rem;  
            n = n/10;  
        }  
        if(num % sum == 0)  
            cout<<"Harshad number";  
        else  
            cout<<"Not a Harshad number"; 
        return 0;  
        }
