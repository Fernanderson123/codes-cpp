#include <iostream>
#include <fstream>
	using namespace std;
	int main (){

	ifstream arquivo ("somateste.txt");
	string dados;
	arquivo >> dados;
	getline (arquivo, dados);
	cout << dados << endl;
	arquivo.close();



	return 0;
}
