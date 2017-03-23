#include <iostream>
#include <string>

using namespace std;

int main(){
	int N;
	string V;
	int values[10] = {6,2,5,5,4,5,6,3,7,6};
	int i;
	cin >> N;

	
	while(N--){
		int result = 0;
		cin >> V;
		for(i=0; i < V.length(); i++){
			result += values[V[i]-'0'];
		}
		cout<<result<< " leds"<<endl;
	}
	
}
