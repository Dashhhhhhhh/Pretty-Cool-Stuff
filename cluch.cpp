#include <iostream>
using namespace std;
#include <string>
string translation;
// i just rlly wanted to upload something to github sorry
int main()
{
    cout << "거대한 공" << endl;
    cout << "Argh... I must Translate." << endl;
    getline(cin, translation);
    if(translation.compare("huge balls") == 0){
        cout << "YOU PASS!" << endl;
        }
    return 0;
} 