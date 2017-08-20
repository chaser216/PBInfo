#include <iostream>

using namespace std;

int factorial(int n){
  if(n-1>1) n*=factorial(n-1);
  return n;
}

int main(int argc, char const *argv[]) {
  int intrare;
  printf("Intrare: ");
  cin >> intrare;
  if(intrare > 0) printf("Rezultat: %d%c", factorial(intrare), '\n');
  return 0;
}
