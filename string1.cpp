#include <bits/stdc++.h>
using namespace std;

bool v(char c){
  if(c=='a' || c == 'e')return true;
  return false;
}

int main() {
int t;
cin>>t;
while(t--){
  int n;
  cin>>n;
  string s;
  cin>>s;
  string r = "";
  while(!s.empty()){
  int x = 0;
  if(s.back()=='a' || s.back()=='e')x=2;
  else x = 3;
  while(x--){
    r +=s.back();
    s.pop_back();
  }
  r+='.';


  }
  r.pop_back();

 
//  r.erase(remove(r.begin(), r.end(), ' '), r.end()); 
    reverse(r.begin(),r.end());
  cout<<r<<endl;
}

  return 0;
}
