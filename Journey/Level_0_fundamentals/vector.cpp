#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v1, v2;
    v1.reserve(n);
    v2.reserve(n);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v1.push_back(x);
    }

    for (int i = 0; i < n; i++) {
        int y;
        cin >> y;
        v2.push_back(y);
    }

    vector<int> sum(n), diff(n);
    int dp = 0;

    for (int i = 0; i < n; i++) {
        sum[i] = v1[i] + v2[i];
        diff[i] = v1[i] - v2[i];
        dp += v1[i] * v2[i];
    }

    cout << "Sum: ";
    for (int x : sum) cout << x << " ";
    cout << "\n";

    cout << "Difference: ";
    for (int x : diff) cout << x << " ";
    cout << "\n";

    cout << "Dot Product: " << dp << "\n";

    return 0;
}
