// http://algospot.com/judge/problem/read/FESTIVAL

#include <iostream>
using namespace std;

int main() {
    int C;
    cin >> C;

    while (C--) {
        int N, L;
        cin >> N >> L;
        vector<int> costs;

        for (int i = 0; i < N; ++i) {
            int n;
            cin >> n;
            costs.push_back(n);
        }

        int min = INT_MAX;
        int cur = 0;
        for (int i = L; i <= N; ++i) {
            for (int j = 0; j <= N - i; ++j) {
                for (int k = j; k <= j + i; ++k) {
                    cur += costs[k];
                }
                if (min > cur)
                    min = cur;
                cur = 0;
            }
        }

        cout << min << "\n";
    }
}
