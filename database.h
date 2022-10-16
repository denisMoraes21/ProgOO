#include <cstdio>
#include <iostream>
#include <conio.h>
#include <fstream>
#include <string.h>
#include <unistd.h>
#include <vector>
#include <sstream>

using namespace std;

class Database{
        public:

        void write_DB(string NOME, string EMAIL, string ENDERECO, string SENHA){
		fstream fout;
		fout.open("database.csv", ios::out | ios::app);
		fout<<SENHA<<";"<<ENDERECO<<";"<<EMAIL<<";"<<NOME<<"\n";
	}

	void read_DB(){
		fstream fin;
		fin.open("database.csv", ios::in);
		char ch;
		while(fin.get(ch)){ 
 			cout << ch; 
		}
        }

	void clean_DB(){
		cout << "ok";
	}
};