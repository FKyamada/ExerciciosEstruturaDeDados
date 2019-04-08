#include "Teste.h"

void main() {
	cout << "+++++++++++++++++++++++++++\n";
	cout << "Programa de Teste de Fila\n";
	cout << "+++++++++++++++++++++++++++\n";
	Pilha pilha;
	int n, opcao;
	while ((opcao = menu()) != SAIR)
	{
		switch (opcao)
		{
		case IMPRIMIR:
			pilha.imprime();
			cout << endl;
			break;
		case PUSH:
			cout << "n? ";
			cin >> n;
			pilha.push(n);
			break;
		case POP:
			pilha.pop();
			cout << endl;
			break;
		case PROCURAR:
			cout << "n? ";
			cin >> n;
			if (pilha.existe(n))
				cout << "O elemento estah na lista!\n";
			else
				cout << "Este elemento nao estah na lista...\n";
			break;
		case TOP:
			pilha.top();
			break;
		case SAIR:
			pilha.sair();
			break;
		default:
			cout << "Opcao Invalida! \n";
		} //fim do switch
	} //fim do while
} //fim do main

int menu()
{
	int opcao;
	cout << IMPRIMIR << " - imprimir a fila\n";
	cout << PUSH << " - inserir um elemento\n";
	cout << POP << " - retirar um elemento\n";
	cout << PROCURAR << " - verificar se o elemento estah presente na fila\n";
	cout << TOP << "- mostra o elemento do top da pilha\n";
	cout << SAIR << " - encerrar o programa\n";
	cout << "Opcao ? ";
	cin >> opcao;
	return opcao;
}