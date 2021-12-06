
  Marco Antonio Camalich Pérez<br />
  A01351725<br />
  9 de septiembre de 2021<br />
  Programación de estructuras de datos y algoritmos fundamentales<br />
  Benjamin Valdes Aguirre<br />
 # Act 1.2 - Algoritmos de Búsqueda y Ordenamiento<br />
   
### Análisis de complejidad temporal
#### Selection Sort
Dado a que la ejecución de selection sort requiere analizar la posición de un número con respecto a la posición del menor valor ubicado en una posición inferior, si se requiere una inversión total de los valores, el peor caso sería de O(n*n).
#### Bubble Sort
Dado a que el movimiento del bubble sort es con números adyacentes que probablemente se encuentren invertidos, si se requiere una inversión total de los valores adyacentes entre si, el peor caso sería de O(n*n).
#### Merge Sort
La generación de constantes mitades del merge sort para analizar pasos más pequeños ofrece una complejidad de O(log n), pero al juntar las divisiones, estas dependen del valor de n generando una multiplicación del Big O, dando O(n log n) como el peor de los casos.
#### Búsqueda Secuencial
El recorrido de la secuencial depende solamente de n, por lo que el peor caso sería de O(n).
#### Búsqueda Binaria
La busqueda binaria es lo equivalente al merge sort pero en búsquedas sin necesidad de hacer el sorting, su división en fracciones más pequeñas arrojaría un O(log n) como el peor de los casos.

### Actualización de programa 1.2
-Creación de análisis de complejidad.
