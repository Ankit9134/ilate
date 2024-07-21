#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
    int arr[n];
    int num_tmp;
    int i;
    
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    i = 3;
    num_tmp = i;
    
    if(n > 2) {
        while (i < n) {
        arr[i] = arr[num_tmp - 1] + arr[num_tmp - 2] + arr[num_tmp - 3];
        num_tmp++;
        i++;
        }
    }
    else {
        i = 0;
        num_tmp = 0;
        while (i < n) {
            num_tmp++;
            i++;
        }
    }
    return arr[num_tmp - 1];
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}