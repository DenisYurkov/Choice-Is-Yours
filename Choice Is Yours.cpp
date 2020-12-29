/* 
* Choice Is Yours.
* Programowanie gier Gr1.
* Denis Yurkov. 
*/

using namespace std;
#include <iostream>
#include <chrono>
#include <fstream>

#include "userName.h"
#include "workingWithFiles.h"

bool endGame = false;
int main()
{
    auto startTime = chrono::high_resolution_clock::now();
   
    // Title Game.
    readFile("titleGame.txt");
    askName();
    saveFile("userName.txt",  userName);
    
    cout << "Hi " + userName;
    
        
    endGame = true;
    auto finishTime = chrono::high_resolution_clock::now();
    if (endGame)
    {
        chrono::duration<double> elapsedTime = finishTime - startTime;
        cout << "You playing in game: " << elapsedTime.count()  << " minut!\n";
    }
    return 0;
}

