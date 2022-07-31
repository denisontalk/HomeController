

#include <Conceptinetics.h>
#define DMX_SLAVE_CHANNELS   192///////////////NÃO MEXER  
DMX_Slave dmx_slave( DMX_SLAVE_CHANNELS);///////////////NÃO MEXER  
#define rele1 2
#define rele2 3
#define rele3 4


///////LIGAR O PINO DE SAIDA DO SN75176 NO PINO ZERO  DO ARDUINO////////////////
void setup() {     
  pinMode(rele1,OUTPUT);
  pinMode(rele2,OUTPUT);
  pinMode(rele3,OUTPUT);
  dmx_slave.enable ();////////////NÃO MEXER
  dmx_slave.setStartAddress (1);////////NÃO MEXER
  }
void loop()
{
if ( dmx_slave.getChannelValue (1)>=100){
    digitalWrite ( rele1 , LOW );}
   if ( dmx_slave.getChannelValue (1)<=100){
    digitalWrite ( rele1 ,HIGH);}

if ( dmx_slave.getChannelValue (2)>=100){
    digitalWrite ( rele2 , LOW );}
   if ( dmx_slave.getChannelValue (2)<=100){
    digitalWrite ( rele2, HIGH ); }

if ( dmx_slave.getChannelValue (3)>=100){
    digitalWrite ( rele3 , LOW );}
   if ( dmx_slave.getChannelValue (3)<=100){
    digitalWrite ( rele3, HIGH ); }
 }
    


                                   
