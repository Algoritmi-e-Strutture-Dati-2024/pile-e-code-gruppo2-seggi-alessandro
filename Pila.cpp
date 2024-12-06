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

