#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, pos, count;
	cin >> n >> k;
	count = 0;
	pos = 0;
	int s [n];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
		if (s[i] > 0) pos++;
	}
	if (pos < k) cout << pos << endl;
	else {
		count = k;
		for (int i = k; i < n; i++) {
			if (s[i] != s[k-1]) break;
			count++;
		}
		cout << count << endl;
	}
	return 0;
}
