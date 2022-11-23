#include <iostream>
using namespace std;
int main (){
	int num1,num2,num3;
	
	cin >> num1;//9
	cin >> num2;//4
	cin >> num3;//5
	if (num1>num2 and num1>num3 and num2>num3)
			cout << num1 << num2 << num3;
			else if (num1>num2 and num1>num3 and num2<num3)
			cout << num1 << num3 << num2;	
		
		if (num2>num1 and num2>num3 and num1>num3)
			cout << num2 << num1 << num3;
			else if (num2>num1 and num2>num3 and num1<num3)
			cout << num2 << num3 << num1;
			
		if (num3>num1 and num3>num2 and num2>num1)		
			cout << num3 << num2 << num1;
			else if (num3>num1 and num3>num2 and num2<num1)
			cout << num3 << num1 << num2;	
	
	return 0;
}
