/*Creazione della classe Coda
La classe Coda deve rappresentare una struttura dati FIFO (First In, First Out). Utilizzare una implementazione con vettore circolare o con liste puntate (è possibile riutilizzare la classe ListaPuntatori della scorsa lezione).

Implementare i seguenti operatori di base:

enqueue(T elem) – Aggiunge un elemento alla fine della coda.
dequeue() – Rimuove l’elemento in testa alla coda e lo restituisce. Gestire eventuali errori (ad esempio, coda vuota).
front() – Restituisce l’elemento in testa alla coda senza rimuoverlo.
isEmpty() – Restituisce true se la coda è vuota, altrimenti false.
size() – Restituisce il numero di elementi nella coda.*/


#include<iostream>
#include"ListaPuntatori.cpp"

template <typename T> 
class Coda {

private:
ListaPuntatori<T> elementi;
int ultimo = elementi.lunghezza();

public:
void eneque(T elem){
    elementi.inslista(elem, ultimo);
    ultimo++;
}


T dequeue(){
    T elem = elementi.leggilista(1);
    elementi.canclista(1);

    return elem;
}


T front(){
return elementi.leggilista(1);
}

bool isEmpty(){
    
    return elementi.listavuota();
} 

int size(){
    return elementi.lunghezza();
}

};