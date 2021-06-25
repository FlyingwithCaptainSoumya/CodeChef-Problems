// In Byteland they have a very strange monetary system.

// Each Bytelandian gold coin has an integer number written on it. A coin n can be exchanged in a bank into three coins: n/2, n/3 and n/4. But these numbers are all rounded down (the banks have to make a profit).

// You can also sell Bytelandian coins for American dollars. The exchange rate is 1:1. But you can not buy Bytelandian coins.

// You have one gold coin. What is the maximum amount of American dollars you can get for it?

// Problem Code: COINS

#include <bits/stdc++.h>

using namespace std;

map<int, long long> ans;

long long result(int N) {
    if (ans.count(N)) {
        return ans[N];
    }
    return ans[N] = max(1ll * N, result(N / 2) + result(N / 3) + result(N / 4));
}

int main() {
    ans[0] = 0;
    ans[1] = 1;
    int N;
    while (cin >> N) {
        cout << result(N) << endl;
    }
}