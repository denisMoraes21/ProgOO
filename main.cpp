#include <cstdio>
#include <iostream>
#include <conio.h>
#include <fstream>
#include <string.h>
#include <vector>
#include <sstream>
#include "cadastro_usuario.h"
#include "login.h"
using namespace std;


int main() {
	int option=0;
	cout << ("Bem Vindo ao Zé Delivery") << endl;
	cout << ("**************************") << endl;
	cout << ("Escolha uma opção: 1 - Login, 2 - Novo cadastro") << endl;
	cout << ("Resposta: ");
	cin >> option;

	switch(option){
		case (1):
			cout << "ok";
			break;
		case (2):
			// Encapsulamento
        		Cadastro cadastrando;
			cadastrando.cadastro();
			break;
	}
	return 0;
}
