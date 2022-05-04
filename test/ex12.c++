#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int sum;
  sum = 1;
  for (int i = 0; i < S.size(); i++ )
    if (S.at(i) == '+'){
      sum ++;
    }
    else if (S.at(i) == '-'){
      sum -= 1;
    }
    else {
      continue;
    }
  // ここにプログラムを追記
  cout << sum << endl;
}

