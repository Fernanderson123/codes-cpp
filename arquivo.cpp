#include <iostream>
#include <fstream>
using namespace std;
int main (){
	ofstream objetoS;
	objetoS.open("objetoS.txt");
	objetoS << "exemplo " << endl;
	objetoS << "exemplo 2 " << endl;
	objetoS.close();
	
	ifstream objetoE;
	string linha;
	objetoE.open("objetoS.txt");
	if (objetoE.is_open()){
		while (getline(objetoE, linha)){
			cout << linha << endl;
			}
		} else {
			cout << "Nao foi possivel abrir o arquivo" << endl;
			}

	return 0;
}
