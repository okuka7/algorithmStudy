#include <iostream>

using namespace std;


int n = 5, k = 3, a[5] = {1,2,3,4,5};


//중첩 for문
//순서와 상관없이 뽑는거기 때문에 상관없다.
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