#include <iostream>
using namespace std;
int main (){
	int num, i;
	cin >> num;
	float vetor[num];//vetor recebe a posição num
	float soma=0;
	for (i=0;i<num;i++)//se eu coloquei 3 la em "num" o vetor vai ter alocação para 3 valores.
		cin >> vetor[i];// 1º rodada=valor da primeia alocação; 2º=valor da segunda.. 
	for (i=0;i<num;i++)
		soma+=vetor[i];
	for (i=0;i<num;i++)
		cout << vetor[i] <<" ";
	cout << endl;
	cout <<"Media= " << soma/num << endl;
	return 0;
}
