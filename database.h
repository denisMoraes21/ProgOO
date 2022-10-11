#include <cstdio>
#include <iostream>
#include <conio.h>
#include <fstream>
#include <string.h>
#include <unistd.h>
#include <vector>
#include <sstream>
#include <dataframe.hpp>

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

	void read_unique_DB(){
		fstream fin;
		fin.open("database.h", ios::in);
		int rollnum, roll2, count = 0;
    		cout << "Row: ";
    		cin >> rollnum;
		vector<string> row;
		string line, word, temp;
		while (fin >> temp) {
			row.clear();
			getline(fin, line);
			stringstream s(line);
			while (getline(s, word, ';')) {
				row.push_back(word);
        		}
			roll2 = stoi(row[0]);
			if (roll2 == rollnum) {
				count = 1;
            			cout << "Details of Roll " << row[0] << " : \n";
            			cout << "Name: " << row[1] << "\n";
            			cout << "Maths: " << row[2] << "\n";
            			cout << "Physics: " << row[3] << "\n";
            			cout << "Chemistry: " << row[4] << "\n";
            			cout << "Biology: " << row[5] << "\n";
            			break;
        		}
    		}
    		if (count == 0)
        		cout << "Record not found\n";
	}

	void clean_DB(){
		truncate("database.csv", 0);
	}
};