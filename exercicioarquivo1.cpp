#include <iostream>
#include <fstream>
using namespace std;
int main (){
	string nome_arquivo;
	string conteudo;
	cin >> nome_arquivo;
	cin >> conteudo;
	ifstream arquivo (nome_arquivo);// variável arquivo se associa ao que vai ser lido no nome_arquivo (que será chamado como o usuário digitar + o '.txt')
	arquivo >> conteudo;//o arquivo recebe o conteúdo que o usuário digitou na variável conteúdo
	cout << conteudo;// mostra na saída padrão o conteúdo que foi digitado
	arquivo.close();// fecha a leitura
	
	

	
	
	return 0;
}
