#include <bits/stdc++.h>
using namespace std;
double tax_count(double income)
{
    double tax = 0.0;
    double personalAllowance = 12500.0;
    if (income > 100000.0)
    {
        double extra = income - 100000.0;
        double reduction = extra / 2.0;

        personalAllowance -= reduction;
        if (personalAllowance < 0)
            personalAllowance = 0;
    }
    
    if (income > personalAllowance)
    {
        double remain = income - personalAllowance;

        double basicIncome = 50000.0 - 12500.0;
        if (remain <= basicIncome)
        {
            tax += remain * 0.20;
            remain = 0;
        }
        else
        {
            tax += basicIncome * 0.20;
            remain -= basicIncome;
        }

        double higherIncome = 150000.0 - 50000.0;
        if (remain > 0)
        {
            if (remain <= higherIncome)
            {
                tax += remain * 0.40;
                remain = 0;
            }
            else
            {
                tax += higherIncome * 0.40;
                remain -= higherIncome;
            }
        }

        if (remain > 0)
        {
            tax += remain * 0.45;
        }
    }

    return tax;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        double X;
        cin >> X;

        double low = 0.0, high = 1e9, mid;
        for (int iter = 0; iter < 100; ++iter)
        {
            mid = (low + high) / 2.0;
            double computedTax = tax_count(mid);
            if (computedTax < X)
                low = mid;
            else
                high = mid;
        }

        cout << fixed << setprecision(2) << mid << "\n";
    }

    return 0;
}