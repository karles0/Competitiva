#include <bits/stdc++.h>

using namespace std;
signed main(){
  cin.tie(0) -> sync_with_stdio(0);
  int t;
  cin >> t;
  while(t--){
    int n;
    string s;
    cin >>n >>s;
    

    if(n <= 2) cout << 0 << "\n";
    else{
    
      int i = 0;
      int cnt = 0;
      while(i <n){
	 string klk1 = s.substr(i,3);
         if(klk1 == "map" || klk1 == "pie") cnt++;
	 i++;
      }

      if(cnt == 0) cout << 0 << "\n";
      else{
          int cnt2 = 0;
          for(string klk: {"mapie", "map", "pie"}){
	    for(int i = 0; i < n ;i++){
	      if(klk == s.substr(i,klk.size())){
	        s[i + (int)klk.size()/2] = '0';
		cnt2++;
	      }
	    }
	  }

	  cout << cnt2<< "\n";
	}
      }
    }
  }
