#include "mbed.h"

Serial pc( USBTX, USBRX );
AnalogOut Aout(D6);
AnalogIn Ain(D0);



int sample = 1000;
int i;

float ADCdata[1000];
float j;

int main(){
    


    for (i = 0; i < sample; i++){
        pc.printf("%1.3f\r\n", Ain);
        wait(0.1);
    }

}