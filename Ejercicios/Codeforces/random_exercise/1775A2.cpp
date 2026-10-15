#include <bits/stdc++.h>

using namespace std;


signed main(){
  cin.tie(0) -> sync_with_stdio(0);

  int t;
  cin >> t;

  while(t--){
    string s;
    cin >> s;
    int n = s.size();
    if(s[0] == 'a' && s[1] == 'a') cout << s[0] << " " << s[1] << " " << s.substr(2,n-1) << "\n";
    else if(s[0] == 'b' && s[1] == 'b' ) cout << s[0] << " " << s[1] << " " << s.substr(2,n-1) << "\n ";
    else if(s[0] == 'b' && s[1] == 'a') cout << s[0] << " " << s[1] << " " << s.substr(2,n-1) << " \n";
    else cout << s.substr(0,n-2) << " " << s[n-2] << " " << s[n-1] << "\n";
  }
}
