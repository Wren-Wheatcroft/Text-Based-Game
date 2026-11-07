#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include "main.h"
#include <ctime>
using namespace std;

int main()
{
	Human Medic;

	Medic.ClassName = "Medic";
	Medic.Name1 = Name;
	Medic.Attack1Name = "Swing";
	Medic.Attack1Damage = 20;
	Medic.HealName = "HealingBeam";
	Medic.Healing = 50;
	Medic.Health = 200;


	Human Brute;
	Brute.ClassName = "Brute";
	Brute.Name1 = Name;
	Brute.Attack1Name = "SwingStrike";
	Brute.Attack1Damage = 35;
	Brute.SpecialAttack = "SpinningBlow";
	Brute.SpecialAttackDmg = 40;
	Brute.HealName = "Health Pots";
	Brute.Healing = 20;
	Brute.Health = 150;


	Human Adventurer;

	Adventurer.ClassName = "Adventurer";
	Adventurer.Name1 = Name;
	Adventurer.Attack1Name = "SwordStrike";
	Adventurer.Attack1Damage = 25;
	Adventurer.SpecialAttack = "Upwards Slash";
	Adventurer.SpecialAttackDmg = 50;
	Adventurer.HealName = "Health Pots";
	Adventurer.Healing = 25;
	Adventurer.Health = 175;


	Human Player;
	int MaxHealth;

	//Player.ClassName;
	//Player.Name1;
	//Player.Attack1Name;
	//Player.Attack1Damage;
	//Player.SpecialAttack;
	//Player.SpecialAttackDmg;
	//Player.HealName;
	//Player.Healing;
	//Player.Health;




	cout << "Welcome To ----------- Press Any Key To Start! " << flush;
	system("PAUSE"); // waits for the user to press a key to continue 
	system("ClS"); // clears the window
	do {
		cout << "Hello Adventurer , what can I call you?" << "\n";
		//cin.ignore();
		IsValid = true;
		cin.getline(Name, 256);
		cout << "\n";
		for (int i = 0; Name[i] != '\0'; ++i)
		{
			if (isdigit(static_cast<unsigned char>(Name[i]))) // checks to make sure that the user hasnt enterd a number
			{
				IsValid = false;
			}
		}
		if (Name[0] == 0)
		{
			cerr << "\n" << "Please Enter A Name! Press Enter To Try Again" << "\n"; // checks to make sure that it isnt just a blank space
			cin.ignore(256, '\n'); // this is to hopefully stop the issues i had where once you entered a new name it would delete the first letter
			cin.clear();
		}
		else if (IsValid == false)
		{
			cerr << "\n" << "Please Dont Use Numbers! Press Enter To Try Again" << "\n";
			cin.ignore(256, '\n');
			cin.clear();
		}
		else
		{
			break;
		}


	} while (true);

	cout << "Hello " << Name << ", Are you ready to start your adventure?" << flush;
	system("PAUSE");
	system("CLS");

	cout << "\n" << "Class 1" << "\n" << "Health - 175 " << "\n" << "Abilites - Basic SwordStrike(25dmg), Health Pots(25healing)" << "\n" << "Extra - Unlocks Jack Of All Trades" << "\n" << flush;
	cout << "\n" << "Class 2" << "\n" << "Health - 200 " << "\n" << "Abilites - Basic Swing(20dmg), Healing Beam(50healing), \nSpecialAttack - Revive - The First Time You Reach 0 Hit Points, You Go Back To Half Health  " << "\n" << "Extra - Unlocks Empathy Dialog" << "\n" << flush;
	cout << "\n" << "Class 3" << "\n" << "Health - 150 " << "\n" << "Abilites - SwingStrike(35dmg), Health Pots(20healing), " << "\n" << "Extra - Unlocks Intimdiating Dialog" << "\n" << flush;

	cout << "\n" << "Please Choose A Class ( Enter 1-3 )" << "\n" << "\n" << flush;
	do {
		cin >> ClassType;

		if (ClassType == 1)
		{
			cout << "Welcome Adventurer " << Name << ", Being A Jack Of All Trades Will Be Of Use To You";
			bJackOfAllTrades = true;

			Player = Adventurer;
			MaxHealth = Player.Health;

			break;
		}
		else if (ClassType == 2)
		{
			cout << "Welcome Medic, " << Name << " Your Skills Will Be Useful In The Field";
			bEmpathyDialog = true;
			bReviveUsed = false;
			Player = Medic;
			MaxHealth = Player.Health;


			break;
		}
		else if (ClassType == 3)
		{
			cout << "Welcome Brute, " << Name << " The Eneimes In Your Path Shall Be Easy";
			bIntimidateDialog = true;
			Player = Brute;
			MaxHealth = Player.Health;

			break;
		}
		else {
			cerr << "Please Enter A Number Between 1 And 3";
		};
	} while (true);

	cout << "\n" << "Press Any Key To Continue ..... " << "\n" << flush;
	system("PAUSE");
	system("CLS");

	// Start of game
	cout << "\n" << "As you start looking around the dull city around you, you can see a church, multiple allyways and a pub, where do you go?" << "\n";
	cout << "1. The Church " << "\n" << "2. The Allyways " << "\n" << "3. The Pub " << "\n";

	do {
		cin >> Choice1;
		cout << " Press Any Key To Continue....";
		system("PAUSE");
		system("CLS");

		if (Choice1 == 1)
		{
			cout << R"( 
				   +
				   A_
				  /\-\
				 _||"|_
				~^~^~^~^
				)" << "\n"; // here im using a raw string literal insted of using basic cout, this is so i can add acii art into my game
			cout << "As you walk through the isles you try to ignore thoes around you";
			Area1 = "Church";
			if (bEmpathyDialog == true)
			{
				cout << "However a girl crying catches your attention, what do you do?" << "\n" << "1. Help Her" << "\n" << "2. Leave";

				do {
					//cout << "However a girl crying catches your attention, what do you do?" << "\n" << "1. Help Her" << "\n" << "2. Leave";
					cin >> Choice3;
					if (Choice3 == 1)
					{
						bRecruitedAnya = true;
						cout << "After sitting with the girl for what must have been hours, she finally calms down and thanks you for helping, you feel you have made a valuable ally";
						cout << "\n" << "You say your goddbyes and walk out the back door ";
						break;
					}
					else if (Choice3 == 2)
					{
						BCowardsEnding1 = true;
						cout << "\n" << "You walk out the back door" << "\n";
						break;
					}
					else
					{
						cerr << "\n " << "Please Enter A Number Between 1 and 3";
						cin.ignore();
						cin.clear();
					}
				} while (true);
				break;
			}
			else
			{
				cout << "\n" << "and you walk out the back door " << "\n";
				break;
			}
		}
		else if (Choice1 == 2)
		{
			cout << R"(
				 ______________
				|\ ___________ /|
				| |  /|,| |   | |
				| | |,x,| |   | |
				| | |,x,' |   | |
				| | |,x   ,   | |
				| | |/    |%==| |
				| |    /] ,   | |
				| |   [/ ()   | |
				| |       |   | |
				| |       |   | |
				| |       |   | |
				| |      ,'   | |
				| |   ,'      | |
				|_|,'_________|_| 

)";
			Area1 = "Allyway";
			if (bJackOfAllTrades == true)
			{
				bGrabbedKnife = true;
				cout << "You walk through the dark allyways, you see a shine in the corner of your eye, when you pick it up you find a small knife embeded in the stone";
				cout << "\n" << "Knife Added To Inventory";

			}
			else
			{
				cout << "You walk through the dark allyways, you see nothing.";
			}
			break;
		}
		else if (Choice1 == 3)
		{
			cout << R"( 


             ,~,
            ))))Y
           (((,/_____________
           /( [_____________
          (  \  |  [_]   [_]
          /__/  |   |     |
         (|(/   |   |     |
         q`q`_  |  _|_   _|_

)";
			Area1 = "Pub";
			cout << "You walk up to the bar and sit down to have a drink, -5 to Max Health, + 5 to " << Player.HealName;
			MaxHealth -= 5;
			Player.Healing += 5;
			break;
		}
		else
		{
			cerr << "\n " << "Please Enter A Number Between 1 and 3";
			cin.ignore();
			cin.clear();
		}
	} while (true);

	//cout << "Press Any Key To Continue....";
	//system("PAUSE");
	//system("CLS");

	cout << "After leaving the " << Area1 << " you stumble across a group of men robbing someone, what do you do?" << "\n";
	cout << "1.Run" << "\n" << "2.Stay And Fight" << "\n";
	if (bIntimidateDialog == true)
	{
		cout << "3. Scare Them" << "\n";
	}
	do {
		cin >> Choice2;
		if (Choice2 == 1)
		{
			cout << "\n" << "Much to the persons dismay, you run past them into the distance";
			BCowardsEnding2 = true;
			break;

		}
		else if (Choice2 == 2) // first combat encounter skippable
		{
			while (Player.Health > 0 && EnemyHealth > 0)
			{
				cout << "Player Hp - " << Player.Health << "\n" << "Enemy Hp" << EnemyHealth << "\n";
				cout << "What Do You Do?" << "\n";
				cout << "1.Attack, 2.Heal" << "\n " << "\n";

				cin >> CombatChoice1;
				if (CombatChoice1 == 1)
				{
					cout << "You Attack The Enemy For " << Player.Attack1Damage << " Using " << Player.Attack1Name << "\n";
					EnemyHealth -= Player.Attack1Damage;
					cin.ignore();
					cin.clear();
				}
				else if (CombatChoice1 == 2)
				{
					cout << "You Heal For " << Player.Healing << " Health Using " << Player.HealName << "\n";
					Player.Health += Player.Healing;
					cin.ignore();
					cin.clear();
				}
				else
				{
					cout << "Lose Your Turn! Make Sure To Pick A Valid Output Next Time" << "\n";
					cin.ignore();
					cin.clear();
				}
				if (EnemyHealth <= 0)
				{
					break;
				}
				cout << "The Enemy Attacks For " << EnemyDamage << " Hit Points" << "\n";
				Player.Health -= EnemyDamage;

				if (Player.Health > 1 && Player.Health < 50)
				{
					if (bReviveUsed == false)
					{
						cout << "Medic Ability Used - Plus 50 Health" << "\n";
						Player.Health += 50;
						bReviveUsed = true;
					}
					else
					{
						break;
					}
				}

			}
			if (Player.Health > 0)
			{
				cout << "You Won This Battle!!" << "\n";
				break;
			}
			else
			{
				cout << "You Lost..." << "\n";
				return 1;
			}

		}
		else if ((bIntimidateDialog == true) and (Choice2 == 3))
		{
			cout << "\n" << "You manage to scare them away!";
			break;
		}
		else
		{
			cerr << "\n " << "Please Enter Either 1 Or 2" << "\n";
			cin.ignore();
			cin.clear();
		}
	} while (true);

	cout << "\n" << "Combat Over.." << "\n" << " Press Anything To Continue...";
	system("PAUSE");
	system("CLS");


	cout << "You hear people screaming up ahead, people look to you as the only " << Player.ClassName << " in the area, What do you do?" << "\n";
	cout << "1.Go Help" << "\n" << "2.Run";

	do {


		cin >> Choice4;

		if (Choice4 == 1)
		{

			break;
		}
		else if (Choice4 == 2)
		{
			BCowardsEnding3 = true;
			cout << "despite attempting to run, you get caught and thrown into battle, lose 10 health and 5 damage for trying to run away" << "\n";
			Player.Health -= 10;
			Player.Attack1Damage -= 5;
			break;

		}
		else {
			cerr << "\n " << "Please Enter Either 1 Or 2" << "\n";
			cin.ignore();
			cin.clear();
		}
	} while (true);


	system("PAUSE");
	system("CLS");
	cout << "Entering Boss Fight.... " << "\n" << " Press Anything To Continue...";
	system("PAUSE");
	system("CLS");
	Player.Health = MaxHealth;

	while (Player.Health > 0 && BossHealth > 0)
	{
		cout << "Player Hp - " << Player.Health << "\n" << "Boss Hp" << BossHealth << "\n";
		cout << "What Do You Do?" << "\n";
		cout << "1.Attack, 2.Heal" << "\n " << "\n";

		cin >> CombatChoice1;
		if (CombatChoice1 == 1)
		{
			cout << "You Attack The Boss For " << Player.Attack1Damage << " Using " << Player.Attack1Name << "\n";
			BossHealth -= Player.Attack1Damage;
			cin.ignore();
			cin.clear();
		}
		else if (CombatChoice1 == 2)
		{
			cout << "You Heal For " << Player.Healing << " Health Using " << Player.HealName << "\n";
			Player.Health += Player.Healing;
			cin.ignore();
			cin.clear();
		}
		else
		{
			cout << "Lose Your Turn! Make Sure To Pick A Valid Output Next Time" << "\n";
			cin.ignore();
			cin.clear();
		}
		if (BossHealth <= 0)
		{
			break;
		}
		cout << "The Boss Attacks For " << BossDamage << " Hit Points" << "\n";
		Player.Health -= BossDamage;

		if (Player.Health > 1 && Player.Health < 50)
		{
			if (bReviveUsed == false)
			{
				cout << "Medic Ability Used - Plus 50 Health" << "\n";
				Player.Health += 50;
				bReviveUsed = true;
			}
			else
			{
				break;
			}
		}

	}
	if (Player.Health > 0)
	{
		cout << "You Won This Battle!!" << "\n";
	}
	else
	{
		cout << "You Lost... The Adventure Will Continue With Someone Else.." << "\n"; // ending #dead
		return 1;
	}

	if (bRecruitedAnya == true) // Not Alone Ending
	{
		cout << "On you way back to the adventures guild, you are joined by the girl from church, you walk in comfortable silence" << "\n";
		cout << "Well done " << Name;


		return 0;
	}
	else if ((BCowardsEnding1 == true) and (BCowardsEnding2 == true) or ((BCowardsEnding2 == true) and (BCowardsEnding3 == true)) or ((BCowardsEnding1 == true) and (BCowardsEnding3 == true))) // Cowards Ending
	{
		cout << "You never did anything for anyone, you die alone." << "\n";
		return 0;

	}
	else if ((bGrabbedKnife == true) and (BCowardsEnding2 == false))// GrabbedKnife Ending
	{
		cout << "You tried everything to defend yourself and thoes around you, when you go back to the adventurers guild, you carry on with your duties";
		return 0;
	}
	else if ((bGrabbedKnife == true) and (BCowardsEnding2 == true)) // Allyways Ending
	{
		cout << "Why didnt you help thoes around you?" << "\n" << "You get stripped of your title and carry on with your life alone.";
		return 0;
	}
	else // basic ending
	{
		cout << "On your way back to the adventueres guild, people celebrate and you get promoted !!" << "\n";
		cout << "Well done " << Player.ClassName;
		return 0;
	}
}

