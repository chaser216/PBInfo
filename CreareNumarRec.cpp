#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>

using namespace std;


int lengthof(int k){
    int result = 0;
    while(k>0){
        k /= 10;
        result++;
    }
    return result;
}

int F(int n, int a[], int k){
    if(!(a[n-1]%2)){
        printf("true\n");
        if(!k) k = a[n-1];
        else k += a[n-1]*pow(10,lengthof(k));
    }
    printf("Iteration %d,%d\n", n, k);
    if(n<=1) return k;
    return F(n-1, a, k);
}

int main(){
    int n;
    string entry;
    printf("Intrare: ");
    getline(cin,entry);
    n = atoi(entry.c_str());
    int a[n];
    for(int i=0; i<=n-1;i++){
        printf("a[%d] = ", i);
        getline(cin,entry);
        a[i] = atoi(entry.c_str());
    }

    printf("Rezultat: %d\n", F(n,a,0));
    getline(cin,entry);
}