#include<iostream>
using namespace std;
int main()
{
    int n,i,p=0,q,r;
    cout<<"Enter limit N:\n";
    cin>>n;
    q=1;
    for(i=1;i<=n;i++)
    {
        cout<<p<<"\t";
        r=p;
        p=p+q;
        q=r;
    }
    return 0;
}
