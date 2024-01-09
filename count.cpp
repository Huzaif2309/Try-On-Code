#include <bits/stdc++.h>
using namespace std;

int count_digits(int n)
{
int x=n;int count=0;
while (x!=0){
    x=x/10;
    count++;
}
return count;
}

int main()
{
    int n=5687;
    cout<<"Number of digits in"<<endl<<n<<" is"<<endl<<count_digits(n);
    return 0;
}