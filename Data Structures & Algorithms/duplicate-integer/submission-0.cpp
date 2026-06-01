#include <bits/stdc++.h>
#include <numeric>
#define ll long long
// #define endl '\n'
#define ff first
#define ss second
#define scanf cin
#define printf cout
const int MOD = 998244353;
const int MAX = 1e9;
const long long LL = 1e18 + 1;
const int N = 1005;
using namespace std;  

class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> st;
        int count = 0;
        for (int n : nums) {
            st.insert(n);
            count++;
        }
        if (st.size() == count)
            return false;
        else
            return true;
    }
};