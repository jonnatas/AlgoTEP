#include<iostream>
#include<algorithm>
#include<map>

using namespace std;

int main(){

	string numbers;
	string pos;
	string revertida;
	map<string, int> values;
	int i;

	while(cin>>numbers) {
		if(numbers=="0")
			break;
		values.clear();

		cout<<"Original number was "<<numbers<<endl;
		i=0;		
		pos=numbers;
		values[pos] = 0;		
		sort(numbers.begin(), numbers.end());

		while(1){

			revertida=pos;
			reverse(revertida.begin(), revertida.end());

			int soma = atol(revertida.c_str()) -  atol(pos.c_str());

			string sum = to_string(soma);	
			sort(sum.begin(), sum.end());
			values[sum]++;		
			i++;

			auto res = values.find(sum);

			cout << revertida<<" - "<<pos  <<" = "<<soma<<endl;
			pos = sum;

			if(res->second==2){
				break;
			}
		}

		printf("Chain length %d\n\n", i);
	}
}
