#include <iostream>
using namespace std;
main()
{
	char h;
	
	cout<<"*Program menentukan Luas dan keliling Bangun Datar*\n";

	cout<<"*====================*\n"<<endl;
	cout<<"s = Bangun datar Segitiga\n";
	cout<<"p = Bangun datar Persegi Panjang\n";
	cout<<"l = Bangun datar Lingkaran\n";
	cout<<"*====================*\n"<<endl;
	
	cout<<"Masukkan Kode Bangunan untuk dihitung : ";
	cin>>h;
	cout<<endl;
			
	cout<<"*====================*\n\n"<<endl;
	switch (h)
	{
		case 's' :
			cout<<"Luas Segitiga     :\n";
			cout<<"Keliling Segitiga :";
			break;
		case 'p' :
			cout<<"Luas Persegi Panjang     :\n";
			cout<<"Keliling Persegi Panjang :";
			break;
		case 'l' :
			cout<<"Luas Lingkaran     :\n";
			cout<<"Keliling Lingkaran :";
			break;
		default:
			cout<<"Code not found!";
	}
	cout<<"\n\n\n*====================*";
}
