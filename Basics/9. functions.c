#include <stdio.h>

void print_big(int x){

    if(x > 10){
        printf("%d is big\n", x);
    }

    else{
        printf("%d is small\n", x);
    }
    
}

int main(){

    print_big(1);
    print_big(11);

    return 0;
}