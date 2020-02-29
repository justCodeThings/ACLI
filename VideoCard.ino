#include <VGAX.h>
#define FNT_NANOFONT_HEIGHT 6
#define FNT_NANOFONT_SYMBOLS_COUNT 95

#define IMG_FULLFRAME_WIDTH 6
#define IMG_FULLFRAME_BWIDTH 2
#define IMG_FULLFRAME_HEIGHT 6

#define IMG_BLANKFRAME_WIDTH 6
#define IMG_BLANKFRAME_BWIDTH 2
#define IMG_BLANKFRAME_HEIGHT 6

const unsigned char img_fullFrame_data[IMG_FULLFRAME_HEIGHT][IMG_FULLFRAME_BWIDTH] PROGMEM={
{ 170, 160, }, { 170, 160, }, { 170, 160, }, { 170, 160, }, { 170, 160, }, { 170, 160, }, };

const unsigned char img_blankFrame_data[IMG_BLANKFRAME_HEIGHT][IMG_BLANKFRAME_BWIDTH] PROGMEM={
{   0,   0, }, {   0,   0, }, {   0,   0, }, {   0,   0, }, {   0,   0, }, {   0,   0, }, };

const unsigned char fnt_nanofont_data[FNT_NANOFONT_SYMBOLS_COUNT][1+FNT_NANOFONT_HEIGHT] PROGMEM={
{ 1, 128, 128, 128, 0, 128, 0, }, //glyph '!' code=0
{ 3, 160, 160, 0, 0, 0, 0, }, //glyph '"' code=1
{ 5, 80, 248, 80, 248, 80, 0, },  //glyph '#' code=2
{ 5, 120, 160, 112, 40, 240, 0, },  //glyph '$' code=3
{ 5, 136, 16, 32, 64, 136, 0, },  //glyph '%' code=4
{ 5, 96, 144, 104, 144, 104, 0, },  //glyph '&' code=5
{ 2, 128, 64, 0, 0, 0, 0, },  //glyph ''' code=6
{ 2, 64, 128, 128, 128, 64, 0, }, //glyph '(' code=7
{ 2, 128, 64, 64, 64, 128, 0, },  //glyph ')' code=8
{ 3, 0, 160, 64, 160, 0, 0, },  //glyph '*' code=9
{ 3, 0, 64, 224, 64, 0, 0, }, //glyph '+' code=10
{ 2, 0, 0, 0, 0, 128, 64, },  //glyph ',' code=11
{ 3, 0, 0, 224, 0, 0, 0, }, //glyph '-' code=12
{ 1, 0, 0, 0, 0, 128, 0, }, //glyph '.' code=13
{ 5, 8, 16, 32, 64, 128, 0, },  //glyph '/' code=14
{ 4, 96, 144, 144, 144, 96, 0, }, //glyph '0' code=15
{ 3, 64, 192, 64, 64, 224, 0, },  //glyph '1' code=16
{ 4, 224, 16, 96, 128, 240, 0, }, //glyph '2' code=17
{ 4, 224, 16, 96, 16, 224, 0, },  //glyph '3' code=18
{ 4, 144, 144, 240, 16, 16, 0, }, //glyph '4' code=19
{ 4, 240, 128, 224, 16, 224, 0, },  //glyph '5' code=20
{ 4, 96, 128, 224, 144, 96, 0, }, //glyph '6' code=21
{ 4, 240, 16, 32, 64, 64, 0, }, //glyph '7' code=22
{ 4, 96, 144, 96, 144, 96, 0, },  //glyph '8' code=23
{ 4, 96, 144, 112, 16, 96, 0, },  //glyph '9' code=24
{ 1, 0, 128, 0, 128, 0, 0, }, //glyph ':' code=25
{ 2, 0, 128, 0, 0, 128, 64, },  //glyph ';' code=26
{ 3, 32, 64, 128, 64, 32, 0, }, //glyph '<' code=27
{ 3, 0, 224, 0, 224, 0, 0, }, //glyph '=' code=28
{ 3, 128, 64, 32, 64, 128, 0, },  //glyph '>' code=29
{ 4, 224, 16, 96, 0, 64, 0, },  //glyph '?' code=30
{ 4, 96, 144, 176, 128, 112, 0, },  //glyph '@' code=31
{ 4, 96, 144, 240, 144, 144, 0, },  //glyph 'A' code=32
{ 4, 224, 144, 224, 144, 224, 0, }, //glyph 'B' code=33
{ 4, 112, 128, 128, 128, 112, 0, }, //glyph 'C' code=34
{ 4, 224, 144, 144, 144, 224, 0, }, //glyph 'D' code=35
{ 4, 240, 128, 224, 128, 240, 0, }, //glyph 'E' code=36
{ 4, 240, 128, 224, 128, 128, 0, }, //glyph 'F' code=37
{ 4, 112, 128, 176, 144, 112, 0, }, //glyph 'G' code=38
{ 4, 144, 144, 240, 144, 144, 0, }, //glyph 'H' code=39
{ 3, 224, 64, 64, 64, 224, 0, },  //glyph 'I' code=40
{ 4, 240, 16, 16, 144, 96, 0, },  //glyph 'J' code=41
{ 4, 144, 160, 192, 160, 144, 0, }, //glyph 'K' code=42
{ 4, 128, 128, 128, 128, 240, 0, }, //glyph 'L' code=43
{ 5, 136, 216, 168, 136, 136, 0, }, //glyph 'M' code=44
{ 4, 144, 208, 176, 144, 144, 0, }, //glyph 'N' code=45
{ 4, 96, 144, 144, 144, 96, 0, }, //glyph 'O' code=46
{ 4, 224, 144, 224, 128, 128, 0, }, //glyph 'P' code=47
{ 4, 96, 144, 144, 144, 96, 16, },  //glyph 'Q' code=48
{ 4, 224, 144, 224, 160, 144, 0, }, //glyph 'R' code=49
{ 4, 112, 128, 96, 16, 224, 0, }, //glyph 'S' code=50
{ 3, 224, 64, 64, 64, 64, 0, }, //glyph 'T' code=51
{ 4, 144, 144, 144, 144, 96, 0, },  //glyph 'U' code=52
{ 3, 160, 160, 160, 160, 64, 0, },  //glyph 'V' code=53
{ 5, 136, 168, 168, 168, 80, 0, },  //glyph 'W' code=54
{ 4, 144, 144, 96, 144, 144, 0, },  //glyph 'X' code=55
{ 3, 160, 160, 64, 64, 64, 0, },  //glyph 'Y' code=56
{ 4, 240, 16, 96, 128, 240, 0, }, //glyph 'Z' code=57
{ 2, 192, 128, 128, 128, 192, 0, }, //glyph '[' code=58
{ 5, 128, 64, 32, 16, 8, 0, },  //glyph '\' code=59
{ 2, 192, 64, 64, 64, 192, 0, },  //glyph ']' code=60
{ 5, 32, 80, 136, 0, 0, 0, }, //glyph '^' code=61
{ 4, 0, 0, 0, 0, 240, 0, }, //glyph '_' code=62
{ 2, 128, 64, 0, 0, 0, 0, },  //glyph '`' code=63
{ 3, 0, 224, 32, 224, 224, 0, },  //glyph 'a' code=64
{ 3, 128, 224, 160, 160, 224, 0, }, //glyph 'b' code=65
{ 3, 0, 224, 128, 128, 224, 0, }, //glyph 'c' code=66
{ 3, 32, 224, 160, 160, 224, 0, },  //glyph 'd' code=67
{ 3, 0, 224, 224, 128, 224, 0, }, //glyph 'e' code=68
{ 2, 64, 128, 192, 128, 128, 0, },  //glyph 'f' code=69
{ 3, 0, 224, 160, 224, 32, 224, },  //glyph 'g' code=70
{ 3, 128, 224, 160, 160, 160, 0, }, //glyph 'h' code=71
{ 1, 128, 0, 128, 128, 128, 0, }, //glyph 'i' code=72
{ 2, 0, 192, 64, 64, 64, 128, },  //glyph 'j' code=73
{ 3, 128, 160, 192, 160, 160, 0, }, //glyph 'k' code=74
{ 1, 128, 128, 128, 128, 128, 0, }, //glyph 'l' code=75
{ 5, 0, 248, 168, 168, 168, 0, }, //glyph 'm' code=76
{ 3, 0, 224, 160, 160, 160, 0, }, //glyph 'n' code=77
{ 3, 0, 224, 160, 160, 224, 0, }, //glyph 'o' code=78
{ 3, 0, 224, 160, 160, 224, 128, }, //glyph 'p' code=79
{ 3, 0, 224, 160, 160, 224, 32, },  //glyph 'q' code=80
{ 3, 0, 224, 128, 128, 128, 0, }, //glyph 'r' code=81
{ 2, 0, 192, 128, 64, 192, 0, },  //glyph 's' code=82
{ 3, 64, 224, 64, 64, 64, 0, }, //glyph 't' code=83
{ 3, 0, 160, 160, 160, 224, 0, }, //glyph 'u' code=84
{ 3, 0, 160, 160, 160, 64, 0, },  //glyph 'v' code=85
{ 5, 0, 168, 168, 168, 80, 0, },  //glyph 'w' code=86
{ 3, 0, 160, 64, 160, 160, 0, },  //glyph 'x' code=87
{ 3, 0, 160, 160, 224, 32, 224, },  //glyph 'y' code=88
{ 2, 0, 192, 64, 128, 192, 0, },  //glyph 'z' code=89
{ 3, 96, 64, 192, 64, 96, 0, }, //glyph '{' code=90
{ 1, 128, 128, 128, 128, 128, 0, }, //glyph '|' code=91
{ 3, 192, 64, 96, 64, 192, 0, },  //glyph '}' code=92
{ 3, 96, 192, 0, 0, 0, 0, },  //glyph '~' code=93
};
static const char str33[] PROGMEM="!"; 
static const char str34[] PROGMEM="\""; 
static const char str35[] PROGMEM="#";
static const char str36[] PROGMEM="$";
static const char str37[] PROGMEM="%";
static const char str38[] PROGMEM="&";
static const char str39[] PROGMEM="'";
static const char str40[] PROGMEM="(";
static const char str41[] PROGMEM=")";
static const char str42[] PROGMEM="*";
static const char str43[] PROGMEM="+";
static const char str44[] PROGMEM=",";
static const char str45[] PROGMEM="-";
static const char str46[] PROGMEM=".";
static const char str47[] PROGMEM="/";
static const char str48[] PROGMEM="0";
static const char str49[] PROGMEM="1";
static const char str50[] PROGMEM="2";
static const char str51[] PROGMEM="3";
static const char str52[] PROGMEM="4";
static const char str53[] PROGMEM="5";
static const char str54[] PROGMEM="6";
static const char str55[] PROGMEM="7";
static const char str56[] PROGMEM="8";
static const char str57[] PROGMEM="9";
static const char str58[] PROGMEM=":";
static const char str59[] PROGMEM=";";
static const char str60[] PROGMEM="<";
static const char str61[] PROGMEM="=";
static const char str62[] PROGMEM=">";
static const char str63[] PROGMEM="?";
static const char str64[] PROGMEM="@"; 
static const char str65[] PROGMEM="A"; 
static const char str66[] PROGMEM="B"; 
static const char str67[] PROGMEM="C"; 
static const char str68[] PROGMEM="D"; 
static const char str69[] PROGMEM="E";
static const char str70[] PROGMEM="F";
static const char str71[] PROGMEM="G";
static const char str72[] PROGMEM="H";
static const char str73[] PROGMEM="I";
static const char str74[] PROGMEM="J";
static const char str75[] PROGMEM="K";
static const char str76[] PROGMEM="L";
static const char str77[] PROGMEM="M";
static const char str78[] PROGMEM="N";
static const char str79[] PROGMEM="O";
static const char str80[] PROGMEM="P";
static const char str81[] PROGMEM="Q";
static const char str82[] PROGMEM="R";
static const char str83[] PROGMEM="S";
static const char str84[] PROGMEM="T";
static const char str85[] PROGMEM="U";
static const char str86[] PROGMEM="V";
static const char str87[] PROGMEM="W";
static const char str88[] PROGMEM="X";
static const char str89[] PROGMEM="Y";
static const char str90[] PROGMEM="Z";
static const char str91[] PROGMEM="[";
static const char str92[] PROGMEM="\\"; 
static const char str93[] PROGMEM="]";
static const char str94[] PROGMEM="^";
static const char str95[] PROGMEM="_";
static const char str96[] PROGMEM="`";
static const char str97[] PROGMEM="a";
static const char str98[] PROGMEM="b";
static const char str99[] PROGMEM="c";
static const char str100[] PROGMEM="d";
static const char str101[] PROGMEM="e";
static const char str102[] PROGMEM="f"; 
static const char str103[] PROGMEM="g";
static const char str104[] PROGMEM="h";
static const char str105[] PROGMEM="i";
static const char str106[] PROGMEM="j";
static const char str107[] PROGMEM="k";
static const char str108[] PROGMEM="l";
static const char str109[] PROGMEM="m";
static const char str110[] PROGMEM="n";
static const char str111[] PROGMEM="o";
static const char str112[] PROGMEM="p"; 
static const char str113[] PROGMEM="q";
static const char str114[] PROGMEM="r";
static const char str115[] PROGMEM="s";
static const char str116[] PROGMEM="t";
static const char str117[] PROGMEM="u";
static const char str118[] PROGMEM="v";
static const char str119[] PROGMEM="w";
static const char str120[] PROGMEM="x";
static const char str121[] PROGMEM="y";
static const char str122[] PROGMEM="z"; 
static const char str123[] PROGMEM="{";
static const char str124[] PROGMEM="|";
static const char str125[] PROGMEM="}";
static const char str126[] PROGMEM="~";

