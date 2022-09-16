// Problem
// In Chefland, a tennis game involves 44 referees.
// Each referee has to point out whether he considers the ball to be inside limits or outside limits. The ball is considered to be IN if and only if all the referees agree that it was inside limits.

// Given the decision of the 44 referees, help Chef determine whether the ball is considered inside limits or not.

// Sample 1:
// Input
// Output
// 4
// 1 1 0 0
// 0 0 0 0
// 0 0 0 1
// 1 1 1 1
// OUT
// IN
// OUT
// OUT
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,c,d,n;
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>a>>b>>c>>d;
	    if(a==0 && b==0 && c==0 && d==0){
	        cout<<"IN\n";
	    }
	    else{
	        cout<<"OUT\n";
	    }
	    
	}
	return 0;
}
