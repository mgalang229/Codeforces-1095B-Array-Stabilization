#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// sort the sequence in non-decreasing order
	sort(a.begin(), a.end());
	// compare the instability without the last element and without the first element
	cout << min(a[n - 2] - a[0], a[n - 1] - a[1]) << '\n';
	return 0;
}
