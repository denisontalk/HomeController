#include <Conceptinetics.h>
#define DMX_SLAVE_CHANNELS   192///////////////NÃO MEXER  
DMX_Slave dmx_slave( DMX_SLAVE_CHANNELS);///////////////NÃO MEXER  
#define soltafumaca 7 ////////////LIGAR RELE NO PINO 7 DO ARDUINO,PODE ESCOLHER OUTRO PINO
///////LIGAR O PINO DE SAIDA DO SN75176 NO PINO ZERO  DO ARDUINO////////////////
void setup() {     
  pinMode(soltafumaca,OUTPUT);      
  dmx_slave.enable ();////////////NÃO MEXER  
  dmx_slave.setStartAddress (1);////////NÃO MEXER
  }
void loop()
{
  /////////////FADE DE Nº1,SCANNER DE N°1 MAS
  //////PODE USAR QUALQUE OUTRO CANAL BASTA MODIFICAR O NUMERO
  ///////QUE ESTA DENTRO DO PARÊNTESES COMO NESSE EXEMPLO(1)
  ///////////ESCOLHA UM DESSES >=,<=,<,> E DEPOIS
  //////DEFINA O VALOR DO FADE COMO NESSE EXEMPLO >=100
 
  if ( dmx_slave.getChannelValue (1)>=100){
    digitalWrite ( soltafumaca , HIGH );}//////////////LIGA RELE E SOLTA FUMAÇA
  else{
    digitalWrite ( soltafumaca ,LOW );}}///////////////DESLIGA O RELE,CASO O VALOR FOR/////
                                        ///////MAIOR OU MENOR DO VALO QUE FOI DEFINIDO/////
