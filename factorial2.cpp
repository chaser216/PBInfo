#include <iostream>

using namespace std;

int factorial(int n, int f){
  if(n>1) f *= factorial(n-1,f+1);
  return f;
}

int main(int argc, char const *argv[]) {
  int intrare;
  printf("Intrare: ");
  cin >> intrare;
  if (intrare > 0 && intrare <=10) printf("Rezultat: %d%c",factorial(intrare,1),'\n');
  return 0;
}
