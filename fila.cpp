#include <iostream>
#include "pt_br.h"
#define max 9

using namespace std;

int array[max], fim=-1, i, j, opcao;

void push() { //inserir
    if (fim<max) {
        cout << "\n";
        cout << "Digite o valor que deseja inserir: ";
        cin >> j;
        fim++;
        array[fim] = j;  
    }

    else {
         cout << "\n";
         cout << "A fila está cheia, remova um elemento para inserir mais.";
    }
}

void pop() {
    if (fim>-1) {
        for (i=0; i<fim; i++) {
            array[i] = array[i+1]; 
        }     
        array[fim] = 0;
        fim--;  
        cout << "\n";
        cout << "Elemento removido da fila com sucesso.\n";
           
    }   
        else {
            cout << "\n";
            cout << "Não é possível executar essa ação pois não existem elementos no vetor.\n";
    }

}

void show() {
    if (fim>-1) {
        cout << "\n";
        cout << "| ";

        for (i=0; i<=fim; i++) {
            cout << array[i] << " | ";
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
        cout << "----------FILA----------" << endl;
        cout << "[1] Inserir elemento.\n";
        cout << "[2] Remover elemento.\n";
        cout << "[3] Exibir fila.\n";
        cout << "[9] Sair.\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;
        cout << "-------------------------\n";
        system("cls");

        switch (opcao) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: show(); break;
            case 9: return 0;
            default: cout << "\nEscolha uma opção válida."; break;
        }
    }
        return 0;   
}