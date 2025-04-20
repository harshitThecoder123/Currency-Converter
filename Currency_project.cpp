#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

int main() {
    map<int, pair<string, double>> currencyRates = {
        {1, {"US Dollar (USD)", 1.00}},
        {2, {"Euro (EUR)", 0.93}},
        {3, {"British Pound (GBP)", 0.80}},
        {4, {"Indian Rupee (INR)", 86.30}},
        {5, {"Japanese Yen (JPY)", 151.90}},
        {6, {"Australian Dollar (AUD)", 1.54}},
        {7, {"Canadian Dollar (CAD)", 1.36}},
        {8, {"Swiss Franc (CHF)", 0.91}},
        {9, {"Chinese Yuan (CNY)", 7.23}},
        {10, {"Brazilian Real (BRL)", 5.05}},
        {11, {"Russian Ruble (RUB)", 92.75}},
        {12, {"South Korean Won (KRW)", 1354.58}},
        {13, {"Singapore Dollar (SGD)", 1.35}},
        {14, {"Mexican Peso (MXN)", 16.55}},
        {15, {"Turkish Lira (TRY)", 32.00}},
        {16, {"South African Rand (ZAR)", 18.80}},
        {17, {"New Zealand Dollar (NZD)", 1.66}},
        {18, {"Indonesian Rupiah (IDR)", 15900.0}},
        {19, {"Thai Baht (THB)", 36.50}},
        {20, {"Malaysian Ringgit (MYR)", 4.74}},
        {21, {"Vietnamese Dong (VND)", 24800.0}},
        {22, {"Philippine Peso (PHP)", 56.20}},
        {23, {"Pakistani Rupee (PKR)", 278.0}},
        {24, {"Bangladeshi Taka (BDT)", 109.0}},
        {25, {"UAE Dirham (AED)", 3.67}}
    };

    cout << "------ CURRENCY CONVERTER ------\n" << endl;

    
    for (const auto& item : currencyRates) {
        cout << item.first << ". " << item.second.first << endl;
    }

    int from, to;
    double amount;

    cout << "\nEnter the Number Code of currency you want to convert FROM: ";
    cin >> from;

    cout << "Enter the Number Code of currency you want to convert TO: ";
    cin >> to;

    cout << "Enter amount: ";
    cin >> amount;

    if (currencyRates.find(from) == currencyRates.end() || currencyRates.find(to) == currencyRates.end()) {
        cout << " Invalid currency selection." << endl;
        return 1;
    }

    double fromRate = currencyRates[from].second;
    double toRate = currencyRates[to].second;

    double usdAmount = amount / fromRate;
    double converted = usdAmount * toRate;

    cout << fixed << setprecision(2);
    cout << "\n" << amount << " " << currencyRates[from].first << " = "
         << converted << " " << currencyRates[to].first << endl;

    return 0;
}
