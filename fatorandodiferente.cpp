#include <iostream>
using namespace std;
int main (){
	int i, n;
    float fat, result;
	cin >> n;
       
    result = 1.0;
    fat = 1.0;
    for(i=1; i<=n; i++){
        fat = fat * i;
        result = result + 1.0/fat;
    }
    cout << result;
	
	return 0;
}
