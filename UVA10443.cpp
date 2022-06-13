#include<bits/stdc++.h>
using namespace std;

int main()
{
    int runtimes = 0;
    cin >> runtimes;

    for (int i = 0; i < runtimes; ++i) {//run times
        vector<int> input(3);
        int j = 0;

        while (cin >> input[j]) {//input r c n
            ++j;

            if (j == 3) {
                break;
            }
        }
        vector<vector<char>> cell;

        for (j = 0; j < input[0]; ++j) {//initialize cell
            vector<char> temp(input[1]);
            cell.push_back(temp);
        }

        for (int j = 0; j < input[0]; ++j) {//input the str to cell
            
            for (int k = 0; k < input[1]; ++k) {
                cin >> cell[j][k];
            }
        }
        
        
        for (int j = 0; j < input[2]; ++j) {
            vector<vector<char>> temp = cell;
        
            for (int k = 0; k < input[0]; ++k) {
                
                for (int l = 0; l < input[1]; ++l) {
                    
                    if (cell[k][l] == 'P') {

                        if ((k != 0 && cell[k - 1][l] == 'S') || (k != input[0] - 1 && cell[k + 1][l] == 'S') || 
                        (l != 0 && cell[k][l - 1] == 'S') || (l != input[0]) + 1 && cell[k][l + 1] == 'S') {
                            temp[k][l] = 'S';
                        }
                    }

                    else if (cell[k][l] == 'S') {

                        if ((k != 0 && cell[k - 1][l] == 'R') || (k != input[0] - 1 && cell[k + 1][l] == 'R') || 
                        (l != 0 && cell[k][l - 1] == 'R') || (l != input[0]) + 1 && cell[k][l + 1] == 'R') {
                            temp[k][l] = 'R';
                        }
                    
                    }

                    else if (cell[k][l] == 'R') {

                        if ((k != 0 && cell[k - 1][l] == 'P') || (k != input[0] - 1 && cell[k + 1][l] == 'P') || 
                        (l != 0 && cell[k][l - 1] == 'P') || (l != input[0]) + 1 && cell[k][l + 1] == 'P') {
                            temp[k][l] = 'P';
                        }
                    }
                }
            }
            cell = temp;
        }

        for (int j = 0; j < input[0]; ++j) {

            for (int k = 0; k < input[1]; ++k) {
                
                if (k == input[1] - 1) {
                    cout << cell[j][k] << endl;
                }

                else {
                    cout << cell[j][k];
                }
            }
        }

        if (i < runtimes - 1) {
            cout << endl;
        }
    }
    return 0;
}
