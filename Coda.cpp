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
