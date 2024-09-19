#include <iostream>
using namespace std;

int main() {
    double annualFee;
    cin >> annualFee;

    annualFee - (annualFee * 0.40);
    double shoesPrice = (annualFee * 0.60);  
    double clothesPrice = shoesPrice * 0.80;  
    double ballPrice = clothesPrice / 4;
    double accessoriesPrice = ballPrice / 5;

    double totalCost = annualFee + shoesPrice + clothesPrice + ballPrice + accessoriesPrice;

    cout << totalCost << endl;

    return 0;
}