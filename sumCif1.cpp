#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int sumCif(int a, int r){
  if(a<10) return r+a%10;
  return sumCif(a/10, r+(a%10));
}

int main(int argc, char const *argv[]) {
  int intrare;
  string entry;
  printf("Intrare: ");
  getline(cin, entry);
  intrare = atoi(entry.c_str());
  printf("Rezultat: %d\n", sumCif(intrare, 0));
  return 0;
}
