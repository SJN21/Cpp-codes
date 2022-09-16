// Problem
// Bob has an account in the Bobby Bank. His current account balance is WW rupees.

// Each month, the office in which Bob works deposits a fixed amount of XX rupees to his account.
// YY rupees is deducted from Bob's account each month as bank charges.

// Find his final account balance after ZZ months. Note that the account balance can be negative as well.
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,w,x,y,z;
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>w>>x>>y>>z;
	    cout<<w+((x-y)*z)<<"\n";
	}
	return 0;
}
