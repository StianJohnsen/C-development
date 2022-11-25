#include <stdio.h>
#include <stdbool.h>

int main(){
bool isTrue;
int i = 1;

while (i <= 10){

    if (i < 6){
        isTrue = true;
    }
    else{
        isTrue = false;
    }
if (isTrue == 1){
    printf("True\n");

}
else{
    printf("False\n");
}
i++;
}

}