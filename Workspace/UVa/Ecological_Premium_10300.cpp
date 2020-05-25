#include <bits/stdc++.h>
using namespace std;
int main() {
	int T, a, n, p, f;
	scanf("%d", &T);
	while (T--) {
		int ans = 0;
		scanf("%d", &f);
		for (int i = 0; i < f; i++) {
			scanf("%d %d %d", &a, &n, &p);
			ans += a * p;
		}
		printf("%d\n", ans);
	}

	return 0;
}

