#include <iostream>
using namespace std;
int main (){
	int N, i,j;
	float fator, num;
	cin >> N;
	for (i=1; i<=N; i++){
		cin >> num;
		fator=1;
		for (j=1; j<=num; j++)
		fator*=j;
		cout << fator << endl;
		}
	
	return 0;
}
