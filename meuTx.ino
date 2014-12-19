#include <XBee.h>

XBee xbee = XBee();
uint8_t payload[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};

XBeeAddress64 addr64 = XBeeAddress64(0x0013a200, 0x408a30a2);
ZBTxRequest zbTx = ZBTxRequest(addr64, payload , sizeof(payload)) ;
ZBTxStatusResponse txStatus = ZBTxStatusResponse();

void setup() {

  Serial.begin(9600);
  xbee.setSerial(Serial);
}

void loop(){
  xbee.send(zbTx);
  delay(5000);
  
}
