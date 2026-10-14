#define ll long long 
#define vll vector<long long>
#define vi vector<int>

#include <bits/stdc++.h>
using namespace std; 

struct node{
	ll val, l, r;
	node(ll val, int l = -1, int r = -1)  : val(val), l(l), r(r) {}
};


signed main(){
   int n,m;
   cin >> n >> m;

   vector<node> sg;
   vll a(n);
   for(auto& x : a ) cin >> x;
	
   auto build = [&](auto&& build, int l, int r) -> ll{
	if(l == r){
	   sg.emplace_back(a[l-1]);
	   return sg.size()-1;
	}

	int mid = (l+r) /2;

	int node_l = build(build,l,mid);
	int node_r = build(build, mid+1, r);

	sg.emplace_back(sg[node_l].val + sg[node_r].val, node_l,node_r);
       return sg.size()-1;	
   };
	
   auto update = [&] (auto&& update, ll v, int pos, int l, int r, int nd) -> void{
   	if(l == r){
	  sg[nd].val = v;
	  return;
	}

	int mid = (l+r)/2;

	if( pos <= mid){
	   update(update, v,pos, l, mid, sg[nd].l);
	}else{
	
	  update(update,v,pos, mid +1, r,sg[nd].r);
	}

	sg[nd].val = sg[sg[nd].l].val + sg[sg[nd].r].val;
   };

   auto query = [&] (auto&& query, int x,int  y, int r, int l, int nd) -> ll {
   	if( y < l || x > r) return 0LL;
        if( x <= l && r <= y) return sg[nd].val;
	int mid = (l+r)/2;
	return query(query, x,y,mid, l, sg[nd].l) + query(query,x,y, r, mid+1,sg[nd].r);	
   };

   int root = build(build,1,n);	

   while(m--){
   
   	int op;
	cin >> op;

	if(op == 2){
	  int x,y;
	  cin >> x >> y;

	  cout << query(query,x+1,y,n,1, root) << "\n";
	}else{
	
	  ll i, v;

	  cin >> i >> v;
	   update(update,v,i+1,1,n,root);
	}

   }
   	
}


