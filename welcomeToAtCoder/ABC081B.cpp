#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  int a[200];

  int count = 0;
  cin >> N;
  for (int i = 0; i < N; i++) cin >> a[i];

  while (true){
    bool odd = false;
    for (int i = 0; i < N; i++){
      if (a[i] % 2 != 0){
        odd = true;
      }
    }

    if (odd) break;

    for (int i=0; i < N; i++){
      a[i] /= 2;
    }
    count++;
  }
  cout << count << endl;
}
