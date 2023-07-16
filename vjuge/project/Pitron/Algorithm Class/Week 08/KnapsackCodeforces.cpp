#include<bits/stdc++.h>
using namespace std;

int max_possible_sum(vector<int>&wt, vector<int>&val, int size, int weight) {
    if(size == 0 or weight == 0) {
        return 0;
    }
    if(wt[size - 1] <= weight) {
        return max[val[size-1]] + max_possible_sum(wt, val ,size-1, weight -wt[size-1])
    }
}


int main()
{
    int n, w;
    cin >> n >> w;
    vector<int> wt, val;

    for(int i = 1; i <= n; i++) {
        int weight, value;
        cin >> weight >> value;
        wt.push_back(weight);
        val.push_back(value);
    }
}