#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main (){
	string arquivo1, arquivo2, arquivo3;
	string conteudo1, conteudo2;
	cin >> arquivo1;
	cin >> arquivo2;
	cin >> arquivo3;
	cin >> conteudo1;
	cin >> conteudo2;
	ifstream arq1 (arquivo1);
	arq1 >> conteudo1;
	ifstream arq2 (arquivo2);
	arq2 >> conteudo2;
	
	ofstream arq3 (arquivo3);
	arq3 << conteudo1 << " " << conteudo2;
	arq1.close();
	arq2.close();
	arq3.close();
	
	
	
	
	
	
	return 0;
}
