#include <iostream>
#include <queue>
#include <cmath>

int main(){
  int n1, n2, contador, solucion = 0;
  std::vector<int> lst1, lst2;
  for (int i = 0; i < 1000; ++i){
    std::cin >> n1 >> n2;
    lst1.push_back(n1); lst2.push_back(n2);
  }
  for (int i = 0; i < lst1.size(); ++i){
    contador = 0;
    for (int j = 0; j < lst2.size(); ++j){
      if (lst1[i] == lst2[j]){
        contador += 1;
      }
    }
    solucion += contador*lst1[i];
  }
  std::cout << solucion;
  return 0;
}