#include "funciones.h"

Funciones::Funciones()
{
    //ctor
}

Funciones::~Funciones()
{
    //dtor
}

int Funciones::sumaIterativa(int n){
int i = 0;

while(n>0){
    i=i+n;
    n--;
}
return i;
}

int Funciones::sumaRecursiva(int n){
if(n==1){
    n=1;
}
else if(n==0){
    n=0;
}
else{
    n=n+sumaRecursiva(n-1);
}
return n;
}

int Funciones::sumaDirecta(int n){
int sd=0;
sd=(n*(n+1))/2;
return sd;
}
