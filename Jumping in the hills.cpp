#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,u,d;
        cin>>n>>u>>d;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int c=0;
        int count =1;
        for(int i=0;i<n-1;i++){
            if(a[i+1]-a[i]>u){
                break;
            }
            if(a[i]-a[i+1]>d && c==1){
                break;
            }
            if(a[i]-a[i+1]>d && c<1){
                c++;
            }
            count++;
        }
        cout<<count<<endl;
    }
	// your code goes here
	return 0;
}
