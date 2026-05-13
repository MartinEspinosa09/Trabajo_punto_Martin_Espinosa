#include <stdio.h>

int main() {
    int vec[5]={2,4,6,8,10};
    int *ptr;
    ptr = &vec[0];
    
    for(int i=0; i<5; i++){
        printf("%d\n", vec[i]);
        printf("%d\n",*ptr);
    }
    return 0;
}