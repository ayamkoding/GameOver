#include <iostream>

using namespace std;

int main() {
	//penggunaan CONSTANT
	const int BUNUH_MUSUH_POINT = 150;
	int aliensKilled = 20;
	int score = aliensKilled * BUNUH_MUSUH_POINT;
	cout << "Score: " << score << endl;

	enum difficulty {
		NOVICE,
		EASY,
		NORMAL,
		HARD,
		UNDEATABLE
	};

	difficulty kesulitan = EASY;

	enum shipCost {
		FIGHTER_COST = 21,
		BOMBER_CONST, //this define value 22
		CRUISER_COST = 50
	};
	shipCost CostShipSaya = BOMBER_CONST; //value is 22
	cout << "To Upgrade: "<< (CRUISER_COST - CostShipSaya) << endl; //hasil nilainya  50 - 22;


	enum Ayam_Sikatan {
		AKU_GANTENG,
		AKU_CANTIK,
		AKU_CINTA
	};
	cout << "Aku ganteng:  " << AKU_GANTENG << endl;
	cout << "Aku Cantix: " << AKU_CANTIK << endl;
	cout << "Aku Cinta:  " << AKU_CINTA << endl;

	enum Bebek_Adus_Kali {
		AKU_SAYANG_KAMU = 20, //nilai 20
		AKU_CINTA_KAMU,
		AKU_DAN_KAMU
	};
	cout << "Aku sayang kamu " << AKU_SAYANG_KAMU << endl; 
	cout << "Aku cinta kamu: " << AKU_CINTA_KAMU << endl; //hasil 21
	cout << "Aku dan Kamu:  " << AKU_DAN_KAMU << endl; //hasil 22

	system("pause");
	return 0;
}