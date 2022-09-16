// There are two exits in a bus with 100100 seats:

// First exit is located beside seat number 11.
// Second exit is located beside seat number 100100.
// Seats are arranged in a straight line from 11 to 100100 with equal spacing between any 22 adjacent seats.

// A passenger prefers to choose the nearest exit while leaving the bus.

// Determine the exit taken by passenger sitting on seat XX.
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,x;
	cin>>n;
	for (int i=0;i<n;i++){
	    cin>>x;
	    if(x<=50){
	        cout<<"LEFT"<<"\n";
	    }
	    else{
	        cout<<"RIGHT"<<"\n";
	    }
	}
	return 0;
}
