#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// get the sum of the numbers from 1 to 'n'
		long long sum = ((long long) n * (n + 1)) / 2;
		long long pow2 = 1;
		while (pow2 <= n) {
			// we need to subtract the power of two TWICE (since the first subtraction 
			// will simply subtract a number from the sum, and the second subtracts)
			// basically, the original powers of two are multiplied by a factor of 2
			// for example: 
			// the needed powers of two are: 1, 2, 4
			// in this operation, it becomes: 2, 4, 8
			sum -= pow2 * 2;
			pow2 *= 2;
		}
		cout << sum << '\n';
	}
	return 0;
}
