#include<iostream>
#include<string>
#include <stdlib.h>
#include<limits>
using namespace std;

int app,sp,sld,mc,dsrt,wn;
void invalid()
{
    cout<<"Invalid Output! Try Again: ";
    /*fixes infinite loop on non-numeric input*/
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
}

string peso="P";
void menu()
{
    /*Menu*/
	cout<<"\n"<<"\t\t\t\t\t\t\t\t[[[ \tOur Very Own Restaurant Menu\t ]]]\n\n";
	/*Appetizer*/
	cout<<"\t\t\t\t       ~~~ Appetizer ~~~"<<"\t\t       ~~~ Soup ~~~"<<"\t\t\t       ~~~ Salad ~~~"<<endl;
	cout<<"\n\t\t\t\t* Potato Croquettes     = "<<peso<<"120"<<"\t\t* Mushroom Soup       = "<<peso<<"200"<<"\t\t* Caesar Salad      = "<<peso<<"210";
	cout<<"\n\t\t\t\t* Thai Fish Cake        = "<<peso<<"110"<<"\t\t* Crab & Corn Chowder = "<<peso<<"250"<<"\t\t* Waldorf           = "<<peso<<"230";
	cout<<"\n\t\t\t\t* Cheesy Baked Mussels  = "<<peso<<"150"<<"\t\t* Carrot Vichyssoise  = "<<peso<<"255"<<"\t\t* Mixed Green Salad = "<<peso<<"205";
	cout<<"\n\t\t\t\t* Calamari w/ Aioli Dip = "<<peso<<"130"<<"\t\t* Cosomme\t      = "<<peso<<"280"<<"\t\t* Calypso Salad     = "<<peso<<"240\n"<<endl;

	/*Main Course*/
	cout<<"\t\t\t\t    ~~~ Main Course ~~~"<<"\t\t\t      ~~~ Desserts ~~~"<<"\t\t\t   ~~~ Wine Selection ~~~";
	cout<<"\n\t\t\t* Grilled Tenderloin Steak\t= "<<peso<<"350"<<"\t\t* Floating Island\t= "<<peso<<"105"<<"\t\t* Carlo Rossi       = "<<peso<<"500";
	cout<<"\n\t\t\t* Cordon Bleu \t\t\t= "<<peso<<"300"<<"\t\t* Creme Brulee\t\t= "<<peso<<"125"<<"\t\t* Listel\t    = "<<peso<<"450";
	cout<<"\n\t\t\t* Salisbury Steak\t\t= "<<peso<<"290"<<"\t\t* Panna Cotta\t\t= "<<peso<<"135"<<"\t\t* Novellino\t    = "<<peso<<"480";
	cout<<"\n\t\t\t* Fish Piccata\t\t\t= "<<peso<<"275"<<"\t\t* Pavlova\t\t= "<<peso<<"100"<<endl;

	cout<<"_______________________________________________________________________________________________________________________________________________________________________"<<endl;

}
int main()
{
	/*Food Shop Name*/
	cout<<"-----------------------------------------------------------------------|   QinYing Restaurant   |-----------------------------------------------------------------------\n";
	// / will only function after a character is declared.
	cout<<"\t\t\t\t\t\t\t---> Washengtoon Street, Brgy. Sandamukal, Dimahanap City <---"<<endl;
    menu();

    system("pause");
    system("cls");

	//Order Taking
	string waiter="Waiter: ";
	string guest="You: ";
	string td="! - ";

	//Appetizer Choice
	menu();
	cout<<waiter<<"May I take your order?"<<endl;
	cout<<" * Enter the Item Price:\n";
	cout<<td<<"Choose your appetizer:\n";
	cout<<"choice:";
	cin>>app;

	{
		while (app!=120 && app!=110 && app!=150 && app!=130){
            invalid();
            cin>>app;
		}
		system("cls");

	cout<<endl<<guest<<"For Appetizer I'll have... ";
	switch (app)
	{
		case 120:
		cout<<"Potato Croquettes";
		break;
		case 110:
		cout<<"Thai Fish Cake";
		break;
		case 150:
		cout<<"Cheesy Baked Mussels";
		break;
		case 130:
		cout<<"Calamari w/ Aioli dip";
		break;
    }
	cout<<endl;
    }
    system("pause");
	system("cls");

//Soup Choice
    menu();
	cout<<endl<<td<<"Choose your soup:\n";
	cout<<" * Enter the Item Price:\n";
	cout<<"choice:";
	cin>>sp;
	{
		while (sp!=200 && sp!=250 && sp!=255 && sp!=280){
			invalid();
			cin>>sp;
		}
		system("cls");
		cout<<endl<<guest<<"For my soup give me... ";
	switch (sp)
	{
		case 200:
		cout<<"Mushroom Soup";
		break;
		case 250:
		cout<<"Crab & Corn Chowder";
		break;
		case 255:
		cout<<"Carrot Vichyssoise";;
		break;
		case 280:
		cout<<"Cosomme";
		break;
	}
	cout<<endl;
	}
	system("pause");
	system("cls");

	//Salad Choice
	menu();
	cout<<endl<<td<<"Choose your Salad:\n";
	cout<<" * Enter the Item Price:\n";
	cout<<"choice:";
	cin>>sld;
	{
			while (sld!=210 && sld!=230 && sld!=205 && sld!=240){
			invalid();
			cin>>sld;
		}
		system("cls");
		cout<<endl<<guest<<"For my salad give me... ";
	switch (sld)
	{
		case 210:
		cout<<"Caesar Salad";
		break;
		case 230:
		cout<<"Waldorf";
		break;
		case 205:
		cout<<"Mixed Green Salad";
		break;
		case 240:
		cout<<"Calypso Salad";
		break;
	}
	cout<<endl;
	}
	system("pause");
	system("cls");

	//Main Course Choice
	menu();
	cout<<endl<<td<<"Choose your Main Course:\n";
	cout<<" * Enter the Item Price:\n";
	cout<<"choice:";
	cin>>mc;
	{
			while (mc!=350 && mc!=300 && mc!=290 && mc!=275){
			invalid();
			cin>>mc;
		}
		system("cls");
		cout<<endl<<guest<<"For my Main Course give me... ";
	switch (mc)
	{
		case 350:
		cout<<"Grilled Tenderloin Steak";
		break;
		case 300:
		cout<<"Cordon Bleu";;
		break;
		case 290:
		cout<<"Salisbury Steak";
		break;
		case 275:
		cout<<"Fish Piccata";
		break;
	}
	cout<<endl;
	}
	system("pause");
	system("cls");

	//Dessert Choice
	menu();
	cout<<endl<<td<<"Choose your Dessert:\n";
	cout<<" * Enter the Item Price:\n";
	cout<<"choice:";
	cin>>dsrt;
	{
			while (dsrt!=105 && dsrt!=125 && dsrt!=135 && dsrt!=100){
			invalid();
			cin>>dsrt;
		}
		system("cls");
		cout<<endl<<guest<<"For my dessert give me... ";
	switch (dsrt)
	{
		case 105:
		cout<<"Floating Island";
		break;
		case 125:
		cout<<"Creme Brulee";
		break;
		case 135:
		cout<<"Panna Cotta";
		break;
		case 100:
		cout<<"Pavlova";
		break;
	}
	cout<<endl;
	}
	system("pause");
	system("cls");

	//Wine Selection
	menu();
	cout<<endl<<td<<"Choose your Wine:\n";
	cout<<" * Enter the Item Price:\n";
	cout<<"choice:";
	cin>>wn;
	{
			while (wn!=500 && wn!=450 && wn!=480){
			invalid();
			cin>>wn;
		}
		system("cls");
		cout<<endl<<guest<<"For my wine give me... ";
	switch (wn)
	{
		case 500:
		cout<<"Carlo Rossi";
		break;
		case 450:
		cout<<"Listel";
		break;
		case 480:
		cout<<"Novellino";
		break;
	}
	cout<<endl;
	}
	system("pause");
	system("cls");


	//Repeat Order
	cout<<"\n\n"<<waiter<<"May I repeat your order?\n\tEnter:  y = Yes\n\t\tn = No"<<endl<<"Your Answer: ";
	char answer;
	cin>>answer;

	while (answer != 'n'){
		while (answer!='y' && answer!='n'){
			invalid();
			cin>>answer;
		}
		system("cls");

		cout<<"\n\n"<<waiter<<"I'll repeat your order.\nFor Appetizer you'll have: "<<app<<"\b\b\b";

	switch (app)
	{
		case 120:
		cout<<"Potato Croquettes";
		break;
		case 110:
		cout<<"Thai Fish Cake";
		break;
		case 150:
		cout<<"Cheesy Baked Mussels";
		break;
		case 130:
		cout<<"Calamari w/ Aioli dip";
		break;
	}
	cout<<"\nFor your Soup: "<<sp<<"\b\b\b";
	switch (sp)
	{
		case 200:
		cout<<"Mushroom Soup";
		break;
		case 250:
		cout<<"Crab & Corn Chowder";
		break;
		case 255:
		cout<<"Carrot Vichyssoise";;
		break;
		case 280:
		cout<<"Cosomme";
		break;
	}
	cout<<"\nFor your Salad: "<<sld<<"\b\b\b";
	switch (sld)
	{
		case 210:
		cout<<"Caesar Salad";
		break;
		case 230:
		cout<<"Waldorf";
		break;
		case 205:
		cout<<"Mixed Green Salad";
		break;
		case 240:
		cout<<"Calypso Salad";
		break;
	}
	cout<<"\nFor your Main Course: "<<mc<<"\b\b\b";
	switch (mc)
	{
		case 350:
		cout<<"Grilled Tenderloin Steak";
		break;
		case 300:
		cout<<"Cordon Bleu";;
		break;
		case 290:
		cout<<"Salisbury Steak";
		break;
		case 275:
		cout<<"Fish Piccata";
		break;
	}
	cout<<"\nFor your Dessert: "<<dsrt<<"\b\b\b";
	switch (dsrt)
	{
		case 105:
		cout<<"Floating Island";
		break;
		case 125:
		cout<<"Creme Brulee";
		break;
		case 135:
		cout<<"Panna Cotta";
		break;
		case 100:
		cout<<"Pavlova";
		break;
	}
	cout<<"\nAnd for your Wine: "<<wn<<"\b\b\b";
	switch (wn)
	{
		case 500:
		cout<<"Carlo Rossi";
		break;
		case 450:
		cout<<"Listel";
		break;
		case 480:
		cout<<"Novellino";
		break;
	}
	break;
	}

	//Reciept
	cout<<"\n\n"<<waiter<<"Would you like a Receipt?\n\tEnter:  y = Yes\n\t\tn = No"<<endl<<"Your Answer: ";
	cin>>answer;

	while (answer != 'n'){
		while (answer!='y' && answer!='n'){
			invalid();
			cin>>answer;
		}
		system("cls");

	cout<<"____________________________________________________________"<<endl;
cout<<"-----------------|   QinYing Restaurant   |-----------------\n";
cout<<"\t      -------> Order Receipt <-------"<<endl;
	switch (app)
	{
		case 120:
		cout<<"* Potato Croquettes =\t\t"<<peso<<"120"<<endl;
		break;
		case 110:
		cout<<"* Thai Fish Cake =\t\t"<<peso<<"110"<<endl;
		break;
		case 150:
		cout<<"* Cheesy Baked Mussels =\t"<<peso<<"150"<<endl;
		break;
		case 130:
		cout<<"* Calamari w/ Aioli dip =\t"<<peso<<"130"<<endl;
		break;
	}
	switch (sp)
	{
		case 200:
		cout<<"* Mushroom Soup =\t\t"<<peso<<"200"<<endl;
		break;
		case 250:
		cout<<"* Crab & Corn Chowder =\t\t"<<peso<<"250"<<endl;
		break;
		case 255:
		cout<<"* Carrot Vichyssoise =\t\t"<<peso<<"255"<<endl;
		break;
		case 280:
		cout<<"* Cosomme =\t\t\t"<<peso<<"280"<<endl;
		break;
	}
	switch (sld)
	{
		case 210:
		cout<<"* Caesar Salad =\t\t"<<peso<<"210"<<endl;
		break;
		case 230:
		cout<<"* Waldorf =\t\t\t"<<peso<<"230"<<endl;
		break;
		case 205:
		cout<<"* Mixed Green Salad =\t\t"<<peso<<"205"<<endl;
		break;
		case 240:
		cout<<"* Calypso Salad =\t\t"<<peso<<"240"<<endl;
		break;
	}
	switch (mc)
	{
		case 350:
		cout<<"* Grilled Tenderloin Steak =\t"<<peso<<"350"<<endl;
		break;
		case 300:
		cout<<"* Cordon Bleu =\t\t\t"<<peso<<"300"<<endl;
		break;
		case 290:
		cout<<"* Salisbury Steak =\t\t"<<peso<<"290"<<endl;
		break;
		case 275:
		cout<<"* Fish Piccata =\t\t"<<peso<<"275"<<endl;
		break;
	}
	switch (dsrt)
	{
		case 105:
		cout<<"* Floating Island =\t\t"<<peso<<"105"<<endl;
		break;
		case 125:
		cout<<"* Creme Brulee =\t\t"<<peso<<"125"<<endl;
		break;
		case 135:
		cout<<"* Panna Cotta =\t\t\t"<<peso<<"135"<<endl;
		break;
		case 100:
		cout<<"* Pavlova =\t\t\t"<<peso<<"100"<<endl;
		break;
	}
	switch (wn)
	{
		case 500:
		cout<<"* Carlo Rossi =\t\t\t"<<peso<<"500"<<endl;
		break;
		case 450:
		cout<<"* Listel =\t\t\t"<<peso<<"450"<<endl;
		break;
		case 480:
		cout<<"* Novellino =\t\t\t"<<peso<<"480"<<endl;
		break;
	}
	break;
	}

	int arr[] = {app,sp,sld,mc,dsrt,wn};
    // size of the array
    int clmn = sizeof(arr) / sizeof(arr[0]);

    // sum of the array elements
    int total = 0;
    for (int price = 0; price < clmn; price++)
        total += arr[price];
    cout<<"____________________________________________________________"<<endl;
	cout<<"\tTotal:\t\t\t"<<peso<<total<<endl;
	system("pause");
	system("cls");

	cout<<"\n\nThank you for Dining with us! We look forward for your next visit! :-)"<<endl;

	return 0;
}
