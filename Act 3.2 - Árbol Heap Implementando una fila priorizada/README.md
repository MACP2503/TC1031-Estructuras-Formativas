  Marco Antonio Camalich Pérez<br />
  A01351725<br />
  17 de octubre de 2021<br />
  Programación de estructuras de datos y algoritmos fundamentales<br />
  Benjamin Valdes Aguirre<br />
 # Act 3.2 - Árbol Heap: Implementando una fila priorizada<br />
   
### Análisis de complejidad temporal
### Push
Dado a que el añadir datos depende de un ciclo que reitera la existencia o inexistencia de valores en el árbol, cada que se ejecute el Push, dependerá del N otorgado por el caso específico del heap. Esto lo convierte en un 0(n) para el peor de los casos.

### Pop
El pop depende directamente de la recursión a través de sus elementos para poder funcionar correctamente. A pesar de que siempre es el primer elemento el que se elimina, las filas observables no siempre manejan la misma cantidad de iteraciones, esto equivale a un 0(n) para el peor de los casos.

### Top
El regresar el valor de mayor prioridad, indiferentemente de la cantidad de valores que se encuentren abajo de este en el heap hace que equivalga a un 0(1) para el peor de los casos.

### Empty
Este caso es especial ya que existe recursión dentro de un for, este fenómeno ejemplifica el uso compartido de dos ciclos distintos que dependen uno del otro por lo que su complejidad equivale a un 0(n*n) para el peor de los casos.

### Size
