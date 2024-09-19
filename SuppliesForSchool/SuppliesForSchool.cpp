#include <iostream>
using namespace std;

int main() {

    const double priceForPen = 5.80;
    const double prcieForMarkers = 7.20;
    const double priceForCleaner = 1.20;

    int packetOfPens;
    cin >> packetOfPens;

    int packetOfMarkers;
    cin >> packetOfMarkers;

    int litersOfCleaner;
    cin >> litersOfCleaner;

    int percentDiscount;
    cin >> percentDiscount;

    double totalsumForPens = priceForPen * packetOfPens;
    double totalsumForMarkers = prcieForMarkers * packetOfMarkers;
    double totalsumForCleaner = litersOfCleaner * priceForCleaner;

    double sumBeforDiscount = totalsumForPens + totalsumForMarkers + totalsumForCleaner;
    double discount = sumBeforDiscount * (1.0 * percentDiscount / 100);
    double sumAfterDiscount = sumBeforDiscount - discount;

    cout << sumAfterDiscount << endl;
}
