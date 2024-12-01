#include <iostream>
#include <queue>
#include <cmath>

int main(){
  int n1, n2, solucion = 0;
  std::priority_queue<int> lst1, lst2;
  for (int i = 0; i < 1000; ++i){
    std::cin >> n1 >> n2;
    lst1.push(n1); lst2.push(n2);
  }
  while (!lst1.empty()){
    solucion += abs(lst1.top() - lst2.top());
    lst1.pop(); lst2.pop();
  }
  std::cout << solucion;
  return 0;
}