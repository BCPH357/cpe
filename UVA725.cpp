#include<bits/stdc++.h>
using namespace std;
bool numisdif(int num, int i)
{
    int num2 = num / i;
    vector<int> oneToNine(10);
    string strNum = to_string(num);
    string strNum2 = to_string(num2);
    string ans = strNum + strNum2;

    if (ans.size() < 9) {
        return false;
    }

    else if (ans.size() == 9) {

        for (int i = 0; i < ans.size(); ++i) {

            if (ans[i] == '0') {
                return false;
            }
        }
    }

    for (int i = 0; i < ans.size(); ++i) {

        if (ans[i] == '0') {
            ++oneToNine[0];
        }

        else if (ans[i] == '1') {
            ++oneToNine[1];
        }

        else if (ans[i] == '2') {
            ++oneToNine[2];
        }

        else if (ans[i] == '3') {
            ++oneToNine[3];
        }

        else if (ans[i] == '4') {
            ++oneToNine[4];
        }

        else if (ans[i] == '5') {
            ++oneToNine[5];
        }

        else if (ans[i] == '6') {
            ++oneToNine[6];
        }

        else if (ans[i] == '7') {
            ++oneToNine[7];
        }

        else if (ans[i] == '8') {
            ++oneToNine[8];
        }

        else {
            ++oneToNine[9];
        }
    }

    for (int i = 0; i < oneToNine.size(); ++i) {

        if (oneToNine[i] >= 2) {
            return false;
        }
    }
    return true;

}

int main()
{
    int n = 0;
    cin >> n;
    vector<int> ans;

    for (int i = 1234; i <= 98765; ++i) {

        if (i % n == 0 && numisdif(i, n)) {
            ans.push_back(i);
        }
    }

    if (ans.size() >= 1) {

        for (int i = 0; i < ans.size(); ++i) {

            if (ans[i] / n < 10000) {
                cout << ans[i] << " / 0" << ans[i] / n << " = " << n << endl;
            }

            else {
                cout << ans[i] << " / " << ans[i] / n << " = " << n << endl;
            }
        }
        //cout << endl;
    }

    else {
        cout << "There are no solutions for " << n << "." << endl;
        //cout << endl;
    }

    while (cin >> n)
    {
        vector<int> ans;

        if (n == 0)
        {
            break;
        }
        else
        {
            cout << endl;
        }

        for (int i = 1234; i <= 98765; ++i) {

            if (i % n == 0 && numisdif(i, n)) {
                ans.push_back(i);
            }
        }

        if (ans.size() >= 1) {

            for (int i = 0; i < ans.size(); ++i) {

                if (ans[i] / n < 10000) {
                    cout << ans[i] << " / 0" << ans[i] / n << " = " << n << endl;
                }

                else {
                    cout << ans[i] << " / " << ans[i] / n << " = " << n << endl;
                }
            }
            //cout << endl;
        }

        else {
            cout << "There are no solutions for " << n << "." << endl;
            //cout << endl;
        }
    }
}
