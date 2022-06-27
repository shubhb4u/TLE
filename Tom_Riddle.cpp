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


// Approach 2 - first count if the name is present and then add the names to a set in the end


//#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include <algorithm>
#include<numeric>
#include<vector>
#include<map>
#include <array>
#include<iomanip>
#include <set>
#include<limits.h>
const int MOD = 1e9 + 7;
using namespace std;
typedef long long ll;


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n;
    cin >> n;
    set<string> s;
    while(n--){
        string name;
        cin >> name;

        (s.find(name) != s.end()) ? cout << "YES"<< endl : cout << "NO" << endl;
        s.insert(name);
    }

}
