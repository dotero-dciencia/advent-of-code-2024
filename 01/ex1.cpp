#include <iostream>
#include <queue>
#include <cmath>

// Solución en O(n)

int main(){

  // Definición de variables: n1 -> número de la izquierda; n2 -> número de la derecha; solucion -> donde guardar la solución; lst1 -> todos los números de la izquierda; lst2 -> todos los números de la derecha
  int n1, n2, solucion = 0;
  std::priority_queue<int> lst1, lst2;

  // Lectura de entrada
  while (std::cin >> n1 >> n2){
    lst1.push(n1); lst2.push(n2);
  }

  // Mientras queden números, se restan los mayores de cada grupo y el valor absoluto se añade a la solución. También se eliminan
  while (!lst1.empty()){
    solucion += abs(lst1.top() - lst2.top());
    lst1.pop(); lst2.pop();
  }

  // Imprimimos solución y fin del programa
  std::cout << solucion;
  return 0;
}