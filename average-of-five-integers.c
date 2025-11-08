#include <stdio.h>
#include <math.h>

int main(){
    
    int I1, I2, I3 ,I4, I5;
    float avg;
    
    printf("ENTER THE 5 INTEGERS TO GET AVG: \n");
    scanf("%d %d %d %d %d", &I1, &I2, &I3, &I4, &I5);

    
    avg = (I1 + I2 + I3 + I4 + I5)/5.0;
    printf("AVG = %2f", avg);
    
    return 0;
}