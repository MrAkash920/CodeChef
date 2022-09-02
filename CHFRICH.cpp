/*Chef aims to be the richest person in Chefland by his new restaurant franchise. Currently, his assets are worth AA billion dollars and have no liabilities. He aims to increase his assets by XX billion dollars per year.

Also, all the richest people in Chefland are not planning to grow and maintain their current worth.

To be the richest person in Chefland, he needs to be worth at least BB billion dollars. How many years will it take Chef to reach his goal if his value increases by XX billion dollars each year?

Input
The first line contains an integer TT, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, three integers AA, BB, XX.
Output
For each test case, output in a single line the answer to the problem.*/

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
