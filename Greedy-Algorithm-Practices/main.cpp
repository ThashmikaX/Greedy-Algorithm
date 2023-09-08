#include <iostream>

using namespace std;

int main()
{
    int x;
    int ten_count = 0, five_count = 0, two_count = 0, one_count = 0;

    cout << "Enter the value : ";
    cin >> x;

    while(x >= 10) {
        x = x - 10;
        ten_count++;
    }
    while(x >= 5) {
        x = x - 5;
        five_count++;
    }
    while(x >= 2) {
        x = x - 2;
        two_count++;
    }
    while(x >= 1) {
        x = x - 1;
        one_count++;
    }

    cout << "10 : " << ten_count << endl;
    cout << "5 : " << five_count << endl;
    cout << "2 : " << two_count << endl;
    cout << "1 : " << one_count << endl;
    return 0;
}
