#include <conio.h>
#include <iostream>
using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
int main()
{
    int c = 0;
    while(1)
    {
        c = 0;

        switch((c=getch())) {
        case KEY_UP:
            cout << endl << "|‾‾##‾|" << endl;  // not arrow
            cout << endl << "|     |" << endl;  // not arrow
            cout << endl << "|_____|" << endl;  // not arrow
            
            break;
        case KEY_DOWN:
            cout << endl << "|‾‾‾‾‾|" << endl;  // not arrow
            cout << endl << "|     |" << endl;  // not arrow
            cout << endl << "|__##_|" << endl;  // not arrow
            break;
        case KEY_LEFT:
            cout << endl << "|‾‾‾‾‾|" << endl;  // not arrow
            cout << endl << "|##   |" << endl;  // not arrow
            cout << endl << "|_____|" << endl;  // not arrow
            break;
        case KEY_RIGHT:
            cout << endl << "|‾‾‾‾‾|" << endl;  // not arrow
            cout << endl << "|   ##|" << endl;  // not arrow
            cout << endl << "|_____|" << endl;  // not arrow
            break;
        default:
            cout << endl << "|‾‾‾‾‾|" << endl;  // not arrow
            cout << endl << "|  ## |" << endl;  // not arrow
            cout << endl << "|_____|" << endl;  // not arrow
            
            
            
            
            break;
        }

    }

    return 0;
}