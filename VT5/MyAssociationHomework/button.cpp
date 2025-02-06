#include "button.h"

char Button::readKeyboard(){
    character = getch();
    return character;
}
