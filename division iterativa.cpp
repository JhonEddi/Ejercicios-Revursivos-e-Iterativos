#include <iostream>

using namespace std;
int main(){
	int n;
	int m;
	int div = 0;
	
	cout << "digite el numerador: " <<endl;
	cin >> n;
	cout << "digite el denominador: " <<endl;
	cin >> m;
	
	while(n >= m && m != 0 && n != 0 ){
		div++;
		n -= m;
	}
	
	if (m != 0){
		cout << "Resultado: " << div << endl;
	}else{
		cout << "El denominador no puede ser 0" << endl;
	}
	
}
