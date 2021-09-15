/* primeiro elemento que entra é o último que sai.
   o último elemento que entra é o primeiro que sai.*/

#include <iostream> 
#include "pt_br.h"
#define max 9

using namespace std;

int arr[max], pop, push, topo=-1, i, opcao;

void insere() {
    if(topo<max) { 
            cout << "\n";
            cout << "Digite o valor que deseja inserir no vetor: ";
            cin >> push;
            topo++;
            arr[topo] = push;          
    }
        else {
            cout << "A pilha está cheia, remova algum elemento para adicionar mais.\n";
        }
}

void remove() {
    if (topo>-1) {
            arr[topo] = 0;
            topo--;
            cout << "\n";
            cout << "Elemento removido do topo com sucesso.\n";
    }   
        else {
            cout << "\n";
            cout << "Não é possível executar essa ação pois não existem elementos no vetor.\n";
}       }

void exibe() {
    if (topo>(-1)) {
        cout << "\n";
        cout << "| ";

        for (i=0; i<=topo; i++) {
            cout << arr[i] << " | ";
        }

        cout << "\n";
    } 
    
    else {
          cout << "\n";  
          cout << "Não é possível executar essa ação pois não existem elementos no vetor.\n";  
     }    
}

int main() {
    acentos();

    while(true) {

        cout << "\n";
        cout << "----------PILHA----------" << endl;
        cout << "[1] Inserir elemento.\n";
        cout << "[2] Remover elemento.\n";
        cout << "[3] Exibir vetor.\n";
        cout << "[9] Sair.\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;
        cout << "-------------------------\n";
        system("cls");

        switch (opcao) {
            case 1: insere(); break;
            case 2: remove(); break;
            case 3: exibe(); break;
            case 9: return 0;
            default: cout << "\nEscolha uma opção válida."; break;
        }
    }
        return 0;   
}
