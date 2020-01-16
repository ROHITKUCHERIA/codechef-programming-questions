#include<iostream>
using namespace std;
int main()
{

   int n,k,i;
    cin>>n>>k;
    int tot =0;
    for(i=0;i<n;i++)
    {
        long long int t;
        cin>>t;

    if(t%k==0)
    {
        tot++;
    }
    else
        tot=tot;
    }
    cout<<tot<<endl;
}

