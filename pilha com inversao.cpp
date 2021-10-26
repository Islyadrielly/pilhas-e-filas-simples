#include <iostream> 
#include "pt_br.h"
#define max 9

using namespace std;

int pilha[max], fila[max], topo=-1, i, j, opcao;

void push() {
    //insere os elementos na pilha
    if(topo<max) { 
        cout << "\n";
        cout << "Digite o valor que deseja inserir no vetor: ";
        cin >> i;
        topo++;
        pilha[topo] = i;
    }            

    //condicional para quando a pilha estiver cheia.    
        else {
            cout << "A pilha está cheia, remova algum elemento para adicionar mais.\n";
        }
}

void pop() {
    //remover elementos da pilha
    if (topo>-1) {
            pilha[topo] = 0;
            topo--;
            cout << "\n";
            cout << "Elemento removido com sucesso.\n";
    }
    //condicional para não permitir execução de pop se a pilha estiver vazia   
        else {
            cout << "\n";
            cout << "Não é possível executar essa ação pois não existem elementos no vetor.\n";
}       }

void exibe() {
    //exibindo os elementos
    if (topo>(-1)) {
        cout << "\n";
        cout << "| ";

        for (i=0; i<=topo; i++) {
            cout << pilha[i] << " | ";
        }

        cout << "\n";
    } 
    
    //condicional para não exibir se não houver elementos no vetor
    else {
          cout << "\n";  
          cout << "Não é possível executar essa ação pois não existem elementos no vetor.\n";  
     }    
}

void inverte() {
    //invertendo os elementos presentes na pilha
    if (topo>(-1)) {
        i=topo;
        for (j=0; j<=topo; j++) {
            fila[j] = pilha[i];
            i--;
        }

        for (j=0; j<=topo; j++) {
            pilha[j] = fila[j];
        }
    }
}    

int main() {
    acentos();

    while(true) {

        cout << "\n";
        cout << "----------MENU----------" << endl;
        cout << "[1] Inserir elemento.\n";
        cout << "[2] Remover elemento.\n";
        cout << "[3] Exibir pilha.\n";
        cout << "[4] Inverter pilha.\n";
        cout << "[9] Sair.\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;
        cout << "-------------------------\n";
        system("cls");

        switch (opcao) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: exibe(); break;
            case 4: inverte(); break;
            case 9: return 0;
            default: cout << "\nEscolha uma opção válida."; break;
        }
    }
        return 0;   
}