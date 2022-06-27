//#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include <algorithm>
#include<numeric>
#include<vector>
#include<map>
#include <array>
#include<iomanip>
#include<limits.h>
const int MOD = 1e9 + 7;
using namespace std;
typedef long long ll;


int main() {

    int n;
    cin >> n;
    string s;
    vector <string> vec(n);

    for (int i = 0; i < n; ++i) {
         cin >> vec[i];
    }
    map<string, int> mp;
    for (int i = 0; i < n; ++i) {
        mp[vec[i]]++;

        if (mp[vec[i]] > 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
