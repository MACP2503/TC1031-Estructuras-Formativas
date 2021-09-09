#ifndef SORTS_H
#define SORTS_H
#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <cstring>

class sorts
{
    public:
    sorts();
    ~sorts();
    std::vector<int> ordenaSeleccion(std::vector<int>);
    std::vector<int> ordenaBurbuja(std::vector<int>);
    std::vector<int> ordenaMerge(std::vector<int>);
    int busqSecuencial(std::vector<int>, int);
    int busqBinaria(std::vector<int>, int);
    std::vector<int> MergeSort(std::vector<int>&, int, int);
    std::vector<int> Mergee(std::vector<int>, int, int, int);
};

#endif // SORTS_H
