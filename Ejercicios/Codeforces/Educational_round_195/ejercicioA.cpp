#include <bits/stdc++.h>

using namespace std;

signed main(){
   cin.tie(0) -> sync_with_stdio(0);
  int t;
  cin >> t;

  while(t--){
  
    int a , b;
    cin >> a >> b;

    if(b >= a) cout << -1 << "\n";
    else cout  << min(b,a-b) << "\n";
  }
}
