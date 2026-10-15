#include <bits/stdc++.h>
#define ll long long 
using namespace std;

signed main(){

  cin.tie(0) -> sync_with_stdio(0);

  int t;
  cin >> t;

  while(t--){
  
    int n,k;
    cin >> n >> k;

    vector<int> P_sum(n+1,0);

    for(int i =  0; i < n;i++){
       ll x;
       cin >> x;

       P_sum[i+1] = (P_sum[i] + x) % k;
    }

    vector<ll> cnt(k,0);

    ll ans = 0;

    for(int r = k+1; r <=n;r++){
    	cnt[P_sum[r-k-1]]++;
	ans += cnt[P_sum[r]];

    }

    cout << ans << "\n";
  }
}
