//
//  main.cpp
//  stockssCalc
//
//  Created by apexpredator on 12/07/26.
//

#include <iostream>
using namespace std;
int main() {
    
    int n;
    cout << "Enter number of days: ";
    cin >> n;
    if (n <= 0) {
        cout << 0;
        return 0;
    }
    int* prices = new int[n];
    cout << "Enter prices: ";
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }
    
    int minPrice = prices[0];
    int maxProfit = 0;
    for (int i = 1; i < n; ++i) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else {
            int profit = prices[i] - minPrice;
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }
    }
    cout << "Max Profit = " << maxProfit << '\n';
    delete[] prices;
    
    return 0;
}
