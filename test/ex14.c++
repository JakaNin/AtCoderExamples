#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  vector<int> vec = {A, B, C};
  sort(vec.begin(), vec.end());
  cout << vec[2] - vec[0] << endl;

  //int maximum = max(max(a, b), c); // 最大値を計算
  //int minimum = min(min(a, b), c); // 最小値を計算
 
  //cout << maximum - minimum << endl;
}

