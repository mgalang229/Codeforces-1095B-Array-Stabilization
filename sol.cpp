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
	// get the maximum and minimum value without the last element
	int max_without_first = INT_MIN;
	int min_without_first = INT_MAX;
	for (int i = 0; i < n - 1; i++) {
		max_without_first = max(max_without_first, a[i]);
		min_without_first = min(min_without_first, a[i]);
	}
	// get the maximum and minimum value without the first element
	int max_without_last = INT_MIN;
	int min_without_last = INT_MAX;
	for (int i = 1; i < n; i++) {
		max_without_last = max(max_without_last, a[i]);
		min_without_last = min(min_without_last, a[i]);
	}
	// compare the instability without the last and without the first
	cout << min(max_without_first - min_without_first, max_without_last - min_without_last) << '\n';
	return 0;
}
