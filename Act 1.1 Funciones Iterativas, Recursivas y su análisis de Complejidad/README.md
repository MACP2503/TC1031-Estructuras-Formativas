
  Marco Antonio Camalich Pérez<br />
  A01351725<br />
  25 de Agosto de 2021<br />
  Programación de estructuras de datos y algoritmos fundamentales<br />
  Benjamin Valdes Aguirre<br />
 # Act 1.1: Funciones Iterativas, Recursivas y su analisis de Complejidad<br />
   
### Análisis de complejidad temporal
#### Suma Iterativa
El algoritmo recorre n cantidad de pasos ya que usa un ciclo que va decrementando linealmente desde el valor de n hasta 1, por lo tanto, su complejidad es O(n) para el peor de los casos.

#### Suma Recursiva
El algoritmo se manda a llamar así mismo "n" cantidad de veces, fenómeno denominado como recursión. Dado que a la cantidad de llamadas depende directamente del valor de n y el cambio es lineal sin ningún tipo de dependencia a otro ciclo o recursión, su complejidad sigue siendo O(n) para el peor de los casos.

#### Suma Directa
El algoritmo siempre mantendrá la misma cantidad de pasos independientemente del valor que se le otorgue ya que es una suma directa la que se efectúa sin necesidad de utilizar ciclos o recursión, por lo tanto, su complejidad es O(1) para el peor de los casos.
