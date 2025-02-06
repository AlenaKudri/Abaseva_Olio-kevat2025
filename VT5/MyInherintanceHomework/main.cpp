#include <iostream>
#include "mydeviceui.h"

using namespace std;

int main()
{
    MyDeviceUI myDevUI;

    short choice;
    do{
        myDevUI.uiShowMenu();
        cin>>choice;

        switch(choice){
        case 1:
            myDevUI.uiSetMouseInformation();
            break;
        case 2:
            myDevUI.uiSetTouchPadInformation();
            break;
        case 3:
            myDevUI.uiSetDisplayInformation();
            break;
        case 4:
            myDevUI.uiShowDeviceInformation();
            break;
        case 5:
            cout<<"Finish";
            break;
        default:
            cout<<"Invalid choise. Pleas try again.\n";
        }
    }
    while (choice != 5);

    return 0;
}
