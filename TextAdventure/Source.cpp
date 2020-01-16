#include <iostream>
#include <istream>

using namespace std;

//Declare strings used
string className;
string name;
string answer;
//Declare ints used
int classNum = 0;

int main()
{
	//intro
	cout << "Welcome to Dungeon Quest!\n";
	cout << "An exciting adventure game where you explore a mysterious dungeon in search of gold and glory!\n";
	cout << "Please enter you name\n";
	//takes in the players name for the story
	cin >> name;
	cout << "\nPlease enter the corresponding number for your class you will like to play as for your adventure.\n";
	cout << "1 = Noble Knight. 2 = Keen Rouge\n";
	//Determine class type and stats based on player choice
	cin >> classNum;

	if (classNum == 1)
	{
		className = "Noble Knight";
	}
	else if (classNum == 2)
	{
		className = "Keen Rouge";

	}
	else
	{
		
			//If the user inputs an invalid input, they'll be stuck in a loop until they do.
			while (classNum != 1 && classNum != 2||classNum==NULL)
			{
				cout << "invalid input. Please try again.\n";
				cout << "1 = Noble Knight. 2 = Rouge\n";
				cin >> classNum;
				if (classNum == 1) {
					className = "Noble Knight";
				}
				else if (classNum == 2)
				{
					className = "Keen Rouge";
				}
			}
		

	}
	// begins the story
	cout << "\nAt the height of medieval era and in a far distant, mystical land,\n";
	cout << "an adventurer and " << className << " dubbed " << name << " is in search\n";
	cout << "of gold and glory that will put their name in the history books.\n";
	cout << "During " << name << "'s travels, " << name << " over hears a conversation about\n";
	cout << " a dungeon close by filled to the brim with gold. You make your way to the dungeon.\n\n";
	cout << "...";
	cout << "\n\nYou've reached the dungeon entrance and you can here the sounds of spiders within.\n";
	cout << "Do you go in? Enter yes or no.\n";
	//takes in user input
	cin >> answer;
	// "Yes" path
	if (answer == "yes" || answer == "Yes")
	{
		cout << "\nYou enter the dungeon but you were immiediately introduced to a giant spider!\n";
		cout << "The spider charges at you! What will you do?\n";
		cout << "Attack, Block, or Dodge?\n";
		cin >> answer;
		//if player tries to attack
		if (answer == "attack" || answer == "Attack")
		{
			cout << "\nYou tried to swing your but the spider got to you first and you died.\n\n";
			cout << "Game over...\n";
		}
		// if the player tries to block
		else if (answer == "Block" || answer == "block")
		{
			// if the player is the knight.
			if (classNum == 1)
			{
				cout << "\nYou block the spider's attack with your shield then you swing a fatal counter blow\n";
				cout << "killing the spider. You continue down further the dungeon...\n\n";
				cout << "You reached the end of the dungeon, killing a few more spiders on the way, and it appears to be a large room with a chest on the other side\n";
				cout << "but it's guarded by a giant Oger with a club. It seems to being currently distracted as it's feasting on a donkey carcass...\n";
				cout << "what will you do?\n";
				cout << "Steal or Assassinate?\n";
				//takes in answer
				cin >> answer;
				//if knight tries to steal.
				if (answer == "steal" || answer == "Steal")
				{
					cout << "\nYou sheath your sword and pull out a cloth bag to put the gold in. The sound of your armor clinking together and the rustling of gold coins\n";
					cout << "made just enough noise for the oger to hear you and he grabs his club, quickly turns around, and smacks you into wall with the club. Breaking ever bone you had.\n";
					cout << "You slowly bleed out.\n\n Game over...";
				}
				//if knight tries to assassinate
				else if (answer == "Assassinate" || answer == "assassinate")
				{
					cout << "\nYou slowly tip-toe up to the oger. He doesn't notice you still so you grab your sword with both hands and shove it up the ogers back.\n";
					cout << "It pierces the oger's heart and it dies.\n\n";
					cout << "You grab as much gold as you can carry and walk back out of the dungeon to live the rest of your days in riches!\n";
					cout << "As the world hear's your story, you earn the title: " << name << " the oger slayer!\n";
					cout << "You win! Try playing as the rouge next time!\n";
				}
				//if player does nothing
				else
				{
					cout << "\nAs you sat there and do nothing, the oger notices you and throws his club at you.\n";
					cout << "It was a direct hit and you die from the blow.\n\n Game over... Hint: try putting a valid input next time.\n";
				}

			}
			// if the player is a rouge
			else
			{
				cout << "\nYou try to block the attack with your tiny knife but failed.\n";
				cout << "The spider mauls you to death.\n\n";
				cout << "Game over... Hint: Try dodging as a " << className << " next time!\n";
			}
		}
		// if the player tries to dodge
		else if (answer == "Dodge" || answer == "dodge")
		{
			//if the player is a rouge
			if (classNum == 2)
			{
				cout << "\nYou swiftly dodge out of the way of the spiders attack and then you land a critical blow as you stab the back of the spider's head,\n";
				cout << "killing the spider. You continue down further the dungeon...\n\n";
				cout << "You reached the end of the dungeon, killing a few more spiders on the way, and it appears to be a large room with a chest on the other side\n";
				cout << "but it's guarded by a giant Oger with a club. It seems to being currently distracted as it's feasting on a donkey carcass...\n";
				cout << "what will you do?\n";
				cout << "Steal or Assassinate?\n";
				//takes in answer
				cin >> answer;
				//if rouge tries to steal
				if (answer == "steal" || answer == "Steal")
				{
					cout << "\nsilently sneak up to the treasure chest without the oger noticing due to your lack of armor and\n";
					cout << "You grab as much gold as you can carry and quickly sneak back out of the dungeon to live the rest of your days in riches!\n";
					cout << "As the world hear's your story, you earn the title: " << name << " the oger deciever!\n\n";
					cout << "You win! Try playing as the knight next time!\n";
				}
				//if rouge tries to assassinate
				else if (answer == "Assassinate" || answer == "assassinate")
				{
					cout << "\nYou slowly sneak up to the oger and you quickly stab the oger in the back.\n";
					cout << "It doesn't appear to be affective because oger slowly stands up, turns to you, pulls the knife out his back, and gives you a 'what the fuck bro' look.\n";
					cout << "You give a nervous laugh and quickly makes towards the exit. The oger grabs and flings you into the wall, breaking ever bone you had.\n";
					cout << "You slowly bleed out.\n\n Game over...\n";
				}
				//if player does nothing
				else
				{
					cout << "\nAs you sat there and do nothing, the oger notices you and throws his club at you.\n";
					cout << "It was a direct hit and you die from the blow.\n\n Game over... Hint: try putting a valid input next time.\n";
				}
			}
			//if the player is a knight
			else
			{
				cout << "\nYou try move your fat ass out of the way but you were too slow.\n";
				cout << "The spider mauls you to death.\n\n";
				cout << "Game over... Hint: Try blocking as a " << className << " next time!\n";
			}
		}
		// invalid input
		else
		{
			cout << "\nYou sat there doing nothing as the spider jumps onto you and mauls you.\n\n";
			cout << "Game over... Hint: try putting in a valid input next time!\n";
		}
	}
	// the "no" path
	else if (answer == "no" || answer == "No")
	{
		cout << "\nYou decide its not worth it so you take your leave but, a gaint boulder falls out of no where and smashes you.\n\n";
		cout << "Game over...\n *cough* *cough* Just go inside you pussy! *cough* *cough*\n";
	}
	else
	{
		cout << "\nAs you sat there and did nothing, a poisonous snake comes by and bites your leg.\n";
		cout << "You keel over and die from the poison...\n\n";
		cout << "Game over... Hint: try putting in a valid input next time!\n";
	}
	// make the function happy :)
	return 0;
}