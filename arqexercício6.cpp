#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main (){
	float v1, v2, v3, v4, v5, v6, v7, v8;
	float media;
	cin >> v1 >> v2 >> v3 >> v4 >> v5 >> v6 >> v7 >> v8;
	
	ifstream arquivo ("dados.txt");
	arquivo >> v1;
	arquivo >> v2;
	arquivo >> v3;
	arquivo >> v4;
	arquivo >> v5;
	arquivo >> v6;
	arquivo >> v7;
	arquivo >> v8;
	
	ofstream arquivoF ("media.txt");
	media=(v1+v2+v3+v4+v5+v6+v7+v8)/8;
	arquivoF << std::fixed << setprecision(3) << media;
	arquivoF.close();
	

	return 0;
}
