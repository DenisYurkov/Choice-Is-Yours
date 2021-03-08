#pragma once
void endings()
{
	if (points >= 0 && points <= 9)
	{
		readFile("VeryGoodEnd.txt");
	}
	else if (points >= 10 && points <= 15)
	{
		readFile("GoodEnd.txt");
	}
	else if (points >= 16 && points <= 19)
	{
		readFile("MediumEnd.txt");
	}
	else if (points >= 20 && points <= 29)
	{
		readFile("BadEnd.txt");
	}
	else 
	{
		readFile("VeryBadEnd.txt");
	}
}