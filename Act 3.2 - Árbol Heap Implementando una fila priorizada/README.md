  Marco Antonio Camalich Pérez<br />
  A01351725<br />
  17 de octubre de 2021<br />
  Programación de estructuras de datos y algoritmos fundamentales<br />
  Benjamin Valdes Aguirre<br />
 # Act 3.2 - Árbol Heap: Implementando una fila priorizada<br />
   
### Análisis de complejidad temporal
### Push
En este caso, el algoritmo tendría que recorrer siempre la misma cantidad de pasos ya que no existen ciclos de repetición o alguna condición que pueda modificar la cantidad de veces que cierto fragmento se repita. Sin embargo, este debe recorrer todos los elementos del árbol, dependiendo de la cantidad que existen. Esto lo convierte en un 0(n) para el peor de los casos.

### Pop
La existencia de recursión hace a la función de la altura dependiente de la cantidad de movimientos que se deben de hacer a partir de la raíz. Una dependencia de una sola variable equivale a un ciclo, por lo tanto, equivale a un 0(n) para el peor de los casos.

### Top
La presencia de tres ifs simples dentro de la función find no cambia la complejidad, sin embargo el while que existe dentro de otro while que obligatoriamente deben ser utilizados hace que equivalga a un 0(n*n) para el peor de los casos.

### Empty
Este caso es especial ya que existe recursión dentro de un for, este fenómeno ejemplifica el uso compartido de dos ciclos distintos que dependen uno del otro por lo que su complejidad equivale a un 0(n*n) para el peor de los casos.

### Size
