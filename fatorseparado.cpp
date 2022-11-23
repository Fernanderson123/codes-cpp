#include <iostream>
using namespace std;
int main (){
	int j;
	float fator=1, num;
	cin >> num;
	for (j=1; j<=num; j++)
	fator*=j;
	cout << fator;
	
	return 0;
}
