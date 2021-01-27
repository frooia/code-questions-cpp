#include <bits/stdc++.h>
using namespace std;

int main() {
	long long tc, N;
	cin >> tc;
	for (int i = 0; i < tc; i++) {
		cin >> N;
		bool bad = true;
		while (N > 1) {
			if (N%2 == 0) N/=2;
			else { bad = false; cout << "YES" << endl; break; }
		}
		if (bad) cout << "NO" << endl;
	}
	return 0;
}
