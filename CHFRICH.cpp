#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,x;
        cin>>a>>b>>x;
        int z=(b-a)/x;
        cout<<z<<endl;
    }
	return 0;
}
