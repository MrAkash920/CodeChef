/* Chef has taken his first dose of vaccine DD days ago. He may take the second dose no less than LL days and no more than RR days since his first dose.

Determine if Chef is too early, too late, or in the correct range for taking his second dose.

Input Format
First line will contain TT, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, three integers D, L, RD,L,R.
Output Format
For each test case, print a single line containing one string - "Too Early" (without quotes) if it's too early to take the vaccine, 
"Too Late" (without quotes) if it's too late to take the vaccine, "Take second dose now" (without quotes) if it's the correct time to take the vaccine. */
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	int d,l,r;
	cin>>d>>l>>r;
	if(d<l){
	    cout<<"Too Early"<<endl;
	}
	else if(d>r){
	    cout<<"Too Late"<<endl;
	}
	else{
	    cout<<"Take second dose now"<<endl;
	}
	}
	return 0;
}
