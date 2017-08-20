#include <cstdio>
#include <iostream>

using namespace std;

int cmmdc(int nr1, int nr2){
  int min;
  if(nr1>nr2) min=nr2;
  else min=nr1;
  for(int i=2;i<=min;i++){
    if(nr1%i==0&&nr2%i==0){
      return i*cmmdc(nr1/i,nr2/i);
    }
  }
  return 1;
}

int main(int argc, char const *argv[]) {
  int intrare1, intrare2;
  printf("Intrare 1: "); cin >> intrare1;
  printf("Intrare 2: "); cin >> intrare2;
  if (intrare1 > 0 && intrare2 > 0) {
    printf("Rezultat: %d%c",cmmdc(intrare1,intrare2),'\n');
  }
  return 0;
}
