#include <iostream>
using namespace std;
main()
{
	int h;
	cout<<"Masukkan Kode Hari [1-7] : ";
	cin>>h;
	cout<<"*====================*\n\n"<<endl;
	switch (h)
	{
		case 1 :
			cout<<"Senin";break;
		case 2 :
			cout<<"Selasa";break;
		case 3 :
			cout<<"Rabu";break;
		case 4 :
			cout<<"Kamis";break;
		case 5 :
			cout<<"Jum'at";break;
		case 6 :
			cout<<"Sabtu";break;
		case 7 :
			cout<<"Minggu";break;
		default:
			cout<<"Code not found!";
	}
	cout<<"\n\n\n*====================*";
	
	
	

}
