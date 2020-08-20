#include <stdio.h>
#include <string.h>
#define ull unsigned long long


ull int min(ull int a, ull int b){
    if (a<b) {return a;}
    else {return b;}
} 


ull int taumBday(ull int b,ull int w,ull int bc,ull int wc,ull int z){
    ull min1 = min(bc, wc+z);
    ull min2 = min(wc, bc+z);

    return (b*min1+w*min2) ;
}

int main(){
    int t;
    scanf("%d", &t);
    ull int arr[t];
    int a = 0;
    while (t--) {

        ull int b, w, bc, wc, z;
        scanf("%lld %lld", &b, &w );
        scanf("%lld %lld %lld", &bc, &wc, &z );
        ull int result = taumBday(b, w, bc, wc, z);
        arr[a] = result;
        a++;
    }
    for (int i=0; i < (sizeof(arr)/sizeof(arr[0])); i++) {
        printf("%lld\n", arr[i]);
    }
}
