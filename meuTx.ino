#include <XBee.h>

XBee xbee = XBee();
uint8_t payload=4;

XBeeAddress64 addr64 = XBeeAddress64(0x0013a200, 0x408a30a2);
ZBTxRequest zbTx = ZBTxRequest(addr64, &payload , sizeof(payload)) ;
ZBTxStatusResponse txStatus = ZBTxStatusResponse();

void setup() {

  Serial.begin(9600);
  xbee.setSerial(Serial);
}

void loop(){
  xbee.send(zbTx);
  delay(5000);
  
}
