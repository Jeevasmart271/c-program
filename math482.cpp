#include <iostream>
using namespace std;
int main() {
    int i,n,a=1000,b=1000,c;
    cin>>n;
    for(i=1;i<=n;i++)
    {
     c=a+b;
     a=c-a;
     b=c;
     if(i==n)
     {
       cout << b;
     }
    }
    return 0;
}
