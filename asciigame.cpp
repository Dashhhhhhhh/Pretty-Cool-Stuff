#include <iostream>
using namespace std;
#include <string>

void empty(){
    cout << "|    |" << endl;
    cout << "|    |" << endl;
    cout << "|____|" << endl;
}

void half2(){
    cout << "|    |" << endl;
    cout << "|████|" << endl;
    cout << "|████|" << endl;
}
void half1(){
    cout << "|    |" << endl;
    cout << "|    |" << endl;
    cout << "|████|" << endl;
}


void full(){
    cout << "|████|" << endl;
    cout << "|████|" << endl;
    cout << "|████|" << endl;
}
// this part is what fuck up
// later me u can patch up
int fullness(){
    if(water = 1){
        empty();
    }else if(water = 2){
        half1();
    }else if(water = 3){
        half2();
    }else if(water = 4){
        full();
    }

}

bool game = true;
int water = 1;
string play;
int main(){
  
    
    cout << "press 2 to fill 1 to empty the glass, press 2 to start." << endl;
    
    while(game = true){
        if(play.compare("2") == 0){
        water++;
    } else if(play.compare("1") == 0){
        water--;
        }
    }

    
    return 0;   
}


