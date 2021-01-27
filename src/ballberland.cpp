#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		int A, B, k;
		cin >> A >> B >> k;
		vector<int> a(A), b(B);
		vector<pair<int, int> > e(k);
		for (auto &[x,y] : e) {
			cin >> x;
		}
		for (auto &[x,y] : e) {
			cin >> y;
		}
		for (auto &[x,y] : e) {
			a[x-1]++;
			b[y-1]++;
		}
		long long ans = 0;
		for (auto &[x,y] : e) {
			ans += k - a[x-1] - b[y-1] + 1;
		}
		cout << ans / 2 << endl;
	}
	return 0;
}
