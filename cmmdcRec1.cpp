#include <iostream>
#include <cstdlib>

using namespace std;

int cmmdc(int a, int b, int r){
  int min;
  if(a>b) min=b;
  else min=a;

  for(int i=2;i<=min;i++)
    if(a%i==0&&b%i==0)
      return cmmdc(a/i,b/i,i*r);
  return r;
}

int main(int argc, char const *argv[]) {
  int intare1,intrare2;
  string entry;

  printf("Intrare 1: ");
  getline(cin,entry);
  intrare1=stoi(entry);

  printf("Intare 2: ");
  getline(cin,entry);
  intrare2=stoi(entry);

  printf("Rezultat: %d\n",cmmdc(intare1,intrare2,1));
  return 0;
}
