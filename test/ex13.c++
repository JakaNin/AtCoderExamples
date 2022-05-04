#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int sum = 0;
  vector<int> vec(N);
  for (int i = 0; i < vec.size(); i++){
    cin >> vec[i];
    sum += vec[i];
  }
  int avg;
  avg = sum / vec.size();
  for (int i = 0; i < vec.size(); i++){
    if (vec[i] > avg){
      cout << vec[i] - avg << endl;
    }
    else if (vec[i] < avg){
      cout << avg - vec[i] << endl;
    }
    else {
      cout << "0" << endl;
    }
  }
}

