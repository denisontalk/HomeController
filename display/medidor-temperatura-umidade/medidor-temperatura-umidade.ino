// --- DISPLAY ---
#include <Adafruit_SSD1306.h>
#define OLED_RESET LED_BUILTIN


void setup() {
  Adafruit_SSD1306 display(OLED_RESET);
}

void loop() {
  display.clearDisplay();
  display.setTextSize(2);
  display.setCursor(0, 0);
  display.print("TESTE");
  display.display();
}
