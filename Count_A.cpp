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

    string s;
    cin >> s;
    int n;
    cin >> n;

    while (n--){

        int i,j;
        cin >> i >> j;
        i = i-1;
        j = j;

        int myCount = count(s.begin()+i,s.begin()+j,'a');
        cout << myCount << endl;
    }
}

