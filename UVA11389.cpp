#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> ndr(3);

    while(cin >> ndr[0] >> ndr[1] >> ndr[2]) {
        
        if (ndr[0] == 0 && ndr[1] == 0 && ndr[2] == 0) {
            break;
        }
        vector<int> temp(ndr[0]);
        vector<vector<int>> rode;

        for (int i = 0; i < 2; ++i) {

            for (int j = 0; j < ndr[0]; ++j) {
                cin >> temp[j];
            }
            rode.push_back(temp);
        }
        sort(rode[0].begin(), rode[0].end());
        sort(rode[1].begin(), rode[1].end());
        int total = 0;

        for (int i = 0; i < ndr[0]; ++i) {

            if (rode[0][i] + rode[1][ndr[0] - 1 - i] - ndr[1] > 0) {
                total += (rode[0][i] + rode[1][ndr[0] - 1 - i] - ndr[1]) * ndr[2];
            }
        }
        cout << total << endl;
    }
    return 0;
}
