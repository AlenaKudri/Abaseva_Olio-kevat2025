#include "controller.h"

Controller::Controller(View *parameterView, Button *parameterButton) {
    objectView = parameterView;
    objectButton = parameterButton;
    this->listenMessages();
}
void Controller::listenMessages(){
    char keyPressed='0';
    while (keyPressed!='q'){
        if (kbhit()){
            keyPressed=objectButton->readKeyboard();
            objectView->printCharacter(keyPressed);
        }
    }
}
