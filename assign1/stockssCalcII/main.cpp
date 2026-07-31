#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of days: ";
    cin >> n;
    if (n <= 0) {
        cout << 0 << '\n';
        return 0;
    }
    int* prices = new int[n];
    cout << "Enter prices: ";
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    // At most two transactions DP with running states
    int buy1 = -prices[0];
    int sell1 = 0;
    int buy2 = -prices[0];
    int sell2 = 0;
    for (int i = 1; i < n; ++i) {
        // First transaction
        if (-prices[i] > buy1) buy1 = -prices[i];
        if (buy1 + prices[i] > sell1) sell1 = buy1 + prices[i];
        // Second transaction uses profit from first
        if (sell1 - prices[i] > buy2) buy2 = sell1 - prices[i];
        if (buy2 + prices[i] > sell2) sell2 = buy2 + prices[i];
    }

    cout << "Max Profit (at most two transactions) = " << sell2 << '\n';
    delete[] prices;
    return 0;
}
