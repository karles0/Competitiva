#include <bits/stdc++.h>
#define ll long long 
#define vi vector<int>

using namespace std;

signed main(){
  cin.tie(0) -> sync_with_stdio(0);
    
  int n,l,r;
  cin  >> n >> l >> r;

  vi mins(n);
  vi maxs(n);
  mins[0] = 1;
  maxs[0] = 1;
  int count_min = 1; 
  int count_max = 1;
  for(int i = 1; i < n ;i++){
    if( n - i < l) mins[i] = 2*mins[i-1];
    else mins[i] = mins[i-1]; 
  }

  for(int i = 1; i < n;i++){
    if(count_max == r) maxs[i] = maxs[i-1];
    else maxs[i] = 2*maxs[i-1], count_max++;
  }

  ll ans_max = 0, ans_min = 0;

  for(int i = 0; i < n;i++){
    ans_min += mins[i];
    ans_max += maxs[i];
  }

  cout << ans_min << " " << ans_max << "\n";

}
