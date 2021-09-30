#ifndef list_h
#define list_h
#include <iostream>
#include <sstream>
#include <cstring>
#include <string>

using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

template <class T>
class List{
  private:
  Nodo *inicio = nullptr;
  Nodo *actual = nullptr;
  public:
  string toString() const;
  void insertion(int);
  int search (int);
  void update(int, int);
  void deleteAt(int);
};

template <class T>
std::string List<T>::toString() const {
	std::stringstream aux;
  Nodo *p;
	p = inicio;
	aux << "[";
	while (p != 0) {
		aux << p->dato;
		if (p->siguiente != 0) {
			aux << ", ";
		}
		p = p->siguiente;
	}
	aux << "]";
	return aux.str();
}

template <class T>

void List<T>::insertion(int elemento){

    Nodo *nuevo = new Nodo;
    nuevo->dato=elemento;
    nuevo->siguiente=nullptr;

    if (inicio == nullptr){
        inicio=nuevo;
    }
    else{
        Nodo *aux = inicio;
        while (aux->siguiente != nullptr)
            aux = aux->siguiente;
        aux->siguiente=nuevo;
    }
toString();    
}

template <class T>
int List<T>::search(int buscar){
    Nodo *aux=new Nodo();
    aux = inicio;
    int pos = 0;

    while(aux!= 0){
      if(aux->dato == buscar){
        return pos;
      }
      aux = aux->siguiente;
      pos++;
    }
    return -1;
}

template <class T>
void List<T>::update(int posicion, int elemento){
int pos=0;
Nodo *actual=new Nodo();
    actual=inicio;
   while(actual->siguiente!=NULL) {
      if(pos==posicion) {
         actual->dato = elemento;
      }
      
      actual = actual->siguiente;
      pos++;
   }
 
  if(posicion==pos){
    actual->dato = elemento;
  }
  toString();
}

template <class T>
void List<T>::deleteAt(int n){
int i=0;

if (inicio != NULL){
Nodo *aux_borrar;
Nodo *anterior=NULL;
aux_borrar=inicio;

while((aux_borrar != NULL)&&(i<n)){
anterior = aux_borrar;
aux_borrar = aux_borrar->siguiente;
i++;
}

if(aux_borrar == NULL){

}
else if(anterior == NULL){
inicio = inicio->siguiente;
delete aux_borrar;
}
else{
anterior->siguiente = aux_borrar->siguiente;
delete aux_borrar;
}

}

}

#endif


