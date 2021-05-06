/*problem link: https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max(int a, int b){
    return a > b? a : b;
}
void calculate_the_maximum(int n, int k) {
    int maxAND = 0;
    int maxOR = 0;
    int maxXOR = 0;
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            if((i & j) < k)
                maxAND = max(maxAND, i & j);
            if((i | j) < k)
                maxOR = max(maxOR, i | j);
            if((i ^ j) < k)
                maxXOR = max(maxXOR, i ^ j);
        }
    }
    printf("%d\n%d\n%d\n", maxAND, maxOR, maxXOR);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
