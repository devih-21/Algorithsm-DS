#include<bits/stdc++.h>
using namespace std;



void solve(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for ( int i = 0; i<n; i++)	cin >> a[i];
	sort(a,a+n,greater<int>());
	int count = 0;
	for ( int i = 0; i<k; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// NV Than

