#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int qCount = 0;
    int tCount = 0;
    int i = 0;
    int j = s.size() - 1;
    bool check = true;
    while (1)
    {
        if (qCount == k)
        {
            cout << "NO" << endl;
            return 0;
        }
        if (tCount == k)
        {
            cout << "YES" << endl;
            return 0;
        }

        if (check == true)
        {
            if (s[i] == 'W')
            {
                s.erase(i);
                check = false;
            }
            else if (s[j] == 'W')
            {
                s.erase(j);
                check = false;
            }
            else if (s[i] == 'B' || s[j] == 'B')
            {
                int k = i, l = j;
                int cntT = 0, cntP = 0;
                while (k < j)
                {
                    if (cntT == 'B')
                    {
                        cntT++;
                        k++;
                    }
                    else if (cntP = 'B')
                    {
                        cntP++;
                        l++;
                    }
                }
                cntT > cntP ? s.erase(i) : s.erase(j);
                qCount++;
                check = false;
            }
        }
        else
        {
            if (s[i] == 'W')
            {
                s.erase(i);
                check = true;
            }
            else if (s[j] == 'W')
            {
                s.erase(j);
                check = true;
            }
            else if (s[i] == 'B' || s[j] == 'B')
            {
                int k = i, l = j;
                int cntT = 0, cntP = 0;
                while (k < j)
                {
                    if (cntT == 'B')
                    {
                        cntT++;
                        k++;
                    }
                    else if (cntP = 'B')
                    {
                        cntP++;
                        l++;
                    }
                }
                cntT > cntP ? s.erase(i) : s.erase(j);
                tCount++;
                check = true;
            }
            //     if(s[i] == 'W') {
            //         i++;
            //         // continue;
            //     }
            //     else{
            //         if(s[j] == 'W') {
            //             j--;
            //         }
            //         tCount++;
            //     }
            //     check = !check;
            // }

            // if(s[j] == "W" && check==true) {
            //     // qCount++;
            //     j--;
            //     check=false;
            // }
            // else if(check==false) {
            //     check=true;
        }
    }
    return 0;
}