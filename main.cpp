/*
 Nmea2kHeader encoding and decoding testing
 */

#include "mbed.h"
#include "rtos.h"
#include "sailbus.h"
#include "stdio.h"

Serial pc(USBTX,USBRX);
Nmea2kHeader test(); 

int main(void){
  test.set_source(0x00);
  pc.printf("test source is %d",test.get_source());

  return 0;
} // main()
