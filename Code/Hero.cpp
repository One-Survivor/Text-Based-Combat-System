#include <iostream>
#include <string>

//Character
std::string name;
bool leave = true;
std::string species = "/0";
std::string type;
bool psionic;
std::string psionicType = "/0";
std::string techType = "/0";

//Stats
int health;
//Psionic Managment
int focus;
int will;
//Tech Management
int energy;
int durability;

//Memberships
bool robotixMember;
bool psionicMember;



//Psionic Choices//
/*void psionicCreation() {
	while (leave == false) {
		if (species == "Ant") {
			cout << "As an Ant, you can be a Precognition (Seeing into the future) or a Dominator (Mind Control). Which would you like?" << endl;
			cin >> psionicType;
			if (psionicType == "Precognition" || psionicType == "Dominator") {
				leave = true;
			}
			else {
				cout << "You cannot be that. Type either Precognition or Dominator." << endl;
				cout << "" << endl;
			}
		}

		else {
			cout << "As a " << species << ", you can be an Etheral (creatng etheral objects), a Telekintetic (moving stuff), a Precognition," << endl;
			cout << "(see into the future), or a Dominator (mind control). Which would you like?" << endl;
			cin >> psionicType;
			if (psionicType == "Pregognition" || "Telekintetic" || "Etheral" || "Dominator") {
				cout << "" << endl;
				leave = true;
			}
			else {
				cout << "You cannot be that. Type Etheral, Telekinetic, Precognition, or Dominator." << endl;
				cout << "" << endl;
			}
		}
	}
}

void techCreation() {
	leave = false;
	while (leave = false) {
		cout << "You are part of the new order of power. Are you a Robolord (Have a robotic companion), a Plasmanipulator (manipulate plasma)," << endl;
		cout << "or a Hacker (hack stuff)?";
		cin >> techType;
		if (techType == "Robolord" || "Plasmanipulator" || "Hacker") {
			leave = true;
		}
	}
}

void heroCreator() {
	cout << "Enter your first name. Cannot contain spaces." << endl;
	cin >> name;
	space();
	while (leave = false) {
		cout << "Enter your species. You can be either an Ant, a Wolf, or a Fox. Enter your chosen species as shown." << endl;
		cin >> species;
		if (species == "Ant" || "Wolf" || "Fox") {
			leave = true;
		}
	}

	//Note for Ants
	if (species == "Ant") {
		space();
		cout << "Ant Psionics are exceedingly rare due to their dependence to their queen. As such, if you choose to be a Psionic," << endl;
		cout << "you cannot be an Etheral or Telekinetic Psionic." << endl;
		system("Pause");
	}
	space();
	cout << "In these lands there are two groups of creatures, the Psionics and the Techs. The Psionics are skilled in the" << endl;
	cout << "the way of their will changing their surrounding, wether that be creating objects, moving them, dominating the" << endl;
	cout << "minds of others, or even seeing into the future. They were rare, but their power was unchallenged, until now." << endl;
	cout << "The rise of technology has made a new group of powerful creatures, the Techs. Through the use of technology, they" << endl;
	cout << "could do many marvels, such as creating intelligent robotics, manipulating plasma, communicate across the world," << endl;
	cout << "or hack into what techology the Psionics did have. Hostilities have broken out, and it is up to you to try and" << endl;
	cout << "stop this war." << endl;
	space();
	system("Pause");
	space();
	cout << "Are you a Psionic or a Tech?" << endl;
	cin >> type;
	space();
	//Deciding Story Path
	if (type == "Psionic") {
		psionicCreation();
	}
	else {
		techCreation();
	}
}

//Ability Use//

void changeFocus(int amount) {
	focus = focus + amount;
}

void changeEnergy(int amount) {
	energy = energy + amount;
}*/

