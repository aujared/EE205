#include <utility>
#include <string>
#include <iostream>
#include "game-utility.hpp"
#include "Weapon.hpp"

//Default  base weapon constructor
Weapon::Weapon() :
  rarity("Bloody"),
  type("Hands"),
  wdamage(2),
  wdefense(2),
  MAXhealth(15),

  MAXmana(20) {/*std::cout << "Basic Weapon constructed" << std::endl;*/}

//Destructor
Weapon::~Weapon() {/*std::cout << "Weapon destructed" << std::endl;*/}

//Overloaded base weapon constructor
Weapon::Weapon(std::string rarity_, std::string type_, int wdamage_, int wdefense_,int MAXhealth_, int MAXmana_) :
  rarity(rarity_),
  type(type_),
  wdamage(wdamage_),
  wdefense(wdefense_),
  MAXhealth(MAXhealth_),

  MAXmana(MAXmana_) {std::cout << "Base Weapon constructor called" << std::endl;}

//Inherited warrior weapon class constructor
Warrior_Weap::Warrior_Weap(unsigned char rarity_level) {
	int weapon_type;
	switch(rarity_level){
		case 1: //Bronze melee weapon
			weapon_type = RandNum(1, 4);
			this->MAXhealth = 20;
			this->MAXmana = 100;
			this->rarity = "Bronze";
			if(weapon_type == 1){
				this->type = "Sword";
				this->wdamage = 2;
				this->wdefense = 2;
			}
			else if(weapon_type == 2){
				this->type = "Axe";
				this->wdamage = 3;
				this->wdefense = 1;
			}
			else{
				this->type = "Lance";
				this->wdamage = 1;
				this->wdefense = 3;
			}
			break;
		case 2: //Silver melee weapon
			weapon_type = RandNum(1, 4);
			this->MAXhealth = 30;
			this->MAXmana = 100;
			this->rarity = "Silver";
			if(weapon_type == 1){
				this->type = "Sword";
				this->wdamage = 3;
				this->wdefense = 3;
			}
			else if(weapon_type == 2){
				this->type = "Axe";
				this->wdamage = 4;
				this->wdefense = 2;
			}
			else{
				this->type = "Lance";
				this->wdamage = 2;
				this->wdefense = 4;
			}
			break;
		case 3: //Gold melee weapon
			weapon_type = RandNum(1, 4);
			this->MAXhealth = 40;
			this->MAXmana = 100;
			this->rarity = "Gold";
			if(weapon_type == 1){
				this->type = "Sword";
				this->wdamage = 4;
				this->wdefense = 4;
			}
			else if(weapon_type == 2){
				this->type = "Axe";
				this->wdamage = 5;
				this->wdefense = 3;
			}
			else{
				this->type = "Lance";
				this->wdamage = 3;
				this->wdefense = 5;
			}
			break;
		case 4: //Platinum melee weapon
			weapon_type = RandNum(1, 4);
			this->MAXhealth = 60;
			this->MAXmana = 100;
			this->rarity = "Platinum";
			if(weapon_type == 1){
				this->type = "Sword";
				this->wdamage = 5;
				this->wdefense = 5;
			}
			else if(weapon_type == 2){
				this->type = "Axe";
				this->wdamage = 6;
				this->wdefense = 4;
			}
			else{
				this->type = "Lance";
				this->wdamage = 4;
				this->wdefense = 5;
			}
		  break;
		case 5: //Diamond melee weapon
			weapon_type = RandNum(1, 4);
			this->MAXhealth = 80;
			this->MAXmana = 100;
			this->rarity = "Diamond";
			if(weapon_type == 1){
				this->type = "Sword";
				this->wdamage = 6;
				this->wdefense = 6;
			}
			else if(weapon_type == 2){
				this->type = "Axe";
				this->wdamage = 7;
				this->wdefense = 5;
			}
			else{
				this->type = "Lance";
				this->wdamage = 5;
				this->wdefense = 7;
			}
			break;
		case 6: //Legendary melee weapon
			weapon_type = RandNum(1, 4);
			this->MAXhealth = 100;
			this->MAXmana = 100;
			this->rarity = "Legendary";
			if(weapon_type == 1){
				this->type = "Sword";
				this->wdamage = 9;
				this->wdefense = 9;
			}
			else if(weapon_type == 2){
				this->type = "Axe";
				this->wdamage = 11;
				this->wdefense = 7;
			}
			else{
				this->type = "Lance";
				this->wdamage = 7;
				this->wdefense = 11;
			}
			break;
		default:
			throw "Not a weapon";
	}
}
//Inherited mage weapon class constructor
Mage_Weap::Mage_Weap(unsigned char rarity_level) {
	this->type = "Staff";
	switch(rarity_level){
		case 1: //Bronze type staff weapon
			this->rarity = "Bronze";
			this->wdamage = 1;
			this->wdefense = 0;
			this->MAXhealth = 10;
			this->MAXmana = 50;
			break;
		case 2: //Silver type staff weapon
			this->rarity = "Silver";
			this->wdamage = 3;
			this->wdefense = 1;
			this->MAXhealth = 30;
			this->MAXmana = 70;
			break;
		case 3: //Gold type staff weapon
			this->rarity = "Gold";
			this->wdamage = 5;
			this->wdefense = 2;
			this->MAXhealth = 50;
			this->MAXmana = 100;
			break;
		case 4: //Platinum type staff weapon
			this->rarity = "Platinum";
			this->wdamage = 7;
			this->wdefense = 3;
			this->MAXhealth = 70;
			this->MAXmana = 120;
			break;
		case 5: //Diamond type staff weapon
			this->rarity = "Diamond";
			this->wdamage = 9;
			this->wdefense = 4;
			this->MAXhealth = 100;
			this->MAXmana = 150;
			break;
		case 6: //Legendary type staff weapon
			this->rarity = "Legendary";
			this->wdamage = 13;
			this->wdefense = 5;
			this->MAXhealth = 150;

			this->MAXmana = 200;

			break;
		default:
			throw "Not a weapon";
	}
}

//Getters
std::string Weapon::get_type() {return type;}
std::string Weapon::get_rarity() {return rarity;}
int Weapon::get_wdamage() {return wdamage;}
int Weapon::get_wdefense() {return wdefense;}
int Weapon::get_MAXhealth() {return MAXhealth;}
int Weapon::get_MAXmana() {return MAXmana;}

//Setters
void Weapon::set_type(std::string t) {this->type = t;}
void Weapon::set_rarity(std::string r) {this->rarity = r;}
void Weapon::set_wdamage(int dmg) {this->wdamage = dmg;}
void Weapon::set_wdefense(int def) {this->wdefense = def;}
void Weapon::set_MAXhealth(int hp) {this->MAXhealth = hp;}
void Weapon::set_MAXmana(int mp) {this->MAXmana = mp;}
