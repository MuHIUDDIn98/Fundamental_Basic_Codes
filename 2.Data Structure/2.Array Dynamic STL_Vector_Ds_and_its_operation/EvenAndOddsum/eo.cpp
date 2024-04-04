#include<bits/stdc++.h>
using namespace std;
int main() {

	 int n;
    cin >> n;
    
    int evenSum = 0, oddSum = 0;
    while (n > 0) {
        int digit = n % 10;
        n = n/10;
        if (digit % 2 == 0)
            evenSum += digit;
        else
            oddSum += digit;
    }

	cout<<evenSum<<" "<<oddSum;

	
	
}