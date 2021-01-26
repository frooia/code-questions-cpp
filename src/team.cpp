#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc, count;
	cin >> tc;
	count = 0;
	for (int i = 0; i < tc; i++) {
		int s = 0;
		for (int j = 0; j < 3; j++) {
			int x;
			cin >> x;
			if (x == 1) s++;
		}
		if (s >= 2) count++;
	}
	cout << count << endl;
	return 0;
}
