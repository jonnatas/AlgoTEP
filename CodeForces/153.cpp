#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string stones;
	int soma = 0;

	cin >>n>>stones;

	for(int i =0; i<n-1; i++){
		if(stones[i]== stones[i+1]){
			soma++;
		}
	}
	cout<<soma<<endl;

}
