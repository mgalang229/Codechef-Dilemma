#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		int cnt = 0;
		// after some trivial observations, we will see that the answer is always WIN
		// if the number of 1s in the string is odd
		for (int i = 0; i < (int) s.size(); i++) {
			cnt += (s[i] == '1');
		}
		cout << (cnt & 1 ? "WIN" : "LOSE") << '\n';
	}          
	return 0;
}
