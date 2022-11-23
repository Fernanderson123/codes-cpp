#include <iostream>
using namespace std;
int main (){
	int num, i;
	cin >> num;
	float vetor [num];
	float soma=0;
	for (i=0;i<num;i++)
		cin >> vetor[i];
	for (i=0;i<num;i++)
		soma+=vetor[i];
	for (i=0;i<num;i++)
		cout << vetor[i] << " ";
	cout << "media = " << soma/num << endl;
	return 0;
}
