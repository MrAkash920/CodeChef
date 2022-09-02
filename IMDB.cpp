/*Chef has been searching for a good motivational movie that he can watch during his exam time. His hard disk has XX GB of space remaining. His friend has NN movies represented with (S_i, R_i)
representing (space required, IMDB rating). Help Chef choose the single best movie (highest IMDB rating) that can fit in his hard disk.

Input
The first line of the input contains a single integer TT denoting the number of test cases. The description of TT test cases follows.
The first line of each test case contains two space-separated integers NN and XX.
N lines follow. For each valid i the i-th of these lines contains two space-separated integers Si and Ri.

Output
For each test case, print a single line containing one integer - the highest rating of an IMDB movie which Chef can store in his hard disk.*/
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
