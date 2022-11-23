#include <iostream>
using namespace std;
int main (){
	int cod, pais;
	float peso, grama, bruto, total;
	float imp1, imp2, imp3;
	imp1=0.0;
	imp2=0.15;
	imp3=0.25;
	cin >> cod;
	cin >> peso;
	cin >> pais;
	peso*=1000;
	grama=peso;
	if (cod>=1 and cod<=4 and pais==1){
		bruto=grama*10;
		total=bruto+imp1;
		cout << grama << endl;
		cout << bruto << endl;
		cout << imp1 << endl;
		cout << total;
		}		else if(cod>=1 and cod<=4 and pais==2){
				bruto=grama*10;
				total=bruto*imp2+bruto;
				cout << grama << endl;
				cout << bruto << endl;
				cout << imp2*bruto << endl;
				cout << total;
		}		else if(cod>=1 and cod<=4 and pais==3){
				bruto=grama*10;
				total=bruto*imp3+bruto;
				cout << grama << endl;
				cout << bruto << endl;
				cout << imp3*bruto << endl;
				cout << total;				
		}	else if (cod>=5 and cod<=7 and pais==1){
				bruto=grama*25;
				total=bruto+imp1;
				cout << grama << endl;
				cout << bruto << endl;
				cout << imp1 << endl;
				cout << total;
		}		else if(cod>=5 and cod<=7 and pais==2){
				bruto=grama*25;
				total=bruto*imp2+bruto;
				cout << grama << endl;
				cout << bruto << endl;
				cout << imp2*bruto << endl;
				cout << total;
		}		else if(cod>=5 and cod<=7 and pais==3){
				bruto=grama*25;
				total=bruto*imp3+bruto;
				cout << grama << endl;
				cout << bruto << endl;
				cout << imp3*bruto << endl;
				cout << total;
		}	else if (cod>=8 and cod<=10 and pais==1){
				bruto=grama*35;
				total=bruto+imp1;
				cout << grama << endl;
				cout << bruto << endl;
				cout << imp1 << endl;
				cout << total;
		}		else if(cod>=8 and cod<=10 and pais==2){
				bruto=grama*35;
				total=bruto*imp2+bruto;
				cout << grama << endl;
				cout << bruto << endl;
				cout << imp2*bruto << endl;
				cout << total;
		}		else if(cod>=8 and cod<=10 and pais==3){
				bruto=grama*35;
				total=bruto*imp3+bruto;
				cout << grama << endl;
				cout << bruto << endl;
				cout << imp3*bruto << endl;
				cout << total;
		}
		
	return 0;
}
