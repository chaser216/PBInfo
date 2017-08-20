#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int nrCifZero(int a){
  int returnResult=0;
  if(a%10==0) returnResult=1;
  printf("%d,%d\n",a,returnResult);
  if(a<10) return returnResult;
  return returnResult+nrCifZero(a/10);
}

int main(int argc, char const *argv[]) {
  int intrare;
  string entry;
  printf("Intrare: ");
  getline(cin,entry);
  intrare = atoi(entry.c_str());
  printf("Rezultat: %d\n",nrCifZero(intrare));
  return 0;
}
