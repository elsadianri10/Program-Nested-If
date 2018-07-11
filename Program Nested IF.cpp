#include <iostream>
#include <conio.h>
using namespace std;

main()
{
	int a,b,c;
	
	cout<<"Input Angka Pertama 	= ";
	cin>>a;
	cout<<"Input Angka Kedua 	= ";
	cin>>b;
	cout<<"Input Angka Ketiga 	= ";
	cin>>c;
	
	if(a>b)
	{
		if(a>c)
		{
			cout<<"Hasil = "<<a;
		}
		else if(c>a)
		{
			cout<<"Hasil = "<<c;
		}
	}
	else if(b>a)
	{
		if(b>c)
		{
			cout<<"Hasil = "<<b;
		}
		else if(c>b)
		{
			cout<<"Hasil = "<<c;
		}
	}
	
	getch();
}
