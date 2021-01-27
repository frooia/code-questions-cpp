#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while (tc--) {
		int N;
		string s;
		cin >> N >> s;
		char* ca = &s[0];
		vector<int> ans(N, 1);
		for (int i = 1; i < N; i++) {
			if (ans[i-1] + ca[i-1] == ans[i] + ca[i]) ans[i] = 0;
			// else ans[i] = 0;
		}
		for (int i : ans) cout << i;
		cout << endl;
	}
	return 0;
}
