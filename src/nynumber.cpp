#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	for (int testcase = 0; testcase < tc; testcase++) {
		int n; 
		cin >> n;
		if (n%2020 > n/2020) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	return 0;
}
