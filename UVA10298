#include<bits/stdc++.h>
using namespace std;

int main()
{
    string input = "";

    while (cin >> input && input != ".") {

        vector<char> first;
        int len = input.size();

        for (int i = 0; i < input.size(); ++i) {
            first.push_back(input[i]);
        }
        vector<char> second(first);
        int counter = 1;
        first.erase(first.begin());
        second.pop_back();

        while (second != first) {
            first.erase(first.begin());
            second.pop_back();
            ++counter;
        }

        if (len % counter == 0) {
            cout << len / counter << endl;
        }

        else {
            cout << 1 << endl;
        }   
    }
    return 0;
}
