#include <iostream>
#include <string>
#include <stdio.h>     
#include <stdlib.h>     
#include <time.h>
#include <fstream>

using namespace std;
int phealth = 100;
int main();
int door1();

//Work on boogyman
//Player has ability to Punch and run


int end()
{
	cout << "This is the end" << endl;
}


int pad()
{

	string entpass;
	
	cout << "You look at the key pad. There are 10 buttons" << endl << "1, 2, 3, 4, 5, 6, 7, 8, 9, 0" << endl;	
	
	cout << "You put your finger to the pad and you, enter the code, or \"cancel\"."  << endl;
	
	cin >> entpass;
	
	if(entpass == "64529" )
	{
		end();
	}
	else if(entpass == "cancel")
	{
		main();
	}
	else
	{
		cout << "That is incorrect" << endl;
		pad();
	}
}

int hall2()
{
	cout << "Hall2" << endl;
}

int hall1()
{
	
	int ohealth = 100;

	int choice;
	
	cout << "You walk down the hall. You look behind you but there is nothing there. " << endl << " You look in front and you see what appears to be a man. " << endl << "\"Hello\" he say to you. \"Now you Must die.\" He says it so casually you are scared to death. He walks toward you and.. " << endl;
	
	cout << "The Boogy man attacks you!" << endl;
	
	while(ohealth >= 1 || phealth >= 1)
	{
		cout << "Your Health: " << phealth << " | Boogyman's Health: " << ohealth << endl;
		cout << "" << endl << "" << endl << "" << endl;
		cout << "Do you want to PUNCH(1) or Run(2)?" << endl;
		cin >> choice;
		if(choice == 1)
		{
			ohealth -= 25;
			cout << "You punch the boogyman and do 25 damage!" << endl;
		}
		else if(choice == 2)
		{
			cout << "You manage to get away but not before the boogy man gets out a knife and stabs you." << endl << "You lose 50 health" << endl;
			phealth -= 50;
			cout << phealth;
		}
		else
		{
			cout << "You stand there doing nothing." << endl;
			
		}
		
		if(choice == 1)
		{
			cout << "The boogyman hits and does 10 damage" << endl << ""<<endl;
			phealth -= 10;
		} 
		else if(choice == 2)
		{
			hall2();
		}
		else
		{
			return 1;
			
		}
	}
}



int dicegame()
{
	
	int correct;
	int tries = 3;
	int numchoice;
	
	cout << "It seems to be a dice game. You will choose a number 3 times and each time the dice will roll." << endl << " If you guess the number correctly once, you will skip the next challenge." << endl;
	
	while(tries >0 )
	{
		int num = rand() % 6;
		
		cout << "You have " << tries << " tries remaining" << endl; 
		cout << "Choose a number between 1 and 6" << endl;
		cin >>numchoice;
		
	
		
		if(numchoice == num)
		{
			cout << "That was correct" << endl;
			correct++;
			tries--;
				
		}
		else
		{
			cout << "Not correct" << endl;
			tries--;
		}
		
	}
	if (correct >= 1)
	{
		cout << "You won! Lets go past this first hall." << endl;
		hall2();
	}
	else 
	{
		cout << "You didn't win" << endl;
		door1();
	}
}

int door1()

{
	int choice2;
	
	cout << "You walk through the first door, you see a hallway. Right next to the door however is what appers to be a game."<< endl <<" On the game it says try your luck" << endl << "Do you want to (1)Play the game or (2)Walk down the hallway?" << endl;
	cin >>choice2;
	
	if(choice2 == 1)
	{
		dicegame();
	}
	else if(choice2 == 2)
	{
		hall1();	
	}
	else
	{
		cout << "That is not a valid option, you start choking on your stupidness and die" << endl;
	}
}


int main()
{
	int choice1;
	
	cout << "You wake up in a room and see a key pad." << endl << "On the opposite side of the room you see a door." << endl;
	cout << "To open the keypad, Press (1), To go through the door, Press (2)" << endl;
	cin >> choice1;
	if(choice1 == 1)
	{
		pad();
	}
	else if(choice1 == 2)
	{
		door1();	
	}
	else
	{
		cout << "That is not a valid option, you start choking on your stupidness and die" << endl;
	}
}
