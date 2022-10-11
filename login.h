#include <cstdio>
#include <iostream>
#include <conio.h>
#include <fstream>
#include <string.h>
#include <vector>
#include <sstream>
#include "database.h"
using namespace std;

class Login{
        public:
        char NOME_[60];
        char SENHA_[100];

        string usuario(){
                cout << ("Usuário: ");
                cin >> NOME_;
                return NOME_;
        }

        string senha(){
                cout << ("Senha: ");
                cin >> SENHA_;
                return SENHA_;
        }
};
