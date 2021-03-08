#pragma once
void notInmportantQuestion1(string fileName)
{
    cout << doctor + ": ";
    readFile(fileName);
    cout << "\n" + userName + ": ";
    cin >> answers;

    switch (answers)
    {
    case 1:
        cout << doctor + ": " + "Understandably...\n"; // Good Choice.  
        cout << "The consequences of the choice are possible!\n";
        break;
    case 2:
        cout << doctor + ": " + "Excellent choice!\n"; // Bad Choice;
        cout << "Your choice changes the direction of the story!\n";
        break;
    default:
        cout << "\nDon't want to answer, okay.\n";
        break;
    }
}

void notInmportantQuestion2(string fileName)
{

    readFile(fileName);
    cout << "\n" + userName + ": ";
    cin >> answers;

    switch (answers)
    {
    case 1:
        aggression += 1;
        cout << userName + ": " + "You don 't have to tell me!\n"; // Bad Choice;
        break;
    case 2:
        kindness += 1;
        cout << userName + ": " + "I 'm sorry, I didn' t mean to...\n"; // Good Choice. 
        break;
    default:
        cout << "\nDon't want to answer, okay.\n";
        break;
    }
}

void notInmportantQuestion3(string fileName)
{
    readFile(fileName);
    cout << "\n" + userName + ": ";
    cin >> answers;

    switch (answers)
    {
        case 1: // Good Choice;
            kindness += 1.5f;
            cout << userName + ": I help you!";
            cout << "\nHomeless: Thank you for help...\n";
            cout << userName + " mood wasn 't very good, but now he' s feeling better";
            cout << "\nLife can be a surprise.";
            cout << "\nWith those thoughts, " + userName + " went home.\n";
            readFile("Day1UI.txt");
            statistics();
            break;
        case 2:
            kindness -= 0.5f;
            cout << userName + ": " + "Maybe I should have helped him!\n"; // Bad Choice;
            cout << "With those thoughts, " + userName + " went home.\n";
            readFile("Day1UI.txt");
            statistics();
            break;
        case 3:
            aggression -= 1.0f; // Very Bad Choice;
            kindness -= 1.0f;
            cout << userName + ": " + "I did the right thing!\n";
            cout << "With those thoughts, " + userName + " went home.\n";
            readFile("Day1UI.txt");
            statistics();
            break;
        default:
            cout << "\nDon't want to answer, okay.\n";
            cout << "With those thoughts, " + userName + " went home.\n";
            readFile("Day1UI.txt");
            statistics();
            break;
    }
}

void importantQuestion(string fileName)
{
    cout << doctor + ": ";
    readFile(fileName);
    cout << "\n" + userName + ": ";
    cin >> answers;

    switch (answers)
    {
    case 1: // Very Good Choise.
        points += 0;
        depression += 0;
        cout << "\n" + doctor + ": ";
        readFile("veryGoodChoice1.txt");
        break;
    case 2: // Good Choise.
        points += 1;
        depression += 0.5;
        cout << "\n" + doctor + ": ";
        readFile("GoodChoice1.txt");
        break;
    case 3: // Bad Choise.
        points += 2;
        depression += 1;
        cout << "\n" + doctor + ": ";
        readFile("badChoice1.txt");
        break;
    case 4: // Very Bad Choise.
        points += 3;
        depression += 2;
        cout << "\n" + doctor + ": ";
        readFile("veryBadChoice1.txt");
        break;
    default:
        cout << "\nDon't want to answer, okay.\n";
        points += 3; // Very Bad Choise.
        break;
    }
}

void playAgain(string fileName)
{
    readFile(fileName);
    cout << "\n" + userName + ": ";
    cin >> answers;

    switch (answers)
    {
        case 1:
            cout << userName + ": Yes.\n";
            endGame = true;
            
            userName = "";
            kindness = 5;
            depression = 5;
            aggression = 5;
            points = 0;
            *endPoints = 0;
            
            break;
        case 2:
            cout << userName + ": No.\n";
            endGame = false;
            break;
    }
}