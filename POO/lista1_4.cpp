//1)O que significa dizer que uma função g(n) é O(f (n))?
//o limite superior para o piores caso
//-------------------------------------------------------------
//2) 0 que significa dizer que uma fungção g(n) é Theta(f(n))?
//Um limite medio para a maioria dos casos
//-------------------------------------------------------------
//3) 0 que significa dizer que uma fungéo g(n) é Omega(f(n))?
//Um limite inferior para os melhores casos
//-------------------------------------------------------------

/*4) Suponha um algoritmo A e um algoritmo B com funções de c
]omplexidade de tempo
a(n) = n* — n+ 549 e b(n) = 49n + 49, respectivamente. Determine quais são os valores
de n pertencentes ao conjunto dos numeros naturais para os quais A leva menos tempo
para executar do que B.*/

/*
#include <iostream>
using namespace std;

int funcaoA(int n){
    return n * n - n + 549;
}

int funcaoB(int n){
    return 49 * n + 49;
}

int main() {
    cout << "Valores de n para os quais a funcao A leva menos tempo do que a funcao B:\n";

    for (int i = 0; i < 100; i++) {
        if (funcaoA(i) < funcaoB(i)) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
} 
*/
//-------------------------------------------------------------
//5) Expresse a função 10n³ — 5n² — 10n + 3 em termos da notação theta.
/*
#include <iostream>
using namespace std;

int funcao(int n) {
    return 10 * n * n * n;
}

int main() {
   
    int resultado = funcao(5);
	cout << "Resultado da funcao: " << resultado << endl;

    return 0;
}
*/
//-------------------------------------------------------------
//6)é verdade que 2n³ + 5 = theta(n³)? Explique
/*
sim pois para a maioria dos casos,
 o crescimento da função é assintoticamente limitado superior 
 e inferiormente assim sendo a função tetha(n³)*/
 //-------------------------------------------------------------
 /*7)Dois algoritmos A e B possuem complexidade n° e 2” respectivamente. Vocé utilizaria o
algoritmo B ao invés do A, em qual caso? Explique.*/
 /*#include <iostream>
using namespace std;

void algoritmoA(int n) {

};


void algoritmoB(int n) {

};

int main() {
    int tamanho;

cout << "Insira o tamanho da entrada: ";
cin >> tamanho;

    if (tamanho <= 10) { 
        algoritmoA(tamanho);
    } else {
        algoritmoB(tamanho);
    }

    return 0;
}
*/
//-------------------------------------------------------------
//8. Qual a ordem de complexidade no pior caso de:
//a) 2n + 10
/*
#include <iostream>
using namespace std;

void algoritmo(int n) {
    for (int i = 0; i < 2 * n; ++i) {
        
    }
}

int main() {
    int tamanhoDaEntrada;

   	cout << "Insira o tamanho da entrada: ";
	cin >> tamanhoDaEntrada;

    algoritmo(tamanhoDaEntrada);

    return 0;
}
--------------------------------------------------------------------------------*/
/*
b) (1/2)n(n+1)
*/
/*
#include <iostream>
using namespace std;
void algoritmo(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
           
        }
    }
}

int main() {
    int tamanho;

    cout << "Insira o tamanho da entrada: ";
	cin >> tamanho;

    algoritmo(tamanho);

    return 0;
}
-------------------------------------------------------------------------------
*/
/*c) n + raiz de n 

#include <iostream>
using namespace std;
void algoritmo(int n) {
    for (int i = 0; i < n; ++i) {
    }
}

int main() {
    int tamanho;

 cout << "Insira o tamanho da entrada: ";
    cin >> tamanho;

    algoritmo(tamanho);

    return 0;
}
------------------------------------------------------------------------------*/
//d)n/100
/*
#include <iostream>
using namespace std;

void algoritmo(int n) {
    for (int i = 0; i < n; ++i) {
        
    }
}

int main() {
    int tamanho;

    cout << "Insira o tamanho da entrada: ";
    cin >> tamanho;

    algoritmo(tamanho / 100);

    return 0;
}
---------------------------------------------------------------------------*/

/*e) (1/2)n^2

#include <iostream>
using namespace std;

void algoritmo(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            
        }
    }
}

int main() {
    int tamanho;

   cout << "Insira o tamanho da entrada: ";
	cin >> tamanho;

    algoritmo(tamanho);

    return 0;
----------------------------------------------------------------------------}*/
/*f)
(1/2)n²-3n

#include <iostream>
using namespace std;

void algoritmo(int n) {
    for (int i = 0; i < n * n / 2 - 3 * n; ++i) {
       
    }
}

int main() {
    int tamanho;

   cout << "Insira o tamanho da entrada: ";
   cin >> tamanho;

    algoritmo(tamanho)
    return 0;
}
----------------------------------------------------------------------*/
/*9)Quais as grandezas fisicas que influenciam a eficiéncia de tempo de um algoritmo na
pratica?

/*processador, memoria, banda de rede, e o tamanho dos dados
-----------------------------------------------------------------------*/
/*10)Para o calculo da complexidade de algoritmos ndo recursivos, existe um conjunto de
regras bastante simples de serem seguidas. Cite e descreva estas regras.

analisar o comportamento, analisar os loops e verificar as condicoes

#include <iostream>
using namespace std;

int somaArray(int arr[], int n) {
    int soma = 0;
    for (int i = 0; i < n; ++i) {
        soma += arr[i];
    }
    return soma;
}

int main() {
    int tamanhoDoArray;
    cout << "Insira o tamanho do array: ";
   	cin >> tamanhoDoArray;

    int array[tamanhoDoArray];
    cout << "Insira os elementos do array:\n";
    for (int i = 0; i < tamanhoDoArray; ++i) {
        std::cin >> array[i];
    }

    int resultado = somaArray(array, tamanhoDoArray);
    cout << "A soma dos elementos do array é: " << resultado << endl;

    return 0;
}
------------------------------------------------------------------------
11)Quais problemas que possuem geralmente complexidade da ordem de logn?

busca binaria e busca linear*/
/*--------------------------------------------------------------------------
12) Quais problemas que costumam ser exponenciais?

sao caracterizados por crecimento exponencial, a cada vez que o problema aumenta, o algoritimo tambem aumenta
---------------------------------------------------------------------------*/
/*
14)User
calcule a complexidade no pior caso 

int i, k;
for (i=0;i<N;i++) {
for (j=0;j<N;j++) {
R[I][j]=0;
for (k=0:k < N; k++)
R[I][j]+=A[i][k]*B[k][j]
----------------------------------------------------------------------------------}*/
/*
17)Obtenha a equagdo matematica referente a analise do pior € melhor caso do fragmento
de codigo abaixo:
1 for (i=0;i<N;i++)
2 printf ("%d" i);
*/

