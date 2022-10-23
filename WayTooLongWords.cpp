#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s;
    for(int i = 0; i < n; i++) {
        string str;
        cin >> str;
        if(str.size() > 10) {
            string size = to_string(str.size() - 2);
            string newStr;
            newStr += str[0];
            newStr += size;
            newStr += str[str.size() - 1];
            // newStr.push_back(str[0]);
            // newStr.push_back(size);
            s.push_back(newStr);

        }
        else {
            s.push_back(str);
        }
    }

    for(int i = 0; i < s.size(); i++) {
        cout << s[i] << endl;
    }


    return 0;
}
