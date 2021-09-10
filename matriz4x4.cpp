#include <iostream> 
#include <iomanip>
#include "pt_br.h"
#define TAM 4

using namespace std;

int matriz[TAM][TAM], x, c_diag2=0, soma_diag2=0, impar_diag=0, soma_diag=0, dif=0, menu;
int i=0, j=0, par=0;

void opcao1() { 
    for (i=0; i<TAM; i++) {
        for (j=0; j<TAM; j++) {
            cout << "Digite um valor para linha " << i+1 <<  " na coluna " << j+1 << endl; 
            fflush(stdin);
            cin >> matriz[i][j];                 
        }
    }
    system("cls"); 
}
  
void opcao2() {
    cout << "-----Exibição da Matriz inserida-----\n";
        
        for (i=0; i<TAM; i++) {
            cout << " | "; 
                for (j=0; j<TAM; j++) {
                cout << setprecision(3);
                cout << matriz[i][j] << " | ";
                }

            cout << endl;
        }
}


void opcao3() { /* diagonal secundária */
    soma_diag2=0;
    for (i=0; i<TAM; i++) {
        for (j=0; j<TAM; j++) {
            if (i+j == 3) {
                soma_diag2 += matriz[i][j]; 
            }
        }
    }
}    

void opcao4() {
    par=0;
    for (i=0; i<TAM; i++) {
        for (j=0; j<TAM; j++) {
            if (i+j == 3) {
                x = matriz[i][j];
             
                if (x % 2 == 0) 
                    par++;
            }
        }
    }
}    

void opcao5() { /* diagonal principal*/
    impar_diag=0;
    soma_diag=0;

    for (i=0; i<TAM; i++) {
        for (j=0; j<TAM; j++) {
            if (i == j) {
                soma_diag += matriz[i][j];
                x = matriz[i][j]; 
            }
                if (x % 2 != 0) 
                impar_diag+=x; 
        }                      
    }  
}
    
void opcao6() {
    opcao3();
    opcao5();
    dif =0;
    dif = (soma_diag - soma_diag2);
}

int main() {
    acentos();
    opcao1();

    while (true) {
        cout << "\n\n";
        cout << "------------------------MENU------------------------" << endl;
        cout << "\n";
        cout << "[1] Carregar novamente a Matriz de Inteiros 4x4" << endl;
        cout << "[2] Exibir Matriz 4x4" << endl;
        cout << "[3] Somatória dos elementos da diagonal secundária" << endl;
        cout << "[4] Quantidade de números pares da diagonal secudária" << endl;
        cout << "[5] Somatória dos números ímpares da diagonal principal." << endl;
        cout << "[6] Diferença da somatória da diagonal principal pela secundária." << endl;
        cout << "[9] Sair" << endl;
        cin >> menu;
        cout << "\n\n";

        switch (menu) {
            case 1: opcao1(); break;
            case 2: opcao2(); break;
            case 3: opcao3();
                    cout << "Soma da diagonal secundária: " << soma_diag2 << endl;
            break;
            case 4: opcao4(); 
                    cout << "Quantidade de números pares da diagonal secudária: " << par << endl;
            break;
            case 5: opcao5(); 
                    cout << "Somatória dos números ímpares da diagonal principal: " << impar_diag << endl; 
            break;
            case 6: opcao6(); 
                    cout << "Diferença da somatória da diagonal principal pela secundária: " << dif << endl; 
            break;
            case 9: return 0;
            default: cout << "Escolha uma opção válida." << endl;
        }
    }
    return 0;
}