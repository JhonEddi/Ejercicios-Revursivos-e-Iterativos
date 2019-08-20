#include <iostream>
#define tipo unsigned long long int

using namespace std;
int main(){
	int n;
	int m;
	tipo pot = 1;
	
	cout << "digite el numero: " <<endl;
	cin >> n;
	cout << "digite la potencia: " <<endl;
	cin >> m;
	
	for(int i=0; i < m; i++){
		pot *= n;
	}
	
	cout << "el resultado es: " << pot << endl;
}
