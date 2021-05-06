/*problem link: https://www.hackerrank.com/challenges/conditional-statements-in-c/problem*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    char arr[9][6] = {"one", "two", "three",
                        "four", "five", "six",
                        "seven", "eight","nine"};
    if(n <= 9){
        printf("%s", arr[n - 1]);
    }
    else printf("Greater than 9");
    return 0;
}
