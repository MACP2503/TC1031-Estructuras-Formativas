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

if(n==11){
    sd=11+10+9+8+7+6+5+4+3+2+1;
}
if(n==10){
    sd=10+9+8+7+6+5+4+3+2+1;
}
if(n==9){
    sd=9+8+7+6+5+4+3+2+1;
}
if(n==8){
    sd=8+7+6+5+4+3+2+1;
}
if(n==7){
    sd=7+6+5+4+3+2+1;
}
if(n==6){
   sd=6+5+4+3+2+1;
}
if(n==5){
   sd=5+4+3+2+1;
}
if(n==4){
   sd=4+3+2+1;
}
if(n==3){
   sd=3+2+1;
}
if(n==2){
   sd=2+1;
}
if(n==1||n==0){
   sd=1;

}
return sd;
}
