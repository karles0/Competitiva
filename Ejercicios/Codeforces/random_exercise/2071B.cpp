#include <bits/stdc++.h>

using namespace std;

bool check(long long  s){

 long long  r = round(sqrtl(s));
 return r*r ==s;
}

signed main(){

  int t;
  cin >> t;

  while(t--){
    long long  n;
    cin >> n;
    long long  sum = (n*(n+1))/2;
    if(check(sum)) cout << -1 << "\n";

    else{
      vector<int > solv;

      solv.push_back(2);
      solv.push_back(1);

      long long acum = 3;

      for(int i = 2 ; i<n;i++){
        if(check(acum)){
	   solv.push_back(i+1);
	   swap(solv[i],solv[i-1]);
	   acum += i+1;
	}else{
	  solv.push_back(i+1);
	  acum += i+1;
	}

      }

      for(auto& i :solv) cout << i << " ";
      cout << "\n";
    }
  }
}
