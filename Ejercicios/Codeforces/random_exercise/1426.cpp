#include <bits/stdc++.h>

using namespace std;
bool verificacion(vector<vector<vector<int>>>& a){
   int n = a.size() ;

   for(int k = 0;  k< n;k++){
     if(a[k][1][0] == a[k][0][1]) return true;
   }

  return false;
}


signed main(){
   cin.tie(0) -> sync_with_stdio(0);

   int t;
   cin >> t;

   while(t--){
      int n, m;
      cin >>n >> m;
      
      vector<vector<vector<int>>> a(n, vector<vector<int>>(2,vector<int>(2)));

        for(int i  = 0; i < n;i++){
          for(int j = 0; j < 2;j++){
            for(int k = 0; k < 2;k++){
              cin >> a[i][j][k];
            }
          }
        }

      if(m%2 != 0) cout << "NO\n";
      else{      
	cout << ((verificacion(a)) ? "YES\n" : "NO\n");
      }
   
   }

}
