#include <bits/stdc++.h>
#define vi vector<int>
#define ll long long 

using namespace std;
char letra (vector<pair<int,char>>& frec,int val){
    char klk = 'a';
   for(int i = 0; i < frec.size();i++){
     if(val == frec[i].first) {frec[i].first++;klk = frec[i].second; break;}
   }

   return klk;
};


signed main(){
   cin.tie(0) -> sync_with_stdio(0);
   int t;
   cin >> t;

   while(t--){
   
     int n; cin >> n;

     vi a(n);
     for(auto& x : a) cin >> x;

     string solv;
     vector<pair<int,char>> frec;
     for(int i = 0; i < 26; i++){
        frec.push_back({0,'a' +i});
     }

     for(int i = 0; i < n;i++) {
        solv += letra(frec,a[i]);
     } 

     cout << solv << "\n";
     
   }

}
