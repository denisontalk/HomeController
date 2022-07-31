#include <Conceptinetics.h>
#define DMX_SLAVE_CHANNELS   192///////////////NÃO MEXER  
DMX_Slave dmx_slave( DMX_SLAVE_CHANNELS);///////////////NÃO MEXER  
#define rele1 7////////////LIGAR RELE NO PINO 7 DO ARDUINO,PODE ESCOLHER OUTRO PINO


///////LIGAR O PINO DE SAIDA DO SN75176 NO PINO ZERO  DO ARDUINO////////////////
void setup() {     
  pinMode(rele1,OUTPUT);
////////NÃO MEXER  
  dmx_slave.setStartAddress (1);////////NÃO MEXER
  }
void loop()
{
if ( dmx_slave.getChannelValue (1)>=100){
    digitalWrite ( rele1 , LOW );}
   else {
    digitalWrite ( rele1 ,HIGH);}}
    


                                   
