#include <stdio.h>
int main(){
    float heightMaria = 1.50;
    float heightJose = 1.10;
    int countAge = 0; 

    while(heightJose < heightMaria){
        // heightMaria = heightMaria + 0.02;
        heightMaria += 0.02;
        // heightJose = heightJose + 0.03; 
        heightJose += 0.03; 

        countAge ++;
    }

    printf("\n altura da maria %.2f", heightMaria);
    printf("\n altura do jose %.2f", heightJose);
    printf("\n forao nessecario %d anos para que jose se torna maior que maria.", countAge);

    return 0;
}