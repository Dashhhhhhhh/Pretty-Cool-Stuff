#include <iostream>
using namespace std;
#include <string>
bool go = true;
int react = 1000;
int random;
int timer;
string line;
// pls let this work

int main()
{

    random = rand() % 10;
    
    cout << "Press Enter when it says GO" << endl; 
    
    
    while (go = true){
       // cout << "heyi" << endl; 
        if(react >= 0){
            // cout << react << endl;
            react = react - random;
            if(react == 0){
                break;
            }
        } else if(react == 0){
            cout << "GO" << endl; 
            getline(cin, line);
            if(line.compare("\n") == 0){
                go = false;
                int react = 1000;
                cout << timer << endl;


            timer++;
            }
        }
    }

} 