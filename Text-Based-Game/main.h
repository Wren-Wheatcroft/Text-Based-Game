#include <iostream>
#include <vector>
#include <string>
#pragma once
using namespace std;

char Name[256];
//std::string Name[256];
int ClassType = 0;
//std::string ClassName = "";
//std::string Attack1Name = "";
//int Attack1Damage = 0;
//std::string Attack2Name = "";
//int Attack2Damage = 0;
//std::string HealName = "";
//int Healing = 0;
//unsigned int Health = 0;
//bool ReviveUsed = false;
//bool EmpathyDialog = false;
//bool IntimidateDialog = false;
bool BCowardsEnding1 = false;
bool BCowardsEnding2 = false;
bool BCowardsEnding3 = false;
bool bReviveUsed = true;

bool IsValid = true;
int Choice1 = 0;
int Choice2 = 0;
int Choice3 = 0;
int Choice4 = 0;
int CombatChoice1 = 0;
string Area1 = "";
bool bRecruitedAnya = false;
bool bGrabbedKnife = false;
bool bJackOfAllTrades = false;
bool bEmpathyDialog = false;
bool bIntimidateDialog = false;
int EnemyHealth = 150;
int EnemyDamage = 35;
int BossHealth = 200;
int BossDamage = rand() % 30 + 15;// This should give us a random damage number with 15 being the lowest and 45 being the highest


class Human
{
    public:
	string ClassName;
	string Name1;
	string Attack1Name;
	int Attack1Damage;
	string SpecialAttack;
	int SpecialAttackDmg;
	string HealName;
	int Healing;
	unsigned int Health;
	bool bReviveUsed;
	bool bIntimidateDialog;
	bool bJackOfAllTrades;

	void Attack1()
	{

	};
	void Attack2()
	{

	};
	void Heal()
	{

	};
};

