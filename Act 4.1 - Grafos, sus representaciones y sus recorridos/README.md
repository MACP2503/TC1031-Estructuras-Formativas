Marco Antonio Camalich Pérez<br />
  A01351725<br />
  19 de noviembre de 2021<br />
  Programación de estructuras de datos y algoritmos fundamentales<br />
  Benjamin Valdes Aguirre<br />
 # Act 4.1 - Grafo como matriz de Adyacencia y recorridos (DFS BFS)<br />
   
### Análisis de complejidad temporal
### loadGraphList
Dado a que esta función se encarga de cargar los datos de un archivo de texto, su funcionalidad depende directamente de la existencia de este (primeramente) y de la cantidad de líneas que debe movilizar el getline hasta terminar el grafo. Una total dependencia de n cantidad de líneas lo hace 0(n) para el peor de los casos.

### DFS
Dado a que la búsqueda en profundidad expande la búsqueda desde el nodo padre hasta el nodo hijo, pasando por cada descendencia hasta completar el recorrido buscado, su complejidad depende ahora de un O(V+E) para el peor de los casos donde V es la cantidad de vértices del grafo y la E sus ejes, todo esto por los movimientos ejercidos por el acomodo de sus parentescos y los números ingresados a buscar.

### BFS
Dado a que la búsqueda en anchura recorre los nodos de un grafo comenzando en la raíz para posteriormente explorar a todos sus vecinos, su complejidad depende ahora de un O(V+E) para el peor de los casos donde V es la cantidad de vértices del grafo y la E sus ejes, todo esto por los movimientos ejercidos por el acomodo de sus datos y los números ingresados a buscar.


