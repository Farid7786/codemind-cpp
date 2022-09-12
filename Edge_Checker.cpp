#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b;
    c=abs(a-b);
    if(c==1||c==9)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}