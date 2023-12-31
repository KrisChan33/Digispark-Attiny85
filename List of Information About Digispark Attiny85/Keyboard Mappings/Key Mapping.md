# Keyboard mapping

Please find below the basic key mappings for a standard QWERTY keyboard layout. These mappings can be used to create a custom USB keyboard using Digispark ATtiny85:

## Keys
 
#include "DigiKeyboard.h"
// Key definitions

#define KEY_NONE        0x00

#define KEY_A           0x04

#define KEY_B           0x05

#define KEY_C           0x06

#define KEY_D           0x07

#define KEY_E           0x08

#define KEY_F           0x09

#define KEY_G           0x0A

#define KEY_H           0x0B

#define KEY_I           0x0C

#define KEY_J           0x0D

#define KEY_K           0x0E

#define KEY_L           0x0F

#define KEY_M           0x10

#define KEY_N           0x11

#define KEY_O           0x12

#define KEY_P           0x13

#define KEY_Q           0x14

#define KEY_R           0x15

#define KEY_S           0x16

#define KEY_T           0x17

#define KEY_U           0x18

#define KEY_V           0x19

#define KEY_W           0x1A

#define KEY_X           0x1B

#define KEY_Y           0x1C

#define KEY_Z           0x1D

#define KEY_1           0x1E

#define KEY_2           0x1F

#define KEY_3           0x20

#define KEY_4           0x21

#define KEY_5           0x22

#define KEY_6           0x23

#define KEY_7           0x24

#define KEY_8           0x25

#define KEY_9           0x26

#define KEY_0           0x27

#define KEY_ENTER       0x28

#define KEY_ESC         0x29

#define KEY_BACKSPACE   0x2A

#define KEY_TAB         0x2B

#define KEY_SPACE       0x2C

#define KEY_MINUS       0x2D

#define KEY_EQUAL       0x2E

#define KEY_LEFTBRACE   0x2F

#define KEY_RIGHTBRACE  0x30

#define KEY_BACKSLASH   0x31

#define KEY_HASHTILDE   0x32

#define KEY_SEMICOLON   0x33

#define KEY_APOSTROPHE  0x34

#define KEY_GRAVE       0x35

#define KEY_COMMA       0x36

#define KEY_DOT         0x37

#define KEY_SLASH       0x38

#define KEY_CAPSLOCK    0x39

#define KEY_F1          0x3A

#define KEY_F2          0x3B

#define KEY_F3          0x3C

#define KEY_F4          0x3D

#define KEY_F5          0x3E

#define KEY_F6          0x3F

#define KEY_F7          0x40

#define KEY_F8          0x41

#define KEY_F9          0x42

#define KEY_F10         0x43

#define KEY_F11         0x44

#define KEY_F12         0x45

#define KEY_SYSRQ       0x46

#define KEY_SCROLLLOCK  0x47

#define KEY_PAUSE       0x48

#define KEY_INSERT      0x49

#define KEY_HOME        0x4A

#define KEY_PAGEUP      0x4B

#define KEY_DELETE      0x4C

#define KEY_END         0x4D

#define KEY_PAGEDOWN    0x4E

#define KEY_RIGHT       0x4F

#define KEY_LEFT        0x50

#define KEY_DOWN        0x51

#define KEY_UP          0x52

#define KEY_NUMLOCK     0x53

#define KEY_KPSLASH     0x54

#define KEY_KPASTERISK  0x55

#define KEY_KPMINUS     0x56

#define KEY_KPPLUS      0x57

#define KEY_KPENTER     0x58

#define KEY_KP1         0x59

#define KEY_KP2         0x5A

#define KEY_KP3         0x5B

#define KEY_KP4         0x5C

#define KEY_KP5         0x5D

#define KEY_KP6         0x5E

#define KEY_KP7         0x5F

#define KEY_KP8         0x60

#define KEY_KP9         0x61

#define KEY_KP0         0x62

#define KEY_KPDOT       0x63

#define KEY_102ND       0x64

#define KEY_COMPOSE     0x65

#define KEY_POWER       0x66

#define KEY_KPEQUAL     0x67


#define KEY_F13         0x68

#define KEY_F14         0x69

#define KEY_F15         0x6A

#define KEY_F16         0x6B

#define KEY_F17         0x6C

#define KEY_F18         0x6D

#define KEY_F19         0x6E

#define KEY_F20         0x6F

#define KEY_F21         0x70

#define KEY_F22         0x71

#define KEY_F23         0x72

#define KEY_F24         0x73

#define KEY_OPEN        0x74

#define KEY_HELP        0x75

#define KEY_PROPS       0x76

#define KEY_FRONT       0x77

#define KEY_STOP        0x78

#define KEY_AGAIN       0x79

#define KEY_UNDO        0x7A

#define KEY_CUT         0x7B

#define KEY_COPY        0x7C

#define KEY_PASTE       0x7D

#define KEY_FIND        0x7E

#define KEY_MUTE        0x7F

#define KEY_VOLUMEUP    0x80

#define KEY_VOLUMEDOWN  0x81

#define KEY_LOCKINGCAPS 0x82

#define KEY_LOCKINGNUM  0x83

#define KEY_LOCKINGSCROLL 0x84

#define KEY_KP_COMMA    0x85

#define KEY_KP_EQUAL_AS400 0x86

#define KEY_INTL1       0x87


#define KEY_INTL2       0x88

#define KEY_INTL3       0x89

#define KEY_INTL4       0x8A

#define KEY_INTL5       0x8B

#define KEY_INTL6       0x8C

#define KEY_INTL7       0x8D

#define KEY_INTL8       0x8E

#define KEY_INTL9       0x8F

#define KEY_LANG1       0x90

#define KEY_LANG2       0x91

#define KEY_LANG3       0x92

#define KEY_LANG4       0x93

#define KEY_LANG5       0x94

#define KEY_LANG6       0x95

#define KEY



## Define an array to store keycodes of the keys you want to press
uint8_t keys[] = {
  KEY_H, KEY_E, KEY_L, KEY_L, KEY_O, KEY_SPACE, KEY_W, KEY_O, KEY_R, KEY_L, KEY_D
};

##commands Keys used

void setup() {
  // Initialize the DigiKeyboard library
  DigiKeyboard.begin();
}

void loop() {
  // Loop through the keycodes array and type each key
  for (int i = 0; i < sizeof(keys); i++) {
    DigiKeyboard.sendKeyStroke(keys[i]);
    delay(100);
  }
  // Wait for a few seconds before looping again
  delay(5000);
}

