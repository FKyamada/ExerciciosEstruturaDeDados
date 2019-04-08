#include <iostream>
using namespace std;
class No
{
	int info;//a informação armazenada pelo nó é um inteiro
	No* proximo; //Ponteiro para o proximo nó
	No* ultimo; //Ponteiro para o anterior
public:
	//Construtor
	No(int elem); //cria um nó com o valor dado por elem.
				  //Métodos de Acesso
	int getInfo(); //lê o valor de info do nó
	void setInfo(int novoInfo); //modifica o valor do nó
	No* getProximo(); //retorna o proximo nó
	void setProximo(No *novoNo); //modifica o valor do proximo nó novoNo
								 //Destrutor
	~No(); //Destroi o nó.
};
#pragma once
