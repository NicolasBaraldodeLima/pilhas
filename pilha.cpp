#include <iostream>
#include <stack> // biblioteca para utilizar pilhas

using namespace std;

int main() {
	
	stack <string> cartas; // declaramos o tipo da pilha e o nome cartas
	
	cartas.push("Rei de Copas"); //utilizando o m�todo push na pilha cartas para inserir elementos
	cartas.push("Rei de Espadas");
	cartas.push("Rei de Ouros");
	cartas.push("Rei de Paus");
	
	cout << "Tamanho da pilha: " << cartas.size() << "\n";	
	
	cartas.pop(); // o m�todo pop faz a retirada do elemento
	
	cout <<  "Tamanho da pilha: " << cartas.size() << "\n"; // vai ser retirado o primeiro elemento, que � Rei de Paus, sobrando 3
	
	cout << "Carta do topo: " << cartas.top() << "\n";
	
	return 0;
}

