#include <iostream>
using namespace std;

int main() {

    const double chickenPriceMenu = 10.35;
    const double fishPriceMenu = 12.40;
    const double vegetablePriceMenu = 8.15;
    const double deliveryPrice = 2.50;

    const double dessertPercent = 0.20;

    double chickenMenuCount, fishMenuCount, vegetableMenuCount;
    cin >> chickenMenuCount >> fishMenuCount >> vegetableMenuCount;

    double totalChickenMenuPrice = chickenPriceMenu * chickenMenuCount;
    double totalFishMenuPrice = fishPriceMenu * fishMenuCount;
    double totalVegetableMenuPrice = vegetablePriceMenu * vegetableMenuCount;

    double totalPriceMenu = totalChickenMenuPrice + totalFishMenuPrice + totalVegetableMenuPrice;
    double totalDessertPrice = totalPriceMenu * dessertPercent;

    double finalPrice = totalPriceMenu + totalDessertPrice + deliveryPrice;

    cout << finalPrice << endl;
    return 0;

}