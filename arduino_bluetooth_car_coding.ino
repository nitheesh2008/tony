Arduino: 1.8.13 (Windows 7), Board: "Arduino Uno"

C:\Program Files (x86)\Arduino\arduino-builder -dump-prefs -logger=machine -hardware C:\Program Files (x86)\Arduino\hardware -tools C:\Program Files (x86)\Arduino\tools-builder -tools C:\Program Files (x86)\Arduino\hardware\tools\avr -built-in-libraries C:\Program Files (x86)\Arduino\libraries -libraries C:\Users\MY\Documents\Arduino\libraries -fqbn=arduino:avr:uno -ide-version=10813 -build-path C:\Users\MY\AppData\Local\Temp\arduino_build_896870 -warnings=none -build-cache C:\Users\MY\AppData\Local\Temp\arduino_cache_104132 -prefs=build.warn_data_percentage=75 -prefs=runtime.tools.avr-gcc.path=C:\Program Files (x86)\Arduino\hardware\tools\avr -prefs=runtime.tools.avr-gcc-7.3.0-atmel3.6.1-arduino7.path=C:\Program Files (x86)\Arduino\hardware\tools\avr -prefs=runtime.tools.arduinoOTA.path=C:\Program Files (x86)\Arduino\hardware\tools\avr -prefs=runtime.tools.arduinoOTA-1.3.0.path=C:\Program Files (x86)\Arduino\hardware\tools\avr -prefs=runtime.tools.avrdude.path=C:\Program Files (x86)\Arduino\hardware\tools\avr -prefs=runtime.tools.avrdude-6.3.0-arduino17.path=C:\Program Files (x86)\Arduino\hardware\tools\avr -verbose C:\Users\MY\Documents\Arduino\reset1\reset1.ino
C:\Program Files (x86)\Arduino\arduino-builder -compile -logger=machine -hardware C:\Program Files (x86)\Arduino\hardware -tools C:\Program Files (x86)\Arduino\tools-builder -tools C:\Program Files (x86)\Arduino\hardware\tools\avr -built-in-libraries C:\Program Files (x86)\Arduino\libraries -libraries C:\Users\MY\Documents\Arduino\libraries -fqbn=arduino:avr:uno -ide-version=10813 -build-path C:\Users\MY\AppData\Local\Temp\arduino_build_896870 -warnings=none -build-cache C:\Users\MY\AppData\Local\Temp\arduino_cache_104132 -prefs=build.warn_data_percentage=75 -prefs=runtime.tools.avr-gcc.path=C:\Program Files (x86)\Arduino\hardware\tools\avr -prefs=runtime.tools.avr-gcc-7.3.0-atmel3.6.1-arduino7.path=C:\Program Files (x86)\Arduino\hardware\tools\avr -prefs=runtime.tools.arduinoOTA.path=C:\Program Files (x86)\Arduino\hardware\tools\avr -prefs=runtime.tools.arduinoOTA-1.3.0.path=C:\Program Files (x86)\Arduino\hardware\tools\avr -prefs=runtime.tools.avrdude.path=C:\Program Files (x86)\Arduino\hardware\tools\avr -prefs=runtime.tools.avrdude-6.3.0-arduino17.path=C:\Program Files (x86)\Arduino\hardware\tools\avr -verbose C:\Users\MY\Documents\Arduino\reset1\reset1.ino
Using board 'uno' from platform in folder: C:\Program Files (x86)\Arduino\hardware\arduino\avr
Using core 'arduino' from platform in folder: C:\Program Files (x86)\Arduino\hardware\arduino\avr
Detecting libraries used...
"C:\\Program Files (x86)\\Arduino\\hardware\\tools\\avr/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -flto -w -x c++ -E -CC -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10813 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR "-IC:\\Program Files (x86)\\Arduino\\hardware\\arduino\\avr\\cores\\arduino" "-IC:\\Program Files (x86)\\Arduino\\hardware\\arduino\\avr\\variants\\standard" "C:\\Users\\MY\\AppData\\Local\\Temp\\arduino_build_896870\\sketch\\reset1.ino.cpp" -o nul -DARDUINO_LIB_DISCOVERY_PHASE
Generating function prototypes...
"C:\\Program Files (x86)\\Arduino\\hardware\\tools\\avr/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -flto -w -x c++ -E -CC -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10813 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR "-IC:\\Program Files (x86)\\Arduino\\hardware\\arduino\\avr\\cores\\arduino" "-IC:\\Program Files (x86)\\Arduino\\hardware\\arduino\\avr\\variants\\standard" "C:\\Users\\MY\\AppData\\Local\\Temp\\arduino_build_896870\\sketch\\reset1.ino.cpp" -o "C:\\Users\\MY\\AppData\\Local\\Temp\\arduino_build_896870\\preproc\\ctags_target_for_gcc_minus_e.cpp" -DARDUINO_LIB_DISCOVERY_PHASE
"C:\\Program Files (x86)\\Arduino\\tools-builder\\ctags\\5.8-arduino11/ctags" -u --language-force=c++ -f - --c++-kinds=svpf --fields=KSTtzns --line-directives "C:\\Users\\MY\\AppData\\Local\\Temp\\arduino_build_896870\\preproc\\ctags_target_for_gcc_minus_e.cpp"
Compiling sketch...
"C:\\Program Files (x86)\\Arduino\\hardware\\tools\\avr/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10813 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR "-IC:\\Program Files (x86)\\Arduino\\hardware\\arduino\\avr\\cores\\arduino" "-IC:\\Program Files (x86)\\Arduino\\hardware\\arduino\\avr\\variants\\standard" "C:\\Users\\MY\\AppData\\Local\\Temp\\arduino_build_896870\\sketch\\reset1.ino.cpp" -o "C:\\Users\\MY\\AppData\\Local\\Temp\\arduino_build_896870\\sketch\\reset1.ino.cpp.o"
Compiling libraries...
Compiling core...
Using precompiled core: C:\Users\MY\AppData\Local\Temp\arduino_cache_104132\core\core_arduino_avr_uno_0c812875ac70eb4a9b385d8fb077f54c.a
Linking everything together...
"C:\\Program Files (x86)\\Arduino\\hardware\\tools\\avr/bin/avr-gcc" -w -Os -g -flto -fuse-linker-plugin -Wl,--gc-sections -mmcu=atmega328p -o "C:\\Users\\MY\\AppData\\Local\\Temp\\arduino_build_896870/reset1.ino.elf" "C:\\Users\\MY\\AppData\\Local\\Temp\\arduino_build_896870\\sketch\\reset1.ino.cpp.o" "C:\\Users\\MY\\AppData\\Local\\Temp\\arduino_build_896870/..\\arduino_cache_104132\\core\\core_arduino_avr_uno_0c812875ac70eb4a9b385d8fb077f54c.a" "-LC:\\Users\\MY\\AppData\\Local\\Temp\\arduino_build_896870" -lm
"C:\\Program Files (x86)\\Arduino\\hardware\\tools\\avr/bin/avr-objcopy" -O ihex -j .eeprom --set-section-flags=.eeprom=alloc,load --no-change-warnings --change-section-lma .eeprom=0 "C:\\Users\\MY\\AppData\\Local\\Temp\\arduino_build_896870/reset1.ino.elf" "C:\\Users\\MY\\AppData\\Local\\Temp\\arduino_build_896870/reset1.ino.eep"
"C:\\Program Files (x86)\\Arduino\\hardware\\tools\\avr/bin/avr-objcopy" -O ihex -R .eeprom "C:\\Users\\MY\\AppData\\Local\\Temp\\arduino_build_896870/reset1.ino.elf" "C:\\Users\\MY\\AppData\\Local\\Temp\\arduino_build_896870/reset1.ino.hex"
"C:\\Program Files (x86)\\Arduino\\hardware\\tools\\avr/bin/avr-size" -A "C:\\Users\\MY\\AppData\\Local\\Temp\\arduino_build_896870/reset1.ino.elf"
Sketch uses 2166 bytes (6%) of program storage space. Maximum is 32256 bytes.
Global variables use 230 bytes (11%) of dynamic memory, leaving 1818 bytes for local variables. Maximum is 2048 bytes.
avrdude: ser_open(): can't open device "\\.\COM4": The system cannot find the file specified.


Problem uploading to board.  See http://www.arduino.cc/en/Guide/Troubleshooting#upload for suggestions.
Invalid library found in C:\Users\MY\Documents\Arduino\libraries\Servo: no headers files (.h) found in C:\Users\MY\Documents\Arduino\libraries\Servo


}