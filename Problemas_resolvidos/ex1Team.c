#include <stdio.h>



int main(){
    int n;
    int count = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int p, v, t;
        
        scanf("%d %d %d", &p, &v, &t);

        if(p + v + t >= 2){
         count++;   
        }
    }

    printf("%d\n", count);


    return 0;
}