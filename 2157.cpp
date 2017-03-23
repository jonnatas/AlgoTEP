#include <bits/stdc++.h>

using namespace std;

int main(){
	int M,N,C;
	char ss[101], B, E;

	cin>>C;
	while(C--){
		cin >>M>>N;	
		for(int i = M; i<=N; i++){
			cout<<i;
		}
		for(int j=N; j>=M; j--){
			sprintf(ss, "%d", j);
			for(int i=strlen(ss)-1; i>=0; i--)
				cout<<ss[i];

		}
		cout<<endl;
	}
}
