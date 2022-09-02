/* Question link: https: www.codechef.com/LP1TO201/problems/MAX_DIFF */ 
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,s;
	    cin>>n>>s;
	    int ans=0;
	    if(s<=n){
	        ans=s;
	    }
	    else{
	        ans=(n-s)+n;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
