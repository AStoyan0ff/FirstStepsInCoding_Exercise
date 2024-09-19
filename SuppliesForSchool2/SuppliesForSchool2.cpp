#include <iostream>
using namespace std;

int main() {

    const double penPrice = 5.80;
    const double markerPrice = 7.20;
    const double cleanerPrice = 1.20;

    int penCount, markerCount, cleanerCount;
    cin >> penCount >> markerCount >> cleanerCount;

    double percentDiscount;
    cin >> percentDiscount;

    double totalPenPrice = penPrice * penCount;
    double totalMarkerPrice = markerPrice * markerCount;
    double totalCleanerPrice = cleanerPrice * cleanerCount;

    double totalPriceBeforeDiscount =
        totalPenPrice +
        totalMarkerPrice +
        totalCleanerPrice;

    double discount = totalPriceBeforeDiscount * (percentDiscount / 100);
    double finalPrice = totalPriceBeforeDiscount - discount;

    cout << finalPrice << endl;
    return 0;
}
