/*. Creazione della classe Pila
La classe Pila deve rappresentare una struttura dati LIFO (Last In, First Out). 
Utilizzare una implementazione con vettore o con liste puntate (è possibile riutilizzare la classe ListaPuntatori della scorsa lezione).

Implementare i seguenti operatori di base:

push(T elem) – Aggiunge un elemento alla pila.
pop() – Rimuove l’elemento in cima alla pila e lo restituisce. Gestire eventuali errori (ad esempio, pila vuota).
top() – Restituisce l’elemento in cima alla pila senza rimuoverlo.
isEmpty() – Restituisce true se la pila è vuota, altrimenti false.
size() – Restituisce il numero di elementi nella pila.*/

#include<iostream>
#include"ListaPuntatori.cpp"

template <typename T> 
class Pila {
    private:
    ListaPuntatori<T>elementi;

    public:

 void push (T elem){
elementi.inslista(elem, 1);
    }

T pop(){
T elem = elementi.leggilista(1);
elementi.canclista(1);

return elem;
}

T top(){
return elementi.leggilista(1);
}

bool isEmpty(){
    
    return elementi.listavuota();
} 

int size(){
    return elementi.lunghezza();
}

};

