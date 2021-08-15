#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	vector<vector<char>> s(n, vector<char>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> s[i][j];
		}
	}
	vector<int> a(m);
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}
	int score = 0;
	for (int i = 0; i < m; i++) {
		vector<int> counter(5, 0);
		for (int j = 0; j < n; j++) {
			// count the frequency (occurrences) of every letter present in the column
			counter[s[j][i] - 'A']++;
		}
		// find the letter with the highest frequency and multiply it to the corresponding score
		int highest_count = *max_element(counter.begin(), counter.end());
		// add the result to 'sum'
		score += (a[i] * highest_count);
	}
	cout << score << '\n';
	return 0;
}
