#include <cstdio>
#include <iostream>
#include <conio.h>
#include <fstream>
#include <string.h>
#include <vector>
#include <sstream>
#include "cadastro_usuario.h"
using namespace std;



int main(int argc, char** argv) {
	int option=0;
	printf ("Bem Vindo ao Zeca Delivery \n");
	printf ("************************** \n");
	printf ("Faça seu cadastro\n");
        Cadastro cadastrando;
	cadastrando.cadastro();
	return 0;
}
