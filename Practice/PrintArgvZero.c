#include <stdio.h>

int main(int argc, char * argv[]){
    printf("Print: %s",argc > 1 ? argv[1] :  "No Arg!");
}
