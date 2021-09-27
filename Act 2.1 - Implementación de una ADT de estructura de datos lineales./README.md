  Marco Antonio Camalich Pérez<br />
  A01351725<br />
  27 de septiembre de 2021<br />
  Programación de estructuras de datos y algoritmos fundamentales<br />
  Benjamin Valdes Aguirre<br />
 # Act 2.1 - Implementación de una ADT de estructura de datos lineales<br />
   
### Análisis de complejidad temporal
### Insertion
El algoritmo recorre n cantidad de pasos ya que el fin de la lista delimita al único while existente en el código, esto quiere decir que un diferente valor de datos requerirá una mayor cantidad de llamadas al ciclo. Esto lo convierte en un 0(n) para el peor de los casos.

### Search
A pesar de que el algoritmo posee un while de dos condiciones, este no posee nada dentro que modifique la cantidad de pasos a usar. La existencia de una sola condición acompañada de pasos estáticos lo convierte en un 0(n) para el peor de los casos.

### Update
La presencia de dos ifs dentro de un while no cambia la cantidad de pasos a seguir, esto es igualmente delimitado por la cantidad de espacios que el dato ingresado requiera movilizarse. Esto lo convierte en un 0(n) para el peor de los casos.

### DeleteAt
Este sería O(1) si se desea eliminar el primer valor o el último, pero debido a su naturaleza de función dependiente de los datos ingresados por el usuario, su while actúa a partir del valor de n para poder completar el recorrido posterior. Esto lo convierte en un 0(n) para el peor de los casos.
