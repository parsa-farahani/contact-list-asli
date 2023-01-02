#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
using namespace std;

struct person{
	string name;
	string tel;
	string email;

};

int main(){
	struct person p[3];
	int i;

	ofstream out;
	out.open("file1.txt");


	for(int i=0 ; i<3 ; i++){

		cin >> p[i].name;
		cin >> p[i].tel;
		cin >> p[i].email;
        out << p[i].name <<"\t"<< p[i].tel <<"\t"<< p[i].email <<endl;
	}

	out.close();


	cout <<"do you wand to add 4th contact? (y/n): ";
	char a;
	cin>> a;
	if (a == 'y'){
        struct person q[3];
		out.open("file1.txt" , ios::app);
		cin >> q[0].name;
		cin >> q[0].tel;
		cin >> q[0].email;

		out << q[0].name <<"\t"<< q[0].tel <<"\t"<< q[0].email <<endl;
	}
	out.close();



	ifstream in;
	in.open("file1.txt");

	cout << "Enter the name for searching in the list: ";
	string s;
	cin >> s;
	bool flag=0;

	for(int i=0 ; i<3 ; i++){
		if((p[i].name) == s){
			cout << p[i].name <<"\t"<< p[i].tel <<"\t"<< p[i].email;
			flag = 1;
		}
	}

	if(flag==0){
		cout <<"Not Found!";
	}

	in.close();

	return 0;
}
