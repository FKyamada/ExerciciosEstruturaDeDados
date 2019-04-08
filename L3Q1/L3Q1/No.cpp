#include "No.h"
//Construtor
No::No(int elem)
{
	info = elem;
	proximo = NULL;
}
//Métodos de Acesso
int No::getInfo()
{
	return info;

}
void No::setInfo(int novoInfo)
{
	info = novoInfo;
}
No* No::getProximo()
{
	return proximo;
}
void No::setProximo(No *novoNo)
{
	proximo = novoNo;
}

//Destrutor
No::~No()
{ //Se esta msg não aparecer no final, a memória alocada para o nó não foi liberada!
	cout << "Noh de valor " << info << " destruido!" << endl;
}
