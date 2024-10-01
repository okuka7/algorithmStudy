#include <iostream>

using namespace std;


int n = 5, k = 3, a[5] = {1,2,3,4,5};


//중첩 for문
int main(){
  vector<int> b;
  for(int i =0; i< n; i++){
    for(int j = i + 1; j < n; j ++){
      for(int k = j +1; k < n; k ++){
        cout << i << " : " << j << " : " << k << "\n";
      }
    }
  }
}