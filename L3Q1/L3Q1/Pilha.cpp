#include "Pilha.h"

//Construtor
Pilha::Pilha()
{
	primeiro = NULL;
}
//M�todos de Acesso
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
//M�todos
bool Pilha::isEmpty()
{
	if (primeiro == NULL)
		return true;
	return false;
}
void Pilha::push(int elem)
{
	No *segundo = primeiro; //armazena segundo n� da nova pilha
	primeiro = new No(elem); //o primeiro elemento da pilha passa a ser o novo n�;
	primeiro->setProximo(segundo);//o proximo n� da pilha � aquele
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
			cout << pAux->getInfo();//impress�o do n� atual
			if (pAux->getProximo() != NULL)//Se ainda existem n�s...
			{
				cout << ",";
				pAux = pAux->getProximo(); //passa-se ao pr�ximo n�
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
					//Quando o elem � o primeiro da pilha...
	else {
		No* pAux = primeiro;//armazena o primeiro a ser removido.
		primeiro = primeiro->getProximo(); //passa-se ao pr�ximo n�,
										   //que agora � o primeiro.
		pAux->~No(); //destrui��o do n� removido
		delete pAux; //destrui��o do n� removido de forma mais limpa
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
			pAux = pAux->getProximo(); //passa-se ao pr�ximo n�
	}
	return false; //nenhum n� com valor "elem" foi encontrado
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
{//A Fila deve ser destru�da n� por n�.
	No* pAux;
	while (primeiro != NULL)
	{
		pAux = primeiro;
		primeiro = primeiro->getProximo();
		pAux->~No();
	}
}