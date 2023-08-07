/*
Membros da equipe:
    Anderson Fernandes Barbosa 
    Leonardo Guimarães Oliveira 
    Maria Lina da Silva
Tema: Bandas de Rock
*/
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
using namespace std;

// Estrutura para guardar informacoes de cada banda
struct Banda {
    char lixo;
    char nome[100];
    int anoPrimeiroAlbum;
    char genero[100];
    char membros[150];
    char periodoAtividade[100];
};

// Funcao para encontrar uma banda por nome no vetor de bandas
int encontrarBanda(Banda* bandas, int quantidadeBandas, string nome) {
    for (int i = 0; i < quantidadeBandas; i++){
        if (strcmp(bandas[i].nome, nome.c_str()) == 0){
            return i; // Retorna o indice da banda no vetor
        }
    }
    return -1; // Banda nao encontrada
}

// Funcao para inserir uma nova banda no vetor de bandas
void inserirBanda(Banda* &bandas, int &quantidadeBandas, Banda novaBanda) {
    Banda* novasBandas = new Banda[quantidadeBandas + 1]; // Cria novo vetor com tamanho +1
    for (int i = 0; i < quantidadeBandas; i++) {
        novasBandas[i] = bandas[i]; // Copia bandas existentes para o novo vetor
    }
    novasBandas[quantidadeBandas] = novaBanda; // Insere nova banda no final
    quantidadeBandas++;
    delete[] bandas; // Libera memoria do vetor antigo
    bandas = novasBandas; // Atualiza ponteiro para novo vetor
}

// Funcao para remover uma banda por nome do vetor de bandas
void removerBanda(Banda* &bandas, int &quantidadeBandas, string nome) {
    int indice = encontrarBanda(bandas, quantidadeBandas, nome);
    if (indice == -1) {
        cout << "A banda " << nome << " nao foi encontrada.\n";
        return;
    }
    Banda* novasBandas = new Banda[quantidadeBandas - 1]; // Cria novo vetor com tamanho -1
    for (int i = 0; i < indice; i++) {
        novasBandas[i] = bandas[i]; // Copia bandas ate a banda a ser removida
    }
    for (int i = indice + 1; i < quantidadeBandas; i++) {
        novasBandas[i - 1] = bandas[i]; // Copia bandas apos a banda a ser removida
    }
    quantidadeBandas--;
    delete[] bandas; // Libera memoria do vetor antigo
    bandas = novasBandas; // Atualiza ponteiro para novo vetor
}

// Funcao para editar uma banda por nome no vetor de bandas
void editarBanda(Banda* bandas, int quantidadeBandas, string nome, Banda bandaEditada) {
    int indice = encontrarBanda(bandas, quantidadeBandas, nome);
    if (indice == -1) {
        cout << "A banda " << nome << " nao foi encontrada.\n";
        return;
    }
    bandas[indice] = bandaEditada; // Substitui banda antiga pela banda editada
}

