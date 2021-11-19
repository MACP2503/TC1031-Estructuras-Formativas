Marco Antonio Camalich Pérez<br />
  A01351725<br />
  19 de noviembre de 2021<br />
  Programación de estructuras de datos y algoritmos fundamentales<br />
  Benjamin Valdes Aguirre<br />
 # Act 3.3 - Árbol Desplegado: Implementando un Splay Tree<br />
   
### Análisis de complejidad temporal
### Add
Dado a que el añadir datos depende de un ciclo que reitera la existencia o inexistencia de valores en el árbol, cada que se ejecute la función, dependerá del N otorgado por el caso específico del heap. Esto lo convierte en un 0(n) para el peor de los casos.

### Remove
El remove depende directamente de la recursión a través de sus elementos para poder funcionar correctamente. N se moviliza dependiendo de las filas observables y estas no siempre manejan la misma cantidad de iteraciones, esto equivale a un 0(n) para el peor de los casos.

### Find
El regresar el valor buscado requiere de una búsqueda por todas las desconocidas posiciones del splay, esto hace que equivalga a un 0(n) para el peor de los casos.

### Size
Size solo retorna el valor entero de la variable count, la cuál pertenece a diferentes operaciones en todo el programa. Count depende de los valores del Splay por lo que las operaciones con la constante son 0(n) para el peor de los casos. Sin emnbargo, lo que hace size es retornarla solamente por lo que este preciso movimiento solo es 0(1) para el peor de los casos.

