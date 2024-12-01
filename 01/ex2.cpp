#include <iostream>
#include <queue>
#include <cmath>
#include <map>

// Solución en O(n)

int main(){

  // Definición de variables: n1 -> número de la izquierda; n2 -> número de la derecha; solucion -> donde guardar la solución; diccionario -> pares de valores con la cantidad de veces que aparece cada número en la lst2; lst1 -> todos los números de la izquierda; lst2 -> todos los números de la derecha
  int n1, n2, solucion = 0;
  std::map<int, int> diccionario;
  std::vector<int> lst1, lst2;

  // Lectura de entrada
  for (int i = 0; i < 1000; ++i){
    std::cin >> n1 >> n2;
    lst1.push_back(n1); lst2.push_back(n2);
  }

  // Añadir la cantidad de veces que aparece cada número al diccionario
  for (int i = 0; i < lst2.size(); ++i){

    // Si ese número no esta registrado, lo añadimos con 1 aparición. Si sí está registrado, le añadimos 1 aparición más
    if (diccionario.find(lst2[i]) == diccionario.end()){
      diccionario[lst2[i]] = 1;
    } else {
      diccionario[lst2[i]] += 1;
    }
  }

  // Por cada número de la primera lista, vemos cuántas veces aparece en la segunda y sumamos a la solución el producto del número con las veces que aparece
  for (int i = 0; i < lst1.size(); ++i){
    solucion += lst1[i]*diccionario[lst1[i]];
  }

  // Imprimimos solución y fin del programa
  std::cout << solucion;
  return 0;
}