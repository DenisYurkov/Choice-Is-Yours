#pragma once
void statistics()
{
	readFile("UI.txt");
	cout << "\n=Subject: " << userName << "\n";
	cout << "=Kindness: " << kindness << "\n";
	cout << "=Depression: " << depression << "\n";
	cout << "=Aggression: " << aggression << "\n";
	readFile("UI.txt");
}