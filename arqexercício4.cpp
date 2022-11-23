#include <iostream>
#include <fstream>
using namespace std;
int main (){
	int inteiro, resto1, resto2, resto3;
	cin >> inteiro;
	resto1=inteiro%10;
	inteiro/=10;
	resto2=inteiro%10;
	inteiro/=10;
	resto3=inteiro;
	cout << resto1+resto2+resto3;
	ofstream arquivo ("saida.txt");
	arquivo << resto1*resto2*resto3;
	arquivo.close();
	
	return 0;
}
