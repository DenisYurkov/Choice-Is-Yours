/* 
* Choice Is Yours.
* Programowanie gier Gr1.
* Denis Yurkov. 
*/

using namespace std;
#include <iostream>
#include <chrono>
#include <fstream>
#include <string>


#include "userName.h"
#include "workingWithFiles.h"

bool endGame = false;
double points;
float goodChoise = 5;
float badChoise = 3;
int answers;
// "Click enter to continue...";
string doctor = "Robert";

int main()
{
    // https://centrsna.by/articles/testy/shkala-depressii-beka/ Тест для игры.
    // Игра будет об одном дне который решит все, сначало мы проходим небольшой тест с доктором.
    // Потом доктор говорит что мы узнаем результаты теста к концу дня, и мы напровляемся на улицу.
    
    // points = 3 пункта для плохого выбора, 5 пунктов для хорошего выбора.
    // В конце игра делать проверку на дурака, а именно чтобы пользователь не мог вписать то что-то захочет!
    // И конечно, когда игра будет готова оптимизировать код, и проверить выполнил ли я все условия которые были на moodle.
    auto startTime = chrono::high_resolution_clock::now();
   
    // Title Game.
    readFile("titleGame.txt");
    readFile("startText.txt");
   
    askName();
    saveFile("userName.txt", userName);
   
    
    cout << "\nDoctor: ";
    cout << "Hello " + userName;
    readFile("startText2.txt");
    cout << "\n";

    cout << userName + ": I will ask you a counter question, what is your name?";
    cout << "\nDoctor: " << "My name is " << doctor + "!\n";
    cout << doctor + ": " << "Now let's move on to the questions!\n";
   
    
    cout << doctor + ": ";
    readFile("questionAndAnswer1.txt");
    cout <<  userName + ": " << "You joking!\n";

    cout << "\n" << doctor + ": " + "No, I'm serious.\n";
    
    cout << doctor + ": ";
    readFile("questionAndAnswer1.txt");
    cout << userName + ": ";
    cin >> answers;
    
    switch (answers)
    {
        case 1:
            points += badChoise;
            cout << doctor + ": " + "Understandably...";
            cout << "The consequences of the choice are possible!\n";
            break;
        case 2:
            points += goodChoise;
            cout << doctor + ": " + "Excellent choice!";
            cout << "Your choice changes the direction of the story!\n";
            break;
        default:
            break;
    }

    cout << userName + ": " + "What stupid questions?\n";
    cout << doctor + ": " + "This is not stupid questions.\n";
    cout << doctor + ": " + "I will try to help you.\n";
    cout << userName + ": " + "For what?\n";

    cout << "In response, silence...\n";
    cout << doctor + ": " + "Let's move on to the next question.\n";

    /*switch (answers)
    {
        case 1:
            points += badChoise;
            cout << doctor + ": " + "Understandably...";
            cout << "The consequences of the choice are possible!\n";
            break;
        case 2:
            points += goodChoise;
            cout << doctor + ": " + "Excellent choice!";
            cout << "Your choice changes the direction of the story!\n";
            break;
        default:
            break;
    }*/




  
        
    endGame = true;
    auto finishTime = chrono::high_resolution_clock::now();
    if (endGame)
    {
        chrono::duration<double> elapsedTime = finishTime - startTime;
        cout << "\nYou playing in game: " << elapsedTime.count()  << " minut!\n";
    }
    return 0;
}

