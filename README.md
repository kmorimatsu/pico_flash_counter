# pico_flash_counter
Counter using flash area for Respberry Pi Pico

## Feature
This counter can count integer value from 0 to 32767.  
This uses a flash area of 4096. Even if the power is down, the counter remember the revious value.  
According to manual of Rasberry Pi Pico, the flash area can be erased more than 100K times. This program erases the flash area only when the counter reaches 32768. Therefore, it can count up 3.3G times. If it increments every second, the device can count for more than 100 years.

## How to use
Include flash_counter.c in your project.  
Also "#include" flash_counter.h in your C file.  
Edit flash_counter.h for specifying the flash area used, if required.  

## Functions
Following functions can be used. These are used for reading, resetting, and incrementing counter, respectively,
int read_flash_counter();  
void reset_flash_counter();  
void increment_flash_counter();  

## License
The license of flash_counter.c is LGPL v2.1.