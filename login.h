#include <cstdio>
#include <iostream>
#include <conio.h>
#include <fstream>
#include <string.h>
#include <vector>
#include <sstream>

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

        // Polimorfismo
        string usuario(string email){
                cout << ("Usuário: ");
                cin >> NOME_;
                return NOME_ + email;

        }

        string senha(){
                cout << ("Senha: ");
                cin >> SENHA_;
                return SENHA_;
        }

        void login_success(){
                usuario();
                senha();
                cout << ("Login bem sucedido!") << endl;
        }
};
