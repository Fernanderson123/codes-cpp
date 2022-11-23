#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main (){
	float nota1, peso1, nota2, peso2, nota3, peso3;
	float media;
	cin >> nota1 >> peso1;
	cin >> nota2 >> peso2; 
	cin >> nota3 >> peso3;
	
	ifstream arquivo ("notas.txt");
	arquivo >> nota1 >> peso1;
	arquivo >> nota2 >> peso2;
	arquivo >> nota3 >> peso3;
	
	media=nota1*peso1 + nota2*peso2 + nota3*peso3;
	media=media/(peso1+peso2+peso3);
	ofstream arquivoF ("final.txt");
	arquivoF << std::fixed << setprecision(2) << media << endl;
	arquivo.close();
	
	
	return 0;
}
