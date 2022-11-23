#include <iostream>
using namespace std;
int main (){
	int cont;
	float n1, n2, ta=0, te=0, tr=0;
	float media, media_classe, total_classe=0;
	for (cont=1;cont<=6; cont++){
		cin >> n1 >> n2;
		media=(n1+n2)/2;
		cout << media << endl;
		if (media<=3){
			tr=tr+1;
			cout << "Reprovado" << endl;
		}
		if (media>3 and media<7){
			te=te+1;
			cout << "Exame" << endl;
		}
		if (media>=7){
			ta=ta+1;
			cout << "Aprovado" << endl;
		}
		total_classe+=media;
		}
		cout << tr << endl;
		cout << te << endl;
		cout << ta << endl;
	media_classe=total_classe/6;
	cout << media_classe;
	
	return 0;
}
