#include <iostream>
using namespace std;
int main(){
	
	//string//
	string NPM;
	string TanggalLahir;
	string BulanLahir;
	string TahunLahir;
	
	
	//input//
	getline(cin,NPM);
	getline(cin,TanggalLahir);
	getline(cin,BulanLahir);
	getline(cin,TahunLahir);
	
	
	//output//
	cout<<endl;
	cout<< "Username : "<< NPM << endl;
	cout<< "Password : "<< TahunLahir <<  ""<< BulanLahir << "" <<TanggalLahir << endl;
	return 0;
	
}
