#include <iostream>

using namespace std;
int main()
{
	int num,n1,n2,f,n3;
	n1=0;
	n2=1;
	f=0;
	cout<<"Digite la posicion del numero de la serie de fibonacci que desea ver:"<<endl;
	cin>>num;
	cout<<"El numero en la posicion "<<num<<" es:"<<endl;
	while (f < num)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		f=f+1;
	}
	cout<<n1<<endl;
}