int main() {
    string linha;
    int quantidadeBandas = 0;
    ifstream arquivo("BaseDeDados.csv");

    Banda *bandas = new Banda [quantidadeBandas];
    char lixo;
    Banda banda;
    getline(arquivo, linha); // Ignora a primeira linha (cabecalho do CSV)

    // Le as linhas do arquivo CSV e cria as bandas
    while (getline(arquivo, linha)) {
        stringstream ss(linha);
        ss.ignore(1,'"');
        ss.getline(banda.nome, sizeof(banda.nome), ';');
        ss >> banda.anoPrimeiroAlbum;
        ss.ignore(1,'\n');
        ss.getline(banda.genero, sizeof(banda.genero), ';');
        ss.ignore(1,'"');
        ss >> lixo;
        ss.getline(banda.membros, sizeof(banda.membros), '"');
        ss >> lixo;
        ss.ignore(1,'"');
        ss.ignore(1,'"');
        ss.getline(banda.periodoAtividade, sizeof(banda.periodoAtividade), '"');
        ss >> lixo;
        ss.ignore(1,'"');

        // Insere a banda lida no vetor de bandas
        inserirBanda(bandas, quantidadeBandas, banda);
    }

    arquivo.close();

    bool rodando = true;

    // Loop principal
    while (rodando) {
        // Menu de opcoes
        cout << "\n"
            << "+------------------------------------+\n"
            << "|           BANDAS DE ROCK           |\n"
            << "+------------------------------------+\n"
            << "|                                    |\n"
            << "| 1. Buscar banda                    |\n"
            << "| 2. Inserir banda                   |\n"
            << "| 3. Remover banda                   |\n"
            << "| 4. Editar banda                    |\n"
            << "| 5. Sair                            |\n"
            << "|                                    |\n"
            << "+------------------------------------+\n"
            << "Por favor, escolha uma opcao: ";

        int opcao;
        cin >> opcao;
        cin.ignore();

        switch (opcao) {
            case 1: {  // Buscar banda
                cout << "Digite o nome da banda: ";
                string nome;
                getline(cin, nome);
                int indice = encontrarBanda(bandas, quantidadeBandas, nome);
                if (indice == -1) {
                    cout << "A banda " << nome << " nao foi encontrada.\n";
                } else {
                    Banda banda = bandas[indice];
                    cout << "Nome: " << banda.nome << '\n'
                        << "Ano do primeiro album: " << banda.anoPrimeiroAlbum << '\n'
                        << "Genero: " << banda.genero << '\n'
                        << "Membros: " << banda.membros << '\n'
                        << "Periodo em atividade: " << banda.periodoAtividade << '\n';
                }
                break;
            }
            case 2: {  // Inserir banda
                Banda banda;
                cout << "Digite o nome da banda: ";
                cin.getline(banda.nome, sizeof(banda.nome));
                cout << "Digite o ano do primeiro album: ";
                cin >> banda.anoPrimeiroAlbum;
                cin.ignore();  // Ignorar o '\n' deixado por cin >>
                cout << "Digite o genero: ";
                cin.getline(banda.genero, sizeof(banda.genero));
                cout << "Digite os membros: ";
                cin.getline(banda.membros, sizeof(banda.membros));
                cout << "Digite o periodo em atividade: ";
                cin.getline(banda.periodoAtividade, sizeof(banda.periodoAtividade));

                inserirBanda(bandas, quantidadeBandas, banda);

                cout << "Banda inserida com sucesso!\n";
                break;
            }
            case 3: {  // Remover banda
                cout << "Digite o nome da banda: ";
                string nome;
                getline(cin, nome);

                removerBanda(bandas, quantidadeBandas, nome);

                cout << "Banda removida com sucesso!\n";
                break;
            }
            case 4: {  // Editar banda
                cout << "Digite o nome da banda que deseja editar: ";
                string nome;
                getline(cin, nome);

                int indice = encontrarBanda(bandas, quantidadeBandas, nome);
                if (indice == -1) {
                    cout << "A banda " << nome << " nao foi encontrada.\n";
                    break;
                }
                Banda bandaEditada;
                cout << "Digite o novo nome da banda (ou o mesmo para manter): ";
                cin.getline(bandaEditada.nome, sizeof(bandaEditada.nome));
                cout << "Digite o novo ano do primeiro album (ou o mesmo para manter): ";
                cin >> bandaEditada.anoPrimeiroAlbum;
                cin.ignore();  // Ignorar o '\n' deixado por cin >>

                cout << "Digite o novo genero (ou o mesmo para manter): ";
                cin.getline(bandaEditada.genero, sizeof(bandaEditada.genero));
                cout << "Digite os novos membros (ou os mesmos para manter): ";
                cin.getline(bandaEditada.membros, sizeof(bandaEditada.membros));
                cout << "Digite o novo periodo em atividade (ou o mesmo para manter): ";
                cin.getline(bandaEditada.periodoAtividade, sizeof(bandaEditada.periodoAtividade));

                editarBanda(bandas, quantidadeBandas, nome, bandaEditada);

                cout << "Banda editada com sucesso!\n";
                break;
            }
            case 5: {  // Sair
                rodando = false;
                break;
            }
            default: {
                cout << "Opcao invalida, por favor tente novamente.\n";
                break;
            }
        }
    }

    delete[] bandas; // Libera a memeria do vetor de bandas

    return 0;
}


