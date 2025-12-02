#include <bits/stdc++.h>
using namespace std;

double income_from_tax(double x) {
    const double T1 = 7500.0;
    const double T2 = 27500.0;
    const double T3 = 42500.0;
    const double T4 = 52500.0;
    const double eps = 1e-12;

    if (x <= eps) return 0.0;
    if (x <= T1 + eps) return 12500.0 + 5.0 * x;
    if (x <= T2 + eps) return 50000.0 + 2.5 * (x - T1);
    if (x <= T3 + eps) return (x + 32500.0) / 0.6;
    if (x <= T4 + eps) return (x + 7500.0) / 0.4;
    return (x + 15000.0) / 0.45;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if (!(cin >> T)) return 0;
    cout.setf(std::ios::fixed);
    cout << setprecision(2);
    for (int i = 0; i < T; ++i) {
        double X;
        cin >> X;
        double income = income_from_tax(X);
        if (income < 0) income = 0;
        cout << income << "\n";
    }
    return 0;
}
