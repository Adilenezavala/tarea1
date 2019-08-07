
#include <iostream>

using namespace std;

int main()
{
	
	int temp[8],suma;
	
	for(int i=0;i<8;i++)
	{
		cout<<"Introduce la temperatura "<<i+1<<endl;
		cin>>temp[i];
		suma +=temp[i];
	}
	
	for(int i=0;i<8;i++)
	{
		cout<<"La temperatura "<<i+1<<" es "<<temp[i]<<endl;
	}
	cout<<"El promedio es "<<suma/8<<endl;
}
