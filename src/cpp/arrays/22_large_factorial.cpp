#include <bits/stdc++.h> 
using namespace std; 
#define MAX 1000 

// factorial of a large number
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
	else {
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
	cout<<to_string(round(exp(sum)))<<endl; 
	}
} 

int main() 
{ 
	factorial(100); 
	system("PAUSE");
} 