VGAX vga;

char boot[] = {'b', 'o', 'o', 't', 'i', 'n', 'g', '.', '.', '.'};
uint8_t x = 10; 
uint8_t y = 0; 
bool clearOnNextReceive = false;
char data;


// ScreenWidth = 105;
// ScreenHeight = 54
// buffSiz = 189 ((105/5) * (54/6))

void setup() {
  Serial.begin(9600);
  Serial.setTimeout(10);
  vga.begin();
  for(uint8_t i = 0; i < 10; i++){
    vgaPrintAscii(boot[i], (i+2)*5, 0, 2);
  }
}
void curs(bool = false);
void loop() {
  if(clearOnNextReceive){
    vga.clear(0);
    clearOnNextReceive = false;
   }
   // Read input from PC
  if(Serial.available() > 0){
    data = Serial.read();
    if(data == 0x01){
      vga.clear(0);
      x = 10;
      y = 0;
    }
    if(data == 0x0d){
      curs(x, y, true);
      progressYFrame();
      curs(x, y, false);
    }
    if(data == 0x08){
      del();
    }
    else{
      curs(x, y, true);
      vgaPrintAscii(data, x, y, 2);
      progressXFrame();
      curs(x, y, false);
    }
  }
}

void vgaPrint(const char* str, byte x, byte y, byte color){
  vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str, x, y, color);
}
void vgaPrintFullFrame(uint8_t x, uint8_t y){
  vga.blitwmask((byte*)img_fullFrame_data, (byte*)img_fullFrame_data, IMG_FULLFRAME_WIDTH, IMG_FULLFRAME_HEIGHT, x, y);
}
void vgaPrintBlankFrame(uint8_t x, uint8_t y){
  vga.blitwmask((byte*)img_blankFrame_data, (byte*)img_blankFrame_data, IMG_BLANKFRAME_WIDTH, IMG_BLANKFRAME_HEIGHT, x, y);
}
void vgaPrintAscii(byte number, byte x, byte y, byte color){
   if ( number == 33) {vgaPrint(str33, x, y, color);}
   if ( number == 34) {vgaPrint(str34, x, y, color);}
   if ( number == 35) {vgaPrint(str35, x, y, color);}
   if ( number == 36) {vgaPrint(str36, x, y, color);}
   if ( number == 37) {vgaPrint(str37, x, y, color);}
   if ( number == 38) {vgaPrint(str38, x, y, color);}
   if ( number == 39) {vgaPrint(str39, x, y, color);}
   if ( number == 40) {vgaPrint(str40, x, y, color);}
   if ( number == 41) {vgaPrint(str41, x, y, color);}
   if ( number == 42) {vgaPrint(str42, x, y, color);}
   if ( number == 43) {vgaPrint(str43, x, y, color);}
   if ( number == 44) {vgaPrint(str44, x, y, color);}
   if ( number == 45) {vgaPrint(str45, x, y, color);}
   if ( number == 46) {vgaPrint(str46, x, y, color);}
   if ( number == 47) {vgaPrint(str47, x, y, color);}
   if ( number == 48) {vgaPrint(str48, x, y, color);}
   if ( number == 49) {vgaPrint(str49, x, y, color);}
   if ( number == 50) {vgaPrint(str50, x, y, color);}
   if ( number == 51) {vgaPrint(str51, x, y, color);}
   if ( number == 52) {vgaPrint(str52, x, y, color);}
   if ( number == 53) {vgaPrint(str53, x, y, color);}
   if ( number == 54) {vgaPrint(str54, x, y, color);}
   if ( number == 55) {vgaPrint(str55, x, y, color);}
   if ( number == 56) {vgaPrint(str56, x, y, color);}
   if ( number == 57) {vgaPrint(str57, x, y, color);}
   if ( number == 58) {vgaPrint(str58, x, y, color);}
   if ( number == 59) {vgaPrint(str59, x, y, color);}
   if ( number == 60) {vgaPrint(str60, x, y, color);}
   if ( number == 61) {vgaPrint(str61, x, y, color);}
   if ( number == 62) {vgaPrint(str62, x, y, color);}
   if ( number == 63) {vgaPrint(str63, x, y, color);}
   if ( number == 64) {vgaPrint(str64, x, y, color);}
   if ( number == 65) {vgaPrint(str65, x, y, color);}
   if ( number == 66) {vgaPrint(str66, x, y, color);}
   if ( number == 67) {vgaPrint(str67, x, y, color);}
   if ( number == 68) {vgaPrint(str68, x, y, color);}
   if ( number == 69) {vgaPrint(str69, x, y, color);}
   if ( number == 70) {vgaPrint(str70, x, y, color);}
   if ( number == 71) {vgaPrint(str71, x, y, color);}
   if ( number == 72) {vgaPrint(str72, x, y, color);}
   if ( number == 73) {vgaPrint(str73, x, y, color);}
   if ( number == 74) {vgaPrint(str74, x, y, color);}
   if ( number == 75) {vgaPrint(str75, x, y, color);}
   if ( number == 76) {vgaPrint(str76, x, y, color);}
   if ( number == 77) {vgaPrint(str77, x, y, color);}
   if ( number == 78) {vgaPrint(str78, x, y, color);}
   if ( number == 79) {vgaPrint(str79, x, y, color);}
   if ( number == 80) {vgaPrint(str80, x, y, color);}
   if ( number == 81) {vgaPrint(str81, x, y, color);}
   if ( number == 82) {vgaPrint(str82, x, y, color);}
   if ( number == 83) {vgaPrint(str83, x, y, color);}
   if ( number == 84) {vgaPrint(str84, x, y, color);}
   if ( number == 85) {vgaPrint(str85, x, y, color);}
   if ( number == 86) {vgaPrint(str86, x, y, color);}
   if ( number == 87) {vgaPrint(str87, x, y, color);}
   if ( number == 88) {vgaPrint(str88, x, y, color);}
   if ( number == 89) {vgaPrint(str89, x, y, color);}
   if ( number == 90) {vgaPrint(str90, x, y, color);}
   if ( number == 91) {vgaPrint(str91, x, y, color);}
   if ( number == 92) {vgaPrint(str92, x, y, color);}
   if ( number == 93) {vgaPrint(str93, x, y, color);}
   if ( number == 94) {vgaPrint(str94, x, y, color);}
   if ( number == 95) {vgaPrint(str95, x, y, color);}
   if ( number == 96) {vgaPrint(str96, x, y, color);}
   if ( number == 97) {vgaPrint(str97, x, y, color);}
   if ( number == 98) {vgaPrint(str98, x, y, color);}
   if ( number == 99) {vgaPrint(str99, x, y, color);}
   if ( number == 100) {vgaPrint(str100, x, y, color);}
   if ( number == 101) {vgaPrint(str101, x, y, color);}
   if ( number == 102) {vgaPrint(str102, x, y, color);}
   if ( number == 103) {vgaPrint(str103, x, y, color);}
   if ( number == 104) {vgaPrint(str104, x, y, color);}
   if ( number == 105) {vgaPrint(str105, x, y, color);}
   if ( number == 106) {vgaPrint(str106, x, y, color);}
   if ( number == 107) {vgaPrint(str107, x, y, color);}
   if ( number == 108) {vgaPrint(str108, x, y, color);}
   if ( number == 109) {vgaPrint(str109, x, y, color);}
   if ( number == 110) {vgaPrint(str110, x, y, color);}
   if ( number == 111) {vgaPrint(str111, x, y, color);}
   if ( number == 112) {vgaPrint(str112, x, y, color);}
   if ( number == 113) {vgaPrint(str113, x, y, color);}
   if ( number == 114) {vgaPrint(str114, x, y, color);}
   if ( number == 115) {vgaPrint(str115, x, y, color);}
   if ( number == 116) {vgaPrint(str116, x, y, color);}
   if ( number == 117) {vgaPrint(str117, x, y, color);}
   if ( number == 118) {vgaPrint(str118, x, y, color);}
   if ( number == 119) {vgaPrint(str119, x, y, color);}
   if ( number == 120) {vgaPrint(str120, x, y, color);}
   if ( number == 121) {vgaPrint(str121, x, y, color);}
   if ( number == 122) {vgaPrint(str122, x, y, color);}
   if ( number == 123) {vgaPrint(str123, x, y, color);}
   if ( number == 124) {vgaPrint(str124, x, y, color);}
   if ( number == 125) {vgaPrint(str125, x, y, color);}
   if ( number == 126) {vgaPrint(str126, x, y, color);}
}

void del(){
  curs(x, y, true);
  x -= 10;
  if(x < 10){ 
    x = 100; 
    y -= 6; 
  }
  if(y == 0){
    x = 10;
    y = 0;
  }
  curs(x, y, true);
  curs(x, y, false);
}
void progressXFrame(){
  x += 5;
  if(x > 105){ 
    x =10; 
    y += 6; 
  }
  if(y > 54){
    x = 10;
    y = 0;
    clearOnNextReceive=true;
  }
}
void progressYFrame(){
  y+=6;
  x = 10;
  if(y > 54){
    x = 10;
    y = 0;
    clearOnNextReceive=true;
  }
}
void curs(uint8_t x, uint8_t y, bool clearCurs){
  if(!clearCurs){
    vgaPrintFullFrame(x, y);
  }
  if(clearCurs){
    vgaPrintBlankFrame(x, y);
  }
}
