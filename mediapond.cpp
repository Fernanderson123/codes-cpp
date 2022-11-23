#include <iostream>
using namespace std;
int main (){
	float tl, as, exf;
	float media;
	cin >> tl;
	cin >> as;
	cin >> exf;
	
	media=(tl*2+as*3+exf*5)/10;
	if (media>=8 and media<=10)
		cout << "conceito A";
		else if (media>=7 and media<=8)
			cout << "conceito B";
			else if (media>=6 and media<=7)
			cout << "conceito C";
			else if (media>=5 and media<=6)
			cout << "conceito D";
			else if (media>=0 and media<=5)
			cout << "conceito E";	
	
	return 0;
}
