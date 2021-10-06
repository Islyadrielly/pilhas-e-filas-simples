#include <iostream>
#include "pt_br.h"
#define max 9

using namespace std;

int array[max], i, j, fim=-1, k, opcao;

void push() {
    if(fim<max-1) { 
            cout << "\n";
            cout << "Digite o elemento que deseja inserir na lista: ";
            cin >> i;
            cout << "Posições disponiveis: de 0 até " << fim+1 << "\n";
            cout << "Em qual posição deseja inserir o elemento? ";
            cin >> j;
                if (j>=0 && j<=fim+1) {
                    for (k=fim+1; k>j; k--) {
                        array[k] = array[k-1];
                    }     
                   array[j] = i;
                   fim++; 
                }  
                else cout << "Escolha outra posição, não podemos ter lacunas.";         
    }
        else {
            cout << "A lista está cheia, remova algum elemento para adicionar mais.\n";
        }
}

void pop() {
    if (fim>-1) {
            cout << "Deseja remover o elemento de qual posição? ";
            cin >> j;
                if (j>=0 && j<=fim+1) {
                    for (k=j; k<fim; k++) {
                        array[k] = array[k+1];
                    }                      
                    fim--;
                    cout << "\n";
                    cout << "Elemento removido da lista com sucesso.\n";
                } 

                else cout << "Escolha outra posição, não podemos ter lacunas.";
    }   
        else {
            cout << "\n";
            cout << "Não é possível executar essa ação pois não existem elementos na lista.\n";
    }

}

void show() {
    if (fim>(-1)) {
        cout << "\n";
        cout << "| ";

        for (i=0; i<=fim; i++) {
            cout << array[i] << " | ";
        }

        cout << "\n";
    } 
    
    else {
          cout << "\n";  
          cout << "Não é possível executar essa ação pois não existem elementos na lista.\n";  
     }    
}

int main() {
    acentos();

    while(true) {

        cout << "\n";
        cout << "----------LISTA----------" << endl;
        cout << "[1] Inserir elemento.\n";
        cout << "[2] Remover elemento.\n";
        cout << "[3] Exibir lista.\n";
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