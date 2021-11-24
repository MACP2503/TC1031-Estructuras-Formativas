Marco Antonio Camalich Pérez<br />
  A01351725<br />
  24 de noviembre de 2021<br />
  Programación de estructuras de datos y algoritmos fundamentales<br />
  Benjamin Valdes Aguirre<br />
 # Act 4.1 - 5.1 - Implementación individual de operaciones sobre conjuntos<br />
   
### Análisis de complejidad temporal
### Put
Las inserciones en los hash requieren de un total control y manejo de la posición de la llave en cuestión. A pesar de que el proceso de añadido es automático por el análisis de intersección que se realiza previo al put, su complejidad temporal es de O(n) para el peor de los casos debido a las posibilidades de saturación y requerimientos cuadráticos que requiera una complicada selección de la tabla. A pesar de esto, a menudo será 0(1) su complejidad.

### Get
Obtener un número en un hash suele ser O(1) por su dependencia de la cantidad de llaves y valores digitados, a pesar de esto, su movimiento de estudio con quadratic probing hace que pueda obtenerse hasta un O(n) para el peor de los casos ya que no existe circularidad que pueda superar la cantidad de valores contenidos en la estructura, pero si hay casos donde se requiere la movilización en la totalidad de los datos en cuestión.
