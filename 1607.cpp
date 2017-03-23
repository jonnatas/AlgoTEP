#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
	int T;
	string A, B;
	cin >> T;
	int sum = 0;
	while(T--){
		cin >> A;
		cin >> B;	
	
		sum = 0;
		for(int i =0; i<A.length(); i++){
			if(B[i]<A[i]){
				sum+=fabs(A[i]-'z') + fabs(B[i]-'a')+1;
			}else
				sum+= fabs(A[i] - B[i]);
		}
		cout<< sum << endl;
	}
}

