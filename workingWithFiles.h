#pragma once

void readFile(string fileName)
{
   ifstream fileCheck; // ifstream - reading data from a file.
   fileCheck.open(fileName);
    if (fileCheck.is_open()) 
    {
        char textFile;
        while (fileCheck.get(textFile)) // ifstream::get - extracts characters character by character.
        {
            cout << textFile;
        }
    }
    fileCheck.close();
}

void saveFile(string fileName, string saveInVariables)
{
    ofstream fileCheck; // ofstream - saving data to file.
    fileCheck.open(fileName);
    if (fileCheck.is_open())
    {
        fileCheck << saveInVariables;
    }
}
