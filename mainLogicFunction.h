#pragma once

using namespace std;
#include <iostream>
#include <fstream>
#include <string>

#include "userName.h"
#include "workingWithFiles.h"
#include "allVariables.h"
#include "statistics.h"
#include "allQuestions.h"
#include "endings.h"


void mainLogic()
{
    do
    {
        // Title Game.
        readFile("titleGame.txt");
        cout << "Your decisions have an impact on the event, and choose wisely";

        // Emoji.
        for (int i = 0; i <= 3; i++) {
            for (int j = 0; j < 3; j++)
            {
                cout << emoji[i][j];
            }
        }
        cout << "\n";
        system("PAUSE");
        system("cls");

        readFile("startText.txt");
        system("PAUSE");
        system("cls");

        readFile("Day1UI.txt");
        askName();
        saveFile("userName.txt", userName);

        statistics();
        system("PAUSE");
        system("cls");

        cout << "\nDoctor: ";
        cout << "Hello " + userName;
        readFile("startText2.txt");
        system("PAUSE");
        system("cls");

        cout << "\n" + userName + ": I will ask you a counter question, what is your name?\n";
        system("PAUSE");
        system("cls");
        cout << "\nDoctor: " << "My name is " << doctor + "!\n";

        cout << "\n" << doctor + ": " << "Now let's move on to the questions!\n";
        cout << doctor + ": " << "And remember, answer the most truthfully...\n";
        system("PAUSE");
        system("cls");

        cout << "\n" + doctor + ": ";
        readFile("questionAndAnswer1.txt");
        cout << userName + ": " << "You joking!\n";

        cout << "\n" << doctor + ": " + "No, I'm serious.\n";
        system("PAUSE");
        system("cls");
        notInmportantQuestion1("questionAndAnswer1.txt");

        system("PAUSE");
        system("cls");

        cout << userName + ": " + "What stupid questions?\n";
        cout << doctor + ": " + "This is not stupid questions.\n";
        system("PAUSE");
        cout << doctor + ": " + "I will try to help you" << endl;

        cout << userName + ": " + "For what?\n";
        system("PAUSE");
        cout << "\n" + doctor + ": " "In response, silence...\n";
        cout << doctor + ": " + "Let's move on to the next question.\n";

        system("PAUSE");
        system("cls");

        importantQuestion("questionAndAnswer2.txt");
        cout << doctor + ": " + "Let's move on to the next question.\n";
        system("PAUSE");
        system("cls");

        importantQuestion("questionAndAnswer3.txt");
        cout << doctor + ": " + "Let's move on to the next question.\n";
        system("PAUSE");
        system("cls");

        importantQuestion("questionAndAnswer4.txt");
        cout << doctor + ": " + "Let's move on to the next question.\n";
        system("PAUSE");
        system("cls");

        importantQuestion("questionAndAnswer5.txt");
        cout << doctor + ": " + "Let's move on to the next question.\n";
        system("PAUSE");
        system("cls");

        importantQuestion("questionAndAnswer6.txt");
        cout << doctor + ": " + "Let's move on to the next question.\n";
        system("PAUSE");
        system("cls");

        importantQuestion("questionAndAnswer7.txt");
        cout << doctor + ": " + "Let's move on to the next question.\n";
        system("PAUSE");
        system("cls");
        importantQuestion("questionAndAnswer8.txt");
        cout << doctor + ": " + "Let's move on to the next question.\n";
        system("PAUSE");
        system("cls");

        cout << userName + ": " + "Enough, I'm tired when this is over.\n";
        cout << doctor + ": " + "Okay, I 've already written all down.\n";
        cout << doctor + ": " + "You shouldn't be rude!";
        cout << "\n" + userName + ": ";
        notInmportantQuestion2("NotImportantQuestion1.txt");

        cout << doctor + ": " + "See you tomorrow!\n";
        system("PAUSE");
        system("cls");
       
        readFile("History1.txt");
        notInmportantQuestion3("NotImportantQuestion2.txt");
        system("PAUSE");
        system("cls");

        readFile("Day2UI.txt");
        statistics();
        
        cout << userName + ": And again to the doctor.\n";
        system("PAUSE");
        system("cls");

        importantQuestion("questionAndAnswer9.txt");
        cout << doctor + ": " + "Let's move on to the next question.\n";
        system("PAUSE");
        system("cls");

        importantQuestion("questionAndAnswer10.txt");
        cout << doctor + ": " + "Let's move on to the next question.\n";
        system("PAUSE");
        system("cls");


        importantQuestion("questionAndAnswer11.txt");
        cout << doctor + ": " + "Let's move on to the next question.\n";
        system("PAUSE");
        system("cls");

        importantQuestion("questionAndAnswer12.txt");
        cout << doctor + ": " + "Let's move on to the next question.\n";
        system("PAUSE");
        system("cls");

        importantQuestion("questionAndAnswer13.txt");
        cout << doctor + ": " + "Let's move on to the next question.\n";
        system("PAUSE");
        system("cls");

        importantQuestion("questionAndAnswer14.txt");
        cout << doctor + ": " + "Let's move on to the next question.\n";
        system("PAUSE");
        system("cls");

        importantQuestion("questionAndAnswer15.txt");
        cout << doctor + ": " + "Let's move on to the next question.\n";
        system("PAUSE");
        system("cls");

        cout << "\n" + doctor + ": Congratulations " + userName + " tomorrow you will answer a few questions and learn the result of the test.\n";
    
        system("PAUSE");
        system("cls");

        readFile("Day3UI.txt");
        statistics();

        cout << doctor + ": Today, you will learn the results of the test.\n";
        importantQuestion("questionAndAnswer16.txt");
        cout << doctor + ": " + "Let's move on to the next question.\n";
        system("PAUSE");
        system("cls");

        importantQuestion("questionAndAnswer17.txt");
        cout << doctor + ": " + "Let's move on to the next question.\n";
        system("PAUSE");
        system("cls");


        importantQuestion("questionAndAnswer18.txt");
        cout << doctor + ": " + "Let's move on to the next question.\n";
        system("PAUSE");
        system("cls");

        importantQuestion("questionAndAnswer19.txt");
        cout << doctor + ": " + "Let's move on to the next question.\n";
        system("PAUSE");
        system("cls");

        importantQuestion("questionAndAnswer20.txt");
        cout << doctor + ": " + "Let's move on to the next question.\n";
        system("PAUSE");
        system("cls");

        importantQuestion("questionAndAnswer21.txt");
        cout << doctor + ": " + "Let's move on to the next question.\n";
        system("PAUSE");
        system("cls");

        importantQuestion("questionAndAnswer22.txt");
        cout << doctor + ": " + "Let's move on to the next question.\n";
        system("PAUSE");
        system("cls");

        readFile("UI2.txt");
        statistics();

        system("PAUSE");
        system("cls");
        cout << doctor + ": All this test is over, you can go to results.\n";
        system("PAUSE");
        system("cls");

        readFile("History2.txt");
        system("PAUSE");
        system("cls");
        
        cout << "\nYou have scored " << *endPoints << " points.\n";
        endings();

        readFile("caption.txt");
        system("PAUSE");
        system("cls");

        playAgain("playAgain.txt");
        if (endGame == true)
        {
            system("PAUSE");
            system("cls");
            mainLogic();
        }
        else if (endGame == false)
        {
            break;
        }
    } while (endGame == true);
}