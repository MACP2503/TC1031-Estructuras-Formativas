#include "funciones.h"

funciones::funciones()
{
    //ctor
}

funciones::~funciones()
{
    //dtor
}

int funciones::sumaIterativa(int n){
int i = 0;

while(n>0){
    i=i+n;
    n--;
}
return i;
}

int funciones::sumaRecursiva(int n){
if(n==0||n==1){
    n=1;
}
else{
    n=n+sumaRecursiva(n-1);
}
return n;
}

int funciones::sumaDirecta(int n){
int sd=0;
sd=(n*(n+1))/2;
return sd;
}
