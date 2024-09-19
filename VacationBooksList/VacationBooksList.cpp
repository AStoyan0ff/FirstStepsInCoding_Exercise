#include <iostream>
using namespace std;

int main() {

    int numberOfPageInBook;
    cin >> numberOfPageInBook;

    int numberOfPagesReadInOneHour;
    cin >> numberOfPagesReadInOneHour;

    int numberOfDaysForWichNeedToReadTheBook;
    cin >> numberOfDaysForWichNeedToReadTheBook;

    int neededHoursToReadTheBook = numberOfPageInBook / numberOfPagesReadInOneHour;
    int numberOfHoursPerDayToCanFinishReading = neededHoursToReadTheBook /
        numberOfDaysForWichNeedToReadTheBook;

    cout << numberOfHoursPerDayToCanFinishReading << endl;
    return 0;
}