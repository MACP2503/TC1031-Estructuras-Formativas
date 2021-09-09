#include "sorts.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstring>
#include <string>
using namespace std;

sorts::sorts()
{
    //ctor
}

sorts::~sorts()
{
    //dtor
}

std::vector<int> sorts::ordenaSeleccion(std::vector<int> resp){
int x, y, aux, mini;

    for(x=0;x<resp.size();x++){
        mini=x;
        for(y=x+1;y<resp.size();y++){
            if (resp[y]<resp[mini]){
                mini = y;
            }
        }
        aux = resp[x];
        resp[x] = resp[mini];
        resp[mini] = aux;
    }
    return resp;
}

std::vector<int> sorts::ordenaBurbuja(std::vector<int> resp){
int x, y, aux;

for(x=0;x<resp.size();x++){
    for(y=0;y<resp.size()-1;y++){
        if(resp[y]>resp[y+1]){
        aux = resp[y];
        resp[y] = resp[y+1];
        resp[y+1] = aux;
        }
    }
}
return resp;
}



std::vector<int> sorts::Mergee(std::vector<int>resp,int inicio, int mitad, int fin){
    int i,j,k;
    int Izq = mitad - inicio + 1;
    int Der = fin - mitad;

    std::vector<int>izquierda(Izq);
    std::vector<int>derecha(Der);

    for(int i = 0; i < Izq; i++){
        izquierda[i] = resp[inicio+i];
    }
    for(int j = 0; j < Der; j++){
        derecha[j] = resp[mitad + 1 + j];
    }

    i = 0;
    j = 0;
    k = inicio;

    while(i < Izq && j < Der){
        if(izquierda[i] <= derecha[j]){
            resp[k] = izquierda[i];
            i++;
        }else{
            resp[k] = derecha[j];
            j++;
        }
        k++;
    }

    while(j < Der){
        resp[k] = derecha[j];
        j++;
        k++;
    }

    while(i < Izq){
        resp[k] = izquierda[i];
        i++;
        k++;
    }
    return resp;

}

std::vector<int> sorts::MergeSort(std::vector<int>&respp, int inicioo, int finn){
    if(inicioo < finn){
        int mitadd = inicioo + (finn - inicioo)/2;
        sorts::MergeSort(respp,inicioo,mitadd);
        sorts::MergeSort(respp,mitadd+1,finn);
        respp=sorts::Mergee(respp,inicioo,mitadd,finn);
    }
    return respp;
    }


 std::vector<int> sorts::ordenaMerge(std::vector<int> resp){
    int inicio=0;
    int fin=resp.size()-1;
    resp=sorts::MergeSort(resp, inicio, fin);
    return resp;
    }


int sorts::busqSecuencial(std::vector<int> resp, int datoo){
	int i=0;
	char b= 'F';
	//Busqueda Secuencial

	while((b == 'F') && (i<resp.size())){
		if(resp[i] == datoo){
			b = 'V';

		}
		i++;
	}

	if(b == 'F'){
		return -1;
	}
	else if(b == 'V'){
		int ii=i-1;
		return ii;
	}

	}

int sorts::busqBinaria(std::vector<int> resp, int datoo){
    int inf,sup,mitad,i;
	char b='F';
	sup=resp.size();
	i=0;
	while((inf<=sup)&&(i<5)){
		mitad = (inf+sup)/2;
		if(resp[mitad] == datoo){
			b='V';
			break;
		}
		if(resp[mitad]>datoo){
			sup = mitad;
			mitad = (inf+sup)/2;
		}
		if(resp[mitad]<datoo){
			inf = mitad;
			mitad = (inf+sup)/2;
		}
		i++;
	}

	if(b == 'V'){
		return mitad;
	}
	else{
		return -1;
	}
}



