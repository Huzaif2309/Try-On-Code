#include <bits/stdc++.h>
using namespace std;
//Reversing the number
int reverse(int n)
{
    int reverse=0;
    int rem;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        reverse=reverse*10+rem;
    }
    return reverse;
}

int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int x=reverse(n);
    if(x==n)
    {
        cout<<"The given number is a palindrome"<<endl;
    }
    else{
        cout<<"The given number is not a palindrome"<<endl;
    }
    return 0;
}