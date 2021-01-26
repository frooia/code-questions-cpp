#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main() {
	lli n, m, a;
	cin>>n>>m>>a;
	lli r = ceil(n*1.0/a) * ceil(m*1.0/a);
	cout<<r<<endl;
	return 0;
}
