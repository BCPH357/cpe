#include<bits/stdc++.h>
using namespace std;

int main()
{
    int runTimes = 0;
    cin >> runTimes;

    for (int i = 0; i < runTimes; ++i) {
        string input;
        double first = 0;
        cin >> input;

        for (int j = 0; j < 3; ++j) {
            int temp = input[j] - 65;
            first += temp * pow(26, 2 - j);
        }
        string last;

        for (int j = 4; j < 8; ++j) {
            last.push_back(input[j]);
        }

        int ans = abs(first - stoi(last));
        
        if (ans <= 100) {
            cout << "nice" << endl;
        }

        else {
            cout << "not nice" << endl;
        }
    }
    return 0;
}
