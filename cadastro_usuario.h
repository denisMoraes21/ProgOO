#include <cstdio>
#include <iostream>
#include <conio.h>
#include <fstream>
#include <string.h>
#include <vector>
#include <sstream>
#include "database.h"
using namespace std;

class Cadastro{
	public:
	char NOME[60];
	char EMAIL[60];
	char ENDERECO[60];
	char SENHA[100];
	char CONFIRMASENHA[100];
	bool flag = false;

	string nome(){
		cout << ("<--> Cadastro de Usuário <-->") << endl;
		cout << ("Usuário: ");
		cin >> (NOME);
		return NOME;
	}

	string email(){
		cout << ("E-mail: ");
		cin >> (EMAIL);
		return EMAIL;
	}

	string localizacao(){
		cout << ("Endereço: ");
		cin >> (ENDERECO);
		return ENDERECO;
	}

	string senha(){
		do{
			cout << ("Senha: ");
			cin >> (SENHA);
			cout <<("Confirmar senha: ");
			cin >> (CONFIRMASENHA);
			if ((string)SENHA == (string)CONFIRMASENHA){
				flag = true;
			} else {
				cout << ("Campo senha e confirmar senha diferentes.") << endl;
			}
		} while (flag == false);
		return SENHA;
	}

	void cadastro(){
		Database data;
		data.write_DB(nome(), email(), localizacao(), senha());
		data.read_DB();
	}
};