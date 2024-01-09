#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int reverse=0;
    int rem;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        reverse=reverse*10+rem;
    }
    cout<<"The reverse number is:"<<endl<<reverse;
    return 0;
}