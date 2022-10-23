#include<iostream>

using namespace std;

int main() {
    int w;
    cin >> w;

    if(w % 2 == 0 && w >= 0 && w <= 100 && w / 2 > 1) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}