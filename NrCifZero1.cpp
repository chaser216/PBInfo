#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int nr_cif_zero(int n, int nr){
    int returnResult=0;
    if(n%10==0) returnResult=1;

    if(n<10) return nr+returnResult;
    return nr_cif_zero(n/10, nr+returnResult);
}

int main(){
    int intrare;
    string entry;
    printf("Intrare: ");
    getline(cin,entry);
    intrare = atoi(entry.c_str());
    printf("Rezultat %d\n", nr_cif_zero(intrare, 0));
    getline(cin,entry);
}