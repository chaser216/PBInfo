#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int sumcif(int a){
  if(a<10) return a;
  return a%10 + sumcif(a/10);
}

int main(int argc, char const *argv[]){
  int intrare1, intrare2;
  string entry;

  printf("Intrare 1: ");
  getline(cin,entry);
  intrare1=atoi(entry.c_str());

  printf("Rezultat: %d\n",sumcif(intrare1) );
  return 0;
}
