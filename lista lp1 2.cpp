#include <iostream>
using namespace std;

struct nolista{
    string nome;
    nolista * ant;
    nolista * prox;
};

struct descritor{
    nolista * inicio;
    nolista * fim;
    int tam = 0;
};



descritor * criar_lista(){
    descritor * novo = new descritor;
    novo -> inicio = NULL;
    novo ->  fim= NULL;
    novo -> tam = 0;
        return novo;
}

 

void inserir_fim(descritor * l, string name){
    nolista * novo = new nolista;
    novo -> nome = name;
    novo -> prox = NULL;
    novo -> ant = NULL;
    if(l-> inicio == NULL){
        l -> inicio = novo;
        l -> fim = novo;
        l -> tam ++;
    }else{
        novo -> ant = l -> fim;
        l -> fim -> prox = novo;
        l -> fim = novo;
        l -> tam ++;
    }
}
void imprimir(descritor * l){
    nolista * p = l -> inicio;
    while(p != NULL){
        cout << p -> nome  << endl;
        p = p-> prox;
    }
}
descritor * dividir_lista(descritor * l){
    nolista * p = l-> inicio;
    descritor * l2 = criar_lista();
    int metade = l -> tam /2;
    if(l -> tam % 2 !=0)
    metade++;
    for(int i = 0; i<metade-1;i++)
         p = p->prox;
    l2 -> inicio = p -> prox;
    l2 -> fim = l -> fim;
    l -> fim = p;
    p -> prox = NULL;
    l2 -> inicio -> ant = NULL;
    l2 -> tam = l -> tam - metade;
     l -> tam = metade;
    return l2;
    
}




int main(){

descritor * l = criar_lista(); //criou lista // o descritor L ficou igual com o do

string nome;
cout << "Qual o nome se for 'fim' o programa acaba." << endl;
cin >> nome;
while(nome != "fim"){
    inserir_fim(l,nome);
    cout << "Qual o nome se digitar 'fim' o programa acaba" << endl;
    cin >> nome;
}
cout << endl;
;

descritor*p = new descritor;
p = dividir_lista(l);
imprimir(l);
cout << endl;
imprimir(p);
}


