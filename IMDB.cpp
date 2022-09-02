#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int s[n],r[n];
	    for(int i=0;i<n;i++){
	        cin>>s[i]>>r[i];
	    }
	    int maxs =x;
	    int maxr =0;
	    for(int i=0;i<n;i++){
	        if(s[i]<=maxs){
	            if(r[i]>maxr){
	                maxr=r[i];
	            }
	        }
	    }
	    cout<<maxr<<" ";
	}
	return 0;
}