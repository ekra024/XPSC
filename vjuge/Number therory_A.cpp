#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
typedef pair<int, int> pii;
const int MX = 1e3;

pii d[MX];

bool order_cond (pii x, pii y) {
  if (x.s != y.s)
    return x.s < y.s;
  return x.f > y.f;
}

void pre_compute() {
  for (int i = 1; i <= MX; i++) {
    d[i - 1].f = i;
    for (int j = i; j <= MX; j += i) {
      d[j - 1].s++;
    }
  }
  sort(d, d + MX, order_cond);
}

int main() {
  int T, N;
  pre_compute();
  cin >> T;
  for(int i = 1; i <= T; i++) {
    cin >> N;
    cout << "Case " << i << ": " << d[N - 1].f << endl;
  }
  return 0;
}

