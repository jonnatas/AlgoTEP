#include <bits/stdc++.h>

using namespace std;

int main(){

	string numbers;
	string numRevert;
	char pre[1000000]; 
	char pos[1000000]; 

        int i; 
	vector<string> results;

	int numA, numB;

	while(cin>>numbers){
		if(numbers=="0")
			break;

		results.clear();
		results.push_back(numbers);

		strcpy(pre,numbers.c_str());
		pos="";

		i = 0;

		cout <<"Original number was "<< pre << endl;
		while(1){
			sort(pre.begin(), pre.end());
			
			numRevert = revert(pre);

			numA = atoi(pre.c_str());
			numB = atoi(numRevert.c_str());
			pos = to_string(numB-numA);

			cout <<numB<< " - "<<numA<<" = "<< pos << endl;
			results.push_back(pos);
			if(results[i]==results[i+1])
				break;
			pre = pos;
			i++;
		}
		cout <<"Chain length "<<i+1<<endl;
		cout <<endl;
	}
}
