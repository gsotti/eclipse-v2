
void sendInt(uint8_t value);

void sendString(String value);

void broadcastInt(String name, uint8_t value);

void broadcastString(String name, String value);

void webSocketEvent(uint8_t num, WStype_t type, uint8_t *payload, size_t length);

void loadSettings();

void setPower(uint8_t value);

void setAutoplay(uint8_t value);

void setAutoplayDuration(uint8_t value);

void setSolidColor(CRGB color);

void setSolidColor(uint8_t r, uint8_t g, uint8_t b);

// increase or decrease the current pattern number, and wrap around at the ends
void adjustPattern(bool up);

void setPattern(uint8_t value);

void setPatternName(String name);

void adjustBrightness(bool up);

void setBrightness(uint8_t value);

void strandTest();

void showSolidColor();

// Patterns from FastLED example DemoReel100: https://github.com/FastLED/FastLED/blob/master/examples/DemoReel100/DemoReel100.ino
void rainbow();

void rainbowWithGlitter();

void rainbowSolid();

void confetti();

void sinelon();

void bpm();

void juggle();

void fire();

void water();

// Pride2015 by Mark Kriegsman: https://gist.github.com/kriegsman/964de772d64c502760e5
// This function draws rainbows with an ever-changing,
// widely-varying set of parameters.
void pride();

void radialPaletteShift();

// based on FastLED example Fire2012WithPalette: https://github.com/FastLED/FastLED/blob/master/examples/Fire2012WithPalette/Fire2012WithPalette.ino
void heatMap(CRGBPalette16 palette, bool up);

void addGlitter( uint8_t chanceOfGlitter);

void colorWaves();

// ColorWavesWithPalettes by Mark Kriegsman: https://gist.github.com/kriegsman/8281905786e8b2632aeb
// This function draws color waves with an ever-changing,
// widely-varying set of parameters, using a color palette.
void colorwaves( CRGB* ledarray, uint16_t numleds, CRGBPalette16& palette);

// Alternate rendering function just scrolls the current palette
// across the defined LED strip.
void palettetest( CRGB* ledarray, uint16_t numleds, const CRGBPalette16& gCurrentPalette);
