#include <bits/stdc++.h>

using namespace std;


f



int main(){
  string str = "apple,banana,orange,grape";
  vector<string> fruits = split(str,",");
  for(const string& fruit : fruits){
    cout << fruit << " ";
  }
  return 0;
}