#include <iostream>
#include<vector>

using namespace std;

void cardGame() {
    int alexWin = 0;
    int borisWin = 0;
    int draw = 0;
    int numberOfCards;
    cin >> numberOfCards;

    vector<int> alexCards;
    vector<int> borisCards;

    cout << alexWin << " " << borisWin << " " << draw << endl;
}

int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cardGame();
    }
    return 0;
}
