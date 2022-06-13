#include<bits/stdc++.h>
using namespace std;
int transfer(int num, int digit, int &ans2)
{
    vector<int> ans;
    int temp = num;
    int ans1 = 0;

    while (num >= digit) {
        ans.push_back(num % digit);
        num /= digit;
    }
    ans.push_back(num);
    ans2 = ans.size();

    for (int i = 0; i < ans.size(); ++i) {

        if (ans[i] == 0) {
            ++ans1;
        }

        else {
            return ans1;
        }
    }
    return ans1;   
}
int jie(int n) {

    if (n == 1){
        return 1;
    }

    else {
        return n * jie(n - 1);
    }
}

int main()
{
    while (true) {
        int n = 0;
        int m = 0; 
        int ans2 = 0;
        cin >> n >> m;
        int njie = jie(n);
        cout << transfer(njie, m, ans2) << " " << ans2 << endl;
    }
    return 0;
}
