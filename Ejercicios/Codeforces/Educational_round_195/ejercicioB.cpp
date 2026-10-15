#include <bits/stdc++.h>

using namespace std;

signed main(){
   cin.tie(0) -> sync_with_stdio(0);
   int t;
   cin>> t;

   while(t--){
     string s;
     cin >> s;

     vector<int>  T(s.size()+10,-1);

     int Tr = 0;

     for(int i = 0; i < s.size()-1 ;i++){
     	if(s[i] != s[i+1]) Tr++;
     }
     
     T[Tr]++;


     for(int i = 1 ; i < s.size()-1; i++){
	bool l = 0,r = 0;

	if(s[i] != s[i-1]) l = 1;
	if(s[i] != s[i+1]) r =  1;
	
	int delta = (1-2*l) + (1-2*r);

	if(T[Tr+delta] == -1) T[Tr+delta]++; 	
     }

     
     long long  ans = 0;
     for(int i = 0; i < T.size();i++){
        if(T[i] != -1) ans++;
     }

     cout << ans << "\n";

   }
}
