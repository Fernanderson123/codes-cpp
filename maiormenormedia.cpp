#include <iostream>
using namespace std;
int main (){
	float num;
	float maior;
	float segundo, media=0;
	cin >> num;//2
	maior=num;//=2
	media=media+num;//=2+0
	cin >> num;//3
	int cont=0;
	if (num>maior){//3 é maior que 2(num é > maior)
		segundo=maior;// segundo=2
		maior=num;//maior=num=3
	}	else{
		segundo=num;
	}	media=media+num;
		while (cont<5){
			cin >> num;
			if (num>maior){
				segundo=maior;
				maior=num;
		}	else if (num>segundo){
				segundo=num;
		}	media=media+num;
			cont++;
		}	media = media-(maior+segundo);
			cout<<maior<<endl<<segundo<<endl<<(media/5);

	return 0;
}
