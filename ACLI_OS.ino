//Hello from git repo
/*this is the start of a magic freeMemory() funciton 
 * which returns free SRAM.  I found it on Adafruit.com,
 * Memories of an Arduino.  Idk how it works rn, it just
 * does.
 */
#ifdef __arm__
extern "C" char* sbrk(int incr);
#else
extern char *__brkval;
#endif

int freeMemory(){
  char top;
#ifdef __arm__
  return &top -
reinterpret_cast<char*>(sbrk(0));
#elif defined(CORE_TEENSY) || (ARDUINO > 103 && ARDUINO != 151)
  return __brkval ? &top - __brkval : &top - __malloc_heap_start;
#endif
}
/*end magic freeMemory function*/

const uint8_t MAX_X_FRAMES = 21;
const uint8_t MAX_Y_FRAMES = 9;
const uint8_t buffSize = MAX_X_FRAMES * MAX_Y_FRAMES;
char buff[buffSize];
char lnbuff[200];
uint8_t frame = 0;
char nwln = 0x0d;
char nwlnChar = '>';
char cursChar = 0x16;
char delChar = 0x08;
char clr = 0x01;
char data;
uint32_t count = 0;
uint32_t uptime;

void setup() {
  // Computer Serial
  Serial.begin(9600);
  while(!Serial);
  // Video Card Serial
  Serial1.begin(9600);
  startup();
}
void loop() {
  keyListener();
  updateClock();
}
void startup(){
  char mess1[] = "** ACLI v1.0 **";
  char mess2[]= "free";

  String mem = String(freeMemory());
  char memChar[5];
  mem.toCharArray(memChar, 5);
  
  wtvi(clr);
  for(uint8_t i = 0; i < sizeof(mess1); i++){
    wtvi(mess1[i]);
  }
  wtvi(nwln);
  for(uint8_t j = 0; j < sizeof(memChar); j++){
    wtvi(memChar[j]);
  }
  for(uint8_t k = 0; k < sizeof(mess2); k++){
    wtvi(mess2[k]);
  }
  newLine();
  
}
void newLine(){
  wtvi(nwln);
  wtvi(nwlnChar);
  frame = 0;
}
void clearLnBuff(){
  for(uint8_t i = 0; i < 200; i++){
    lnbuff[i] = 0x00;
  }
}
void keyListener(){
  if(Serial.available() > 0){
    data = Serial.read();
    if(data == delChar){
      del();
    }
    if(data == 0x0d){
      newLine();
    }
    else{
      wtv(data);
    }
  }
}
void wtv(uint8_t b){
  Serial1.write(b);
  lnbuff[frame] = b;
  frame++;
}
void wtvi(uint8_t b){
  Serial1.write(b);
}
void del(){
  if(frame > 0){
    wtvi(delChar);
    frame--;
  }
}
void updateClock(){
  uptime = millis();
}
