#include <iostream>
using namespace std;

struct pessoa{

    string nome;
    string sexo;
    pessoa * proximo;
    
};

pessoa *criar_lista(){

    return NULL;
}
void append(pessoa *&l,string nome1,string sexo2){

    pessoa * novo = new pessoa;
    novo -> nome = nome1;
    novo -> sexo = sexo2;
    novo -> proximo = NULL;
    
    if(l==NULL){
        l = novo;
    
    }else{
        pessoa * p = l;
    
        while(p->proximo!= NULL){
            p = p -> proximo; // P APONTA PARA PROX CAIXA.

        p -> proximo = novo; 
        }
    }
void imprimir_lista(pessoa * L){
    pessoa *p = l;
    while(p!=NULL){
        cout << p -> proximo << " ";
        p = p -> proximo;
    }
}

void pedir_pessoas(string finalizdor, ){
    while(finalizador != 'fim')
    cout << "digite o nome da pessoa: ";
    cin >> pessoa -> nome;
}

int main(){

pessoa * L = new 
// pessoa * homem = new -> jogar a lista para lixo, quando chamou a função ela colocou já no NULL.
pessoa * homens = criar_lista();
//homem = criar_lista(); -> fazer quando apresentar o main, pois o homem irar receber na função o NULL.
pessoa * mulheres = criar_lista();

string finalizador = 'nada';

}