#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v(5);
    v[(v.size() - 1) * v.back()] *= 1;
    cout << v.back() << '\n';
    return 0;
}
