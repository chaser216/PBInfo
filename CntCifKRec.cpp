#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int cnt_cif(int n, int k, int c){
    int returnResult=0;
    if(n%10>=k) returnResult=1;

    if(n<10) return c+returnResult;
    return cnt_cif(n/10,k,c+returnResult);
}

int main(){
    int intrare,prag;
    string entry;
    printf("Intrare: ");
    getline(cin,entry);
    intrare = atoi(entry.c_str());
    printf("Prag: ");
    getline(cin,entry);
    prag = atoi(entry.c_str());
    printf("Rezultat: %d\n",cnt_cif(intrare,prag,0));
    getline(cin, entry);
    return 0;
}