#include <iostream>

using namespace std;

int main()
{
    int x;
    int ten_count = 0, five_count = 0, two_count = 0, one_count = 0;

    cout << "Enter the value1 : ";
    cin >> x;

    int y1 = x % 10;
    ten_count = (x - y1)/10;

    int y2 = y1 % 5;
    five_count = (y1 - y2)/5;

    int y3 = y2 % 2;
    two_count = (y2 - y3)/2;

    int y4 = y3 % 1;
    one_count = (y3 - y4)/1;

    cout << "10 : " << ten_count << endl;
    cout << "5 : " << five_count << endl;
    cout << "2 : " << two_count << endl;
    cout << "1 : " << one_count << endl;
    return 0;
}

