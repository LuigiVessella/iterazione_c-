#include<stdio.h>
#define MAX 10
int main(){

int vett[MAX];
void *p_num;
int i;


for(i=0; i<MAX; i++){

    p_num = &vett[i];
    printf("Indirizzo di num[%d]: %p\n", i, p_num);    
}

return 0;
}
