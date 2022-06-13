#include<bits/stdc++.h>
using namespace std;

int main()
{
    string input = "";
    map<string, int> mp;

    while (cin >> input) {
        int sizeCnt = 0;
        transform(input.begin(), input.end(), input.begin(), ::tolower);
        vector<string> tinput;
        string temp = "";

        for (int i = 0; i < input.size(); ++i) {

            if (isalpha(input[i])) {
                temp.push_back(input[i]);
            }

            else {
                tinput.push_back(temp);
                temp = "";
            }
        }

        if (temp.size() != 0) {
            tinput.push_back(temp);
        }

        for (int i = 0; i < tinput.size(); ++i) {

            for (int j = 0; j < tinput[i].size(); ++j) {
                
                if (!isalpha(tinput[i][j])) {
                    break;
                }

                else {
                    ++sizeCnt;
                }
            }

            if (sizeCnt == tinput[i].size() && !mp.count(tinput[i])) {
                mp[tinput[i]];
            }
            sizeCnt = 0;
        }
    }

    for (auto it = mp.begin(); it != mp.end(); ++it) {
        cout << (*it).first << endl;
    }
    
    return 0;
}
