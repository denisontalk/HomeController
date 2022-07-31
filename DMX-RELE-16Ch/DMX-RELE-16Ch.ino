#include <Conceptinetics.h>
#define DMX_SLAVE_CHANNELS   192///////////////NÃO MEXER  
DMX_Slave dmx_slave( DMX_SLAVE_CHANNELS);///////////////NÃO MEXER  
#define rele1 7////////////LIGAR RELE NO PINO 7 DO ARDUINO,PODE ESCOLHER OUTRO PINO
#define rele2 32
#define rele3 33
#define rele4 34
#define rele5 35
#define rele6 36
#define rele7 37
#define rele8 38
#define rele9 39
#define rele10 40
#define rele11 41
#define rele12 42
#define rele13 43
#define rele14 44
#define rele15 45
#define rele16 46

///////LIGAR O PINO DE SAIDA DO SN75176 NO PINO ZERO  DO ARDUINO////////////////
void setup() {     
  pinMode(rele1,OUTPUT);
  pinMode(rele2,OUTPUT);
  pinMode(rele3,OUTPUT);
  pinMode(rele4,OUTPUT);
  pinMode(rele5,OUTPUT);
  pinMode(rele6,OUTPUT);
  pinMode(rele7,OUTPUT);
  pinMode(rele8,OUTPUT);
  pinMode(rele9,OUTPUT);
  pinMode(rele10,OUTPUT);
  pinMode(rele11,OUTPUT);
  pinMode(rele12,OUTPUT);
  pinMode(rele13,OUTPUT);
  pinMode(rele14,OUTPUT);
  pinMode(rele15,OUTPUT);
  pinMode(rele16,OUTPUT);
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
    digitalWrite ( rele3, HIGH );}

if ( dmx_slave.getChannelValue (4)>=100){
    digitalWrite ( rele4 , LOW );}
   if ( dmx_slave.getChannelValue (4)<=100){
    digitalWrite ( rele4, HIGH );}

if ( dmx_slave.getChannelValue (5)>=100){
    digitalWrite ( rele5 , LOW );}
   if ( dmx_slave.getChannelValue (5)<=100){
    digitalWrite ( rele5, HIGH );}
    
if ( dmx_slave.getChannelValue (6)>=100){
    digitalWrite ( rele6 , LOW );}
   if ( dmx_slave.getChannelValue (6)<=100){
    digitalWrite ( rele6, HIGH );}

if ( dmx_slave.getChannelValue (7)>=100){
    digitalWrite ( rele7 , LOW );}
   if ( dmx_slave.getChannelValue (7)<=100){
    digitalWrite ( rele7, HIGH );}  

if ( dmx_slave.getChannelValue (8)>=100){
    digitalWrite ( rele8 , LOW );}
   if ( dmx_slave.getChannelValue (8)<=100){
    digitalWrite ( rele8, HIGH );}  

if ( dmx_slave.getChannelValue (9)>=100){
    digitalWrite ( rele9 , LOW );}
   if ( dmx_slave.getChannelValue (9)<=100){
    digitalWrite ( rele9, HIGH );}  

if ( dmx_slave.getChannelValue (10)>=100){
    digitalWrite ( rele10 , LOW );}
   if ( dmx_slave.getChannelValue (10)<=100){
    digitalWrite ( rele10, HIGH );}   

if ( dmx_slave.getChannelValue (11)>=100){
    digitalWrite ( rele11 , LOW );}
   if ( dmx_slave.getChannelValue (11)<=100){
    digitalWrite ( rele11, HIGH );}   

if ( dmx_slave.getChannelValue (12)>=100){
    digitalWrite ( rele12, LOW );}
   if ( dmx_slave.getChannelValue (12)<=100){
    digitalWrite ( rele12, HIGH );}

if ( dmx_slave.getChannelValue (13)>=100){
    digitalWrite ( rele13, LOW );}
   if ( dmx_slave.getChannelValue (13)<=100){
    digitalWrite ( rele13, HIGH );}   

if ( dmx_slave.getChannelValue (14)>=100){
    digitalWrite ( rele14, LOW );}
   if ( dmx_slave.getChannelValue (14)<=100){
    digitalWrite ( rele14, HIGH );}   

if ( dmx_slave.getChannelValue (15)>=100){
    digitalWrite ( rele15, LOW );}
   if ( dmx_slave.getChannelValue (15)<=100){
    digitalWrite ( rele15, HIGH );}  

if ( dmx_slave.getChannelValue (16)>=100){
    digitalWrite ( rele16, LOW );}
   if ( dmx_slave.getChannelValue (16)<=100){
    digitalWrite ( rele16, HIGH );}        
}
  

                                   
