
#define kbd_es_es
#include <phukdlib_leonardo.h>

void setup() {
  Keyboard.begin();
}

void loop() {
  delay(5000);
  CommandAtRunBarMSWIN("notepad.exe");
  delay(5000);
  Keyboard.println("                 $$$$");
  delay(2000);
  Keyboard.println("               $$    $$");
  delay(2000);
  Keyboard.println("               $$    $$");
  delay(2000);
  Keyboard.println("               $$    $$");
  delay(2000);
  Keyboard.println("               $$    $$");
  delay(2000);
  Keyboard.println("               $$    $$");
  delay(2000);
  Keyboard.println("           $$$$$$    $$$$$$");
  delay(2000);
  Keyboard.println("         $$    $$    $$    $$$$");
  delay(2000);
  Keyboard.println("         $$    $$    $$    $$  $$");
  delay(2000);
  Keyboard.println(" $$$$$$  $$    $$    $$    $$    $$");
  delay(2000);
  Keyboard.println(" $$    $$$$                $$    $$");
  delay(2000);
  Keyboard.println(" $$      $$                      $$");
  delay(2000);
  Keyboard.println("   $$    $$                      $$");
  delay(2000);
  Keyboard.println("    $$$  $$                      $$");
  delay(2000);
  Keyboard.println("     $$                          $$");
  delay(2000);
  Keyboard.println("      $$$                        $$");
  delay(2000);
  Keyboard.println("       $$                      $$$");
  delay(2000);
  Keyboard.println("        $$$                    $$");
  delay(2000);
  Keyboard.println("         $$                    $$");
  delay(2000);
  Keyboard.println("          $$$                $$$");
  delay(2000);
  Keyboard.println("           $$                $$");
  delay(2000);
  Keyboard.println("           $$$$$$$$$$$$$$$$$$$$");
  delay(2000);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(' ');
  Keyboard.print("x");
  delay(100);
  Keyboard.releaseAll();
  delay(3000);
}
