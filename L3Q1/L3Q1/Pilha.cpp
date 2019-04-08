#include "Pilha.h"

//Construtor
Pilha::Pilha()
{
	primeiro = NULL;
}
//Métodos de Acesso
No* Pilha::getPrimeiro()
{
	return primeiro;
}
void Pilha::setPrimeiro(No* novoNo)
{
	primeiro = novoNo;
}
No* Pilha::getUltimo()
{
	return ultimo;
}
void Pilha::setUltimo(No* novoNo)
{
	ultimo = novoNo;
}
//Métodos
bool Pilha::isEmpty()
{
	if (primeiro == NULL)
		return true;
	return false;
}
void Pilha::push(int elem)
{
	No *segundo = primeiro; //armazena segundo nó da nova pilha
	primeiro = new No(elem); //o primeiro elemento da pilha passa a ser o novo nó;
	primeiro->setProximo(segundo);//o proximo nó da pilha é aquele
								  // armazenado anteriormente
}
void Pilha::imprime()
{
	if (isEmpty())
		cout << "{ }";
	else
	{
		No* pAux = primeiro;
		cout << "{";
		while (true)
		{
			cout << pAux->getInfo();//impressão do nó atual
			if (pAux->getProximo() != NULL)//Se ainda existem nós...
			{
				cout << ",";
				pAux = pAux->getProximo(); //passa-se ao próximo nó
			}
			else
			{ //fim da pilha
				cout << "}";
				break;
			}
		}
	}
}
No* Pilha::pop()
{
	if (isEmpty())
		return NULL;//o metodo retorna um ponteiro para No...
					//Quando o elem é o primeiro da pilha...
	else {
		No* pAux = primeiro;//armazena o primeiro a ser removido.
		primeiro = primeiro->getProximo(); //passa-se ao próximo nó,
										   //que agora é o primeiro.
		pAux->~No(); //destruição do nó removido
		delete pAux; //destruição do nó removido de forma mais limpa
	}
}
bool Pilha::existe(int elem)//verifica se o elemento existe na pilha
{
	if (isEmpty())
		return false;
	No* pAux = primeiro;
	while (pAux != NULL)
	{
		if (pAux->getInfo() == elem)//elemento encontrado!
			return true;
		else
			pAux = pAux->getProximo(); //passa-se ao próximo nó
	}
	return false; //nenhum nó com valor "elem" foi encontrado
}
void Pilha::sair()
{
	No*pAux = primeiro;
	while (pAux != NULL)
	{
		pAux->~No();
		delete pAux;
	}
}
int Pilha::top()
{
	No*pAux1 = primeiro;
	while (pAux1->getProximo() != NULL)
	pAux1 = pAux1->getProximo();
	return pAux1->getInfo();
}
//Destrutor
Pilha::~Pilha()
{//A Fila deve ser destruída nó por nó.
	No* pAux;
	while (primeiro != NULL)
	{
		pAux = primeiro;
		primeiro = primeiro->getProximo();
		pAux->~No();
	}
}