#include <iostream>
#include <locale> 

using namespace std;

void problem1();
void problem2();

void problem1() {
    int n;

    cout << "Enter a three-digit number: ";
    cin >> n;

    if (n >= 100 && n <= 999) {

        int sum = 0;

        for (int temp = n; temp > 0; temp /= 10) {
            int digit = temp % 10;
            if (digit > 5) {
                sum += digit;
            }
        }
        cout << "Sum of digits, higher than 5: " << sum << endl;
    }
    else {
        cout << "No digit was higher than 5." << endl;
    }

}

void problem2() {
    int x;

    setlocale(LC_ALL, "uk_UA.UTF-8");

    cout << "Enter a number of a month: ";
    cin >> x;

    switch (x) {
    case 1:
        cout << "January" << endl;
        break;
    case 2:
        cout << "February" << endl;
        break;
    case 3:
        cout << "March" << endl;
        break;
    case 4:
        cout << "April" << endl;
        break;
    case 5:
        cout << "May" << endl;
        break;
    case 6:
        cout << "June" << endl;
        break;
    case 7:
        cout << "July" << endl;
        break;
    case 8:
        cout << "August" << endl;
        break;
    case 9:
        cout << "September" << endl;
        break;
    case 10:
        cout << "October" << endl;
        break;
    case 11:
        cout << "November" << endl;
        break;
    case 12:
        cout << "December" << endl;
        break;
    default:
        cout << "Invalid month number. Please enter a number between 1 and 12." << endl;
    }
}

int main() {
    problem1();
    problem2();
    return 0;
}
