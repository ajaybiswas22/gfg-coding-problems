#include <bits/stdc++.h> 
using namespace std; 
#define MAX 1000 

// Function to find the factorial 
// of large number and return 
// them in string format 
void factorial(long long n) 
{ 
	if (n > MAX) { 
		cout << " Integer Overflow"
			<< endl;
			return;
	} 

	long long counter; 
	long double sum = 0; 

	// Base case 
	if (n == 0) 
	{
		cout<<1<<endl;
	}
	else{
		

	// Calculate the sum of 
	// logarithmic values 

	for (counter = 1; counter <= n; 
		counter++) { 
		sum = sum + log(counter); 
	} 

	// Number becomes too big to hold in 
	// unsigned long integers. 
	// Hence converted to string 
	// Answer is sometimes under 
	// estimated due to floating point 
	// operations so round() is used 
	cout<<round(exp(sum))<<endl; 
	}
} 

// Driver code 
int main() 
{ 
	factorial(100); 
    return 0;
} 
