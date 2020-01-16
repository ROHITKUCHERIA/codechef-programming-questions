#include <iostream>
using namespace std;
#define MAX 200

int main() {

	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[MAX] = {0};
	    a[0] = 1;
	    int carry = 0;
	    int size = 0;
	    for(int i=1; i<=n; i++){
	        for(int j=0;j<=size; j++){
	            a[j] = a[j]*i+carry;
	            carry = a[j]/10;
	            a[j] = a[j]%10;
	        }
	        while(carry){
	            size++;
	            a[size] = carry%10;
	            carry/=10;
	        }
	    }
	    for(int i=size;i>=0;i--)
	        cout<<a[i];
	   cout<<endl;
	}
	return 0;
}
