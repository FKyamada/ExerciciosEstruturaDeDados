#pragma once
#include "No.h"
class Pilha
{
	No* primeiro, *ultimo;
public:
	//Construtor
	Pilha(); //cria  vazia
			 //Métodos de Acesso
	No* getUltimo();
	void setUltimo(No* novoNo);
	No*getPrimeiro(); //retorna o primeiro nó da Pilha
	void setPrimeiro(No* novoNo); //torna "novoNo" o primeiro nó da Pilha


	//Métodos
	bool isEmpty(); //retorna verdadeiro se a lista é uma fila vazia
	void push(int elem); //colocar o elemento na pilha
	No* pop(); //retira um elemento da pilha (desempilha)
	bool existe(int elem); //verifica se elem existe
	int top();
	void imprime(); //imprime todos os elementos
	void sair();
	//Destrutor
	~Pilha(); //Destroi todos os nós da Fila
};
