#include<iostream>
#include<stdlib.h>
#include<string>
#include<limits>
using namespace std;

void invalid()
{
	cout<<"Invalid Output! Try Again: ";

			/*fixes infinite loop on non-numeric input*/
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
int ap, app, Qty;
int AppSum()
{
			if (ap==1){
	int a=120;
	ap=a;
} else if (ap==2){
	int b=110;
	ap=b;
	} else if (ap==3){
		int c=150;
		ap=c;
		} else if (ap==4){
			int d=130;
			ap=d;
			} else if (ap==9){
				ap=0;
				}
app=ap*Qty;
}

int so,sp,SpQty;
int SpSum()
{
			if (so==1){
	int a=200;
	so=a;
} else if (so==2){
	int b=250;
	so=b;
	} else if (so==3){
		int c=255;
		so=c;
		} else if (so==4){
			int d=280;
			so=d;
			} else if (so==9){
				so=0;
				}
				else {
				invalid();
				cin>>so;
				}
sp=so*SpQty;
}

int sl,sld,SlQty;
int SlSum()
{
			if (sl==1){
	int a=210;
	sl=a;
} else if (sl==2){
	int b=230;
	sl=b;
	} else if (sl==3){
		int c=205;
		sl=c;
		} else if (sl==4){
			int d=240;
			sl=d;
			} else if (sl==9){
				sl=0;
				}
			else {
				invalid();
				cin>>sl;
				}
sld=sl*SlQty;
}

int mn, mc, McQty;
int McSum()
{
			if (mn==1){
	int a=350;
	mn=a;
} else if (mn==2){
	int b=300;
	mn=b;
	} else if (mn==3){
		int c=290;
		mn=c;
		} else if (mn==4){
			int d=275;
			mn=d;
			} else if (mn==9){
				mn=0;
				}
			else {
				invalid();
				cin>>mn;
				}
mc=mn*McQty;
}

int dst, dsrt, DsrtQty;
int DsrtSum()
{
			if (dst==1){
	int a=105;
	dst=a;
} else if (dst==2){
	int b=125;
	dst=b;
	} else if (dst==3){
		int c=135;
		dst=c;
		} else if (dst==4){
			int d=100;
			dst=d;
			} else if (dst==9){
				dst=0;
				}
			else {
				invalid();
				cin>>dst;
				}
dsrt=dst*DsrtQty;
}

int wn, wine, WineQty;
int WineSum()
{
			if (wn==1){
	int a=500;
	wn=a;
} else if (wn==2){
	int b=450;
	wn=b;
	} else if (wn==3){
		int c=480;
		wn=c;
		} else if (wn==9){
			wn=0;
			}
			else {
				invalid();
				cin>>wn;
				}
wine=wn*WineQty;
}

string peso="P";
int TotalSum()
{
int arr[] = {app,sp,sld,mc,dsrt,wine};
    // size of the array
    int clmn = sizeof(arr) / sizeof(arr[0]);

    // sum of the array elements
    int total = 0;
    for (int price = 0; price < clmn; price++)
        {
            total += arr[price];
        }
    cout<<"____________________________________________________________"<<endl;
    cout<<"\tTotal:\t\t\t\t\t"<<peso<<total<<endl;
}

void appetizer()
{
	/*Appetizer*/
	cout<<"\n\t\t     ~~~ Appetizer ~~~";
	cout<<"\n\t1.) Potato Croquettes     = "<<peso<<"120";
	cout<<"\n\t2.) Thai Fish Cake        = "<<peso<<"110";
	cout<<"\n\t3.) Cheesy Baked Mussels  = "<<peso<<"150";
	cout<<"\n\t4.) Calamari w/ Aioli Dip = "<<peso<<"130"<<endl;
	cout<<"\n\t9.) Cancel Appetizer"<<endl;
}

void soup()
{
	/*Soup*/
	cout<<"\n\t\t       ~~~ Soup ~~~";
	cout<<"\n\t1.) Mushroom Soup\t  = "<<peso<<"200";
	cout<<"\n\t2.) Crab & Corn Chowder\t  = "<<peso<<"250";
	cout<<"\n\t3.) Carrot Vichyssoise\t  = "<<peso<<"255";
	cout<<"\n\t4.) Cosomme\t\t  = "<<peso<<"280"<<endl;
	cout<<"\n\t9.) Cancel Soup"<<endl;
}

void salad()
{
	/*Salad*/
	cout<<"\n\t\t       ~~~ Salad ~~~";
	cout<<"\n\t1.) Caesar Salad\t  = "<<peso<<"210";
	cout<<"\n\t2.) Waldorf\t\t  = "<<peso<<"230";
	cout<<"\n\t3.) Mixed Green Salad\t  = "<<peso<<"205";
	cout<<"\n\t4.) Calypso Salad\t  = "<<peso<<"240"<<endl;
	cout<<"\n\t9.) Cancel Salad"<<endl;
}

void maincourse()
{
	/*Main Course*/
	cout<<"\n\t\t       ~~~ Main Course ~~~";
	cout<<"\n\t1.) Grilled Tenderloin Steak = "<<peso<<"350";
	cout<<"\n\t2.) Cordon Bleu\t\t     = "<<peso<<"300";
	cout<<"\n\t3.) Salisbury Steak\t     = "<<peso<<"290";
	cout<<"\n\t4.) Fish Piccata\t     = "<<peso<<"275"<<endl;
	cout<<"\n\t9.) Cancel Main Course"<<endl;
}

void dessert()
{
	/*Dessert*/
	cout<<"\n\t\t       ~~~ Dessert ~~~";
	cout<<"\n\t1.) Floating Island\t     = "<<peso<<"105";
	cout<<"\n\t2.) Creme Brulee\t     = "<<peso<<"125";
	cout<<"\n\t3.) Panna Cotta\t\t     = "<<peso<<"135";
	cout<<"\n\t4.) Pavlova\t\t     = "<<peso<<"100"<<endl;
	cout<<"\n\t9.) Cancel Dessert"<<endl;
}

void Wine()
{
    	/*Wine*/
	cout<<"\n\t\t       ~~~ Wine ~~~";
	cout<<"\n\t1.) Carlo Rossi\t\t     = "<<peso<<"500";
	cout<<"\n\t2.) Listel\t\t     = "<<peso<<"450";
	cout<<"\n\t3.) Novellino\t\t     = "<<peso<<"480"<<endl;
	cout<<"\n\t9.) Cancel Wine"<<endl;
}

int main()
{
	/*Food Shop Name*/
	cout<<"\n";
	cout<<"------------------------------------------------------------------------|    QinYing Restaurant   |---------------------------------------------------------------------\n";
	cout<<"\t\t\t\t\t\t\t---> Washengtoon Street, Brgy. Sandamukal, Dimahanap City <---"<<endl;
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
    system("pause");
    system("cls");

	//Order Taking
	string waiter="CHEN: ";
	string guest="You: ";
	string td="!-->";

	cout<<waiter<<"Welcome to QinYing Restaurant! I am CHEN your Waiter for today. May I take your order?"<<endl;
	cout<<td<<"Choose your appetizer:\n";
	appetizer();
	//Appetizer Choice
	cout<<"Choice:";
	cin>>ap;
		while (ap!=1 && ap!=2 && ap!=3 && ap!=4 && ap!=9){
			invalid();
			cout<<"Choose your Appetizer: ";
			cin>>ap;
		}
		cout<<endl;

		if (ap!=9){
                switch (ap)
                {
                    case 1:
                        cout<<waiter<<"Potato Croquettes. ";
                    break;
                    case 2:
                        cout<<waiter<<"Thai Fish Cake. ";
                    break;
                    case 3:
                        cout<<waiter<<"Cheesy Baked Mussels. ";
                    break;
                    case 4:
                        cout<<waiter<<"Calamari w/ Aioli dip. ";
                    break;
                }
		cout<<"Excelent Choice! And how many orders would you like?\n"<<"Quantity: ";
		cin>>Qty;
		while (Qty<1){
			invalid();
			cout<<"How many Orders do you like: ";
			cin>>Qty;
			}
			cout<<endl;
		}
	switch (ap)
	{
		case 1:
		cout<<waiter<<"Copy! Then for your Appetizer, you'll have..."<<Qty<<" order of Potato Croquettes";
		break;
		case 2:
		cout<<waiter<<"Copy! Then for your Appetizer, you'll have..."<<Qty<<" order of Thai Fish Cake";
		break;
		case 3:
		cout<<waiter<<"Copy! Then for your Appetizer, you'll have..."<<Qty<<" order of Cheesy Baked Mussels";
		break;
		case 4:
		cout<<waiter<<"Copy! Then for your Appetizer, you'll have..."<<Qty<<" order of Calamari w/ Aioli dip";
		break;
		case 9:
        cout<<waiter<<"No Appetizer, Got it!";
        break;
	}
	cout<<"\n"<<endl;
    system("pause");
    system("cls");

//Soup Choice
    cout<<waiter<<"How about your Soup?\n\n";
	cout<<td<<"Choose your soup:\n";
	soup();
	cout<<"choice:";
	cin>>so;
		while (so!=1 && so!=2 && so!=3 && so!=4 && so!=9){
			invalid();
			cout<<"Choose your Soup: ";
			cin>>so;
		}
		cout<<endl;

		 if (so!=9){
		    switch (so)
                {
                    case 1:
                        cout<<waiter<<"Mushroom Soup. ";
                    break;
                    case 2:
                        cout<<waiter<<"Crab & Corn Chowder. ";
                    break;
                    case 3:
                        cout<<waiter<<"Carrot Vichyssoise. ";
                    break;
                    case 4:
                        cout<<waiter<<"Cosomme. ";
                    break;
                }
		cout<<"Nice choice! And how many orders would you like?\n"<<"Quantity: ";
		cin>>SpQty;
		while (SpQty<1){
			invalid();
			cout<<"How many Orders do you like: ";
			cin>>SpQty;

			}
			cout<<endl;
		}
	switch (so)
	{
		case 1:
		cout<<waiter<<"Then for your Soup, you'll have..."<<SpQty<<" order of Mushroom Soup";
		break;
		case 2:
		cout<<waiter<<"Then for your Soup, you'll have..."<<SpQty<<" order of Crab & Corn Chowder";
		break;
		case 3:
		cout<<waiter<<"Then for your Soup, you'll have..."<<SpQty<<" order of Carrot Vichyssoise";
		break;
		case 4:
		cout<<waiter<<"Then for your Soup, you'll have..."<<SpQty<<" order of Cosomme";
		break;
		case 9:
		cout<<waiter<<"No Soup, Got it!";
		break;
	}
	cout<<"\n"<<endl;
    system("pause");
    system("cls");

	//Salad Choice
	cout<<waiter<<"How about your Salad?\n\n";
	cout<<td<<"Choose your salad:\n";
	salad();
	cout<<"Choice:";
	cin>>sl;
		while (sl!=1 && sl!=2 && sl!=3 && sl!=4 && sl!=9){
			invalid();
			cout<<"Choose your Salad: ";
			cin>>sl;
		}
		cout<<endl;

		 if (sl!=9){
		    switch (sl)
                {
                    case 1:
                        cout<<waiter<<"Caesar Salad. ";
                    break;
                    case 2:
                        cout<<waiter<<"Waldorf. ";
                    break;
                    case 3:
                        cout<<waiter<<"Mixed Green Salad. ";
                    break;
                    case 4:
                        cout<<waiter<<"Calypso Salad. ";
                    break;
                }
		cout<<"A choice of excellence! And how many orders would it be?\n"<<"Quantity: ";
		cin>>SlQty;
		while (SlQty<1){
			invalid();
			cout<<"How many Orders do you like: ";
			cin>>SlQty;
			}
			cout<<endl;
		}
	switch (sl)
	{
		case 1:
		cout<<waiter<<"Copy! Then for your Salad, you'll have..."<<SlQty<<" order of Caesar Salad";
		break;
		case 2:
		cout<<waiter<<"Copy! Then for your Salad, you'll have..."<<SlQty<<" order of Waldorf";
		break;
		case 3:
		cout<<waiter<<"Copy! Then for your Salad, you'll have..."<<SlQty<<" order of Mixed Green Salad";
		break;
		case 4:
		cout<<waiter<<"Copy! Then for your Salad, you'll have.. "<<SlQty<<" order of Calypso Salad";
		break;
		case 9:
		cout<<waiter<<"No Salad, Got it!";
		break;
	}
	cout<<"\n"<<endl;
	system("pause");
    system("cls");

	//Main Course Choice
	cout<<waiter<<"How about for your Main Course?\n\n";
	cout<<td<<"Choose your Main Course:\n";
	maincourse();
	cout<<"choice:";
	cin>>mn;
		while (mn!=1 && mn!=2 && mn!=3 && mn!=4 && mn!=9){
			invalid();
			cout<<"Choose your Main Course: ";
			cin>>mn;
		}
		cout<<endl;

		 if (mn!=9){
		    switch (mn)
                {
                    case 1:
                        cout<<waiter<<"Grilled Tenderloin Steak. ";
                    break;
                    case 2:
                        cout<<waiter<<"Cordon Bleu. ";
                    break;
                    case 3:
                        cout<<waiter<<"Salisbury Steak. ";
                    break;
                    case 4:
                        cout<<waiter<<"Fish Piccata. ";
                    break;
                }
		cout<<"One of our best sellers! And how many orders would you like?\n"<<"Quantity: ";
		cin>>McQty;
		while (McQty<1){
			invalid();
			cout<<"How many Orders do you like: ";
			cin>>McQty;
			}
			cout<<endl;
		}
	switch (mn)
	{
		case 1:
		cout<<waiter<<"Copy! So for your Main Course, you'll have..."<<McQty<<" order of our very own Grilled Tenderloin Steak";
		break;
		case 2:
		cout<<waiter<<"Copy! So for your Main Course, you'll have..."<<McQty<<" order of our very own Cordon Bleu";
		break;
		case 3:
		cout<<waiter<<"Copy! So for your Main Course, you'll have..."<<McQty<<" order of our very own Salisbury Steak";
		break;
		case 4:
		cout<<waiter<<"Copy! So for your Main Course, you'll have.. "<<McQty<<" order of our very own Fish Piccata";
		break;
		case 9:
		cout<<waiter<<"No Main Course, Got it!";
		break;
	}
	cout<<"\n"<<endl;
	system("pause");
    system("cls");

	//Dessert Choice
	cout<<waiter<<"How about for your Dessert?\n\n";
	cout<<td<<"Choose your Dessert:\n";
	dessert();
	cout<<"choice:";
	cin>>dst;
		while (dst!=1 && dst!=2 && dst!=3 && dst!=4 && dst!=9){
			invalid();
			cout<<"Choose your Dessert: ";
			cin>>dst;
		}
		cout<<endl;

		 if (dst!=9){
		    switch (dst)
                {
                    case 1:
                        cout<<waiter<<"Floating Island. ";
                    break;
                    case 2:
                        cout<<waiter<<"Creme Brulee. ";
                    break;
                    case 3:
                        cout<<waiter<<"Panna Cotta. ";
                    break;
                    case 4:
                        cout<<waiter<<"Pavlova. ";
                    break;
                }
		cout<<"A Choice of the keen! And how many orders would it be?\n"<<"Quantity: ";
		cin>>DsrtQty;
		while (DsrtQty<1){
			invalid();
			cout<<"How many Orders do you like: ";
			cin>>DsrtQty;
			}
			cout<<endl;
		}
	switch (dst)
	{
		case 1:
		cout<<waiter<<"Well then, for your Dessert, you'll have..."<<DsrtQty<<" order of Floating Island";
		break;
		case 2:
		cout<<waiter<<"Well then, for your Dessert, you'll have..."<<DsrtQty<<" order of Creme Brulee";
		break;
		case 3:
		cout<<waiter<<"Well then, for your Dessert, you'll have..."<<DsrtQty<<" order of Panna Cotta";
		break;
		case 4:
		cout<<waiter<<"Well then, for your Dessert, you'll have.. "<<DsrtQty<<" order of Pavlova";
		break;
		case 9:
		cout<<waiter<<"No Dessert, Got it!";
		break;
	}
	cout<<"\n"<<endl;
	system("pause");
    system("cls");

    //Wine Choice
    cout<<waiter<<"How about for your Wine? It'll be a bottle by the way.\n\n";
	cout<<td<<"Choose your Wine:\n";
	Wine();
	cout<<"Choice:";
	cin>>wn;
		while (wn!=1 && wn!=2 && wn!=3 && wn!=9){
			invalid();
			cout<<"Choose your Wine: ";
			cin>>wn;
		}
		cout<<endl;

		 if (wn!=9){
		    switch (wn)
                {
                    case 1:
                        cout<<waiter<<"Carlo Rossi. ";
                    break;
                    case 2:
                        cout<<waiter<<"Listel. ";
                    break;
                    case 3:
                        cout<<waiter<<"Novellino. ";
                    break;
                }
		cout<<"That one's a classic! And how many bottles would it be?\n"<<"Quantity: ";
		cin>>WineQty;
		while (WineQty<1){
			invalid();
			cout<<"How many bottles do you like: ";
			cin>>WineQty;
			}
			cout<<endl;
		}
	switch (wn)
	{
		case 1:
		cout<<waiter<<"Very  well then! For your Wine, you'll have..."<<WineQty<<" bottle of the classical Carlo Rossi";
		break;
		case 2:
		cout<<waiter<<"Very  well then! For your Wine, you'll have..."<<WineQty<<" bottle of the classical Listel";
		break;
		case 3:
		cout<<waiter<<"Very  well then! For your Wine, you'll have..."<<WineQty<<" bottle of the classical Novellino";
		break;
		case 9:
		cout<<waiter<<"No Wine, Got it!";
		break;
	}
	cout<<"\n"<<endl;
	system("pause");
    system("cls");

	//Repeat Order
	cout<<"\n\n"<<waiter<<"May I repeat your order?\n\tEnter:  y = Yes\n\t\tn = No"<<endl<<"Your Answer: ";
	char answer;
	cin>>answer;
		while (answer!='y' && answer!='n'){
			invalid();
			cin>>answer;
		}
        if (answer == 'y'){
            cout<<"\n\n"<<waiter<<"I'll repeat your order.\n";
	switch (ap)
	{
		case 1:
		cout<<"For Appetizer you'll have: "<<Qty<<" Potato Croquettes";
		break;
		case 2:
		cout<<"For Appetizer you'll have: "<<Qty<<" Thai Fish Cake";
		break;
		case 3:
		cout<<"For Appetizer you'll have: "<<Qty<<" Cheesy Baked Mussels";
		break;
		case 4:
		cout<<"For Appetizer you'll have: "<<Qty<<" Calamari w/ Aioli dip";
		break;
		case 9:
		cout<<"You have No Appetizer";
		break;
	}
	switch (so)
	{
		case 1:
		cout<<"\nFor Soup you'll have: "<<SpQty<<" Mushroom Soup";
		break;
		case 2:
		cout<<"\nFor Soup you'll have: "<<SpQty<<" Crab & Corn Chowder";
		break;
		case 3:
		cout<<"\nFor Soup you'll have: "<<SpQty<<" Carrot Vichyssoise";
		break;
		case 4:
		cout<<"\nFor Soup you'll have: "<<SpQty<<" Cosomme";
		break;
		case 9:
		cout<<"\nYou have No Soup";
		break;
	}
	switch (sl)
	{
		case 1:
		cout<<"\nFor Salad you'll have: "<<SlQty<<" Caesar Salad";
		break;
		case 2:
		cout<<"\nFor Salad you'll have: "<<SlQty<<" Waldorf";
		break;
		case 3:
		cout<<"\nFor Salad you'll have: "<<SlQty<<" Mixed Green Salad";
		break;
		case 4:
		cout<<"\nFor Salad you'll have: "<<SlQty<<" Calypso Salad";
		break;
		case 9:
		cout<<"\nYou have No Salad";
		break;
	}
	switch (mn)
	{
		case 1:
		cout<<"\nFor Main Course you'll have: "<<McQty<<" Grilled Tenderloin Steak";
		break;
		case 2:
		cout<<"\nFor Main Course you'll have: "<<McQty<<" Cordon Bleu";
		break;
		case 3:
		cout<<"\nFor Main Course you'll have: "<<McQty<<" Salisbury Steak";
		break;
		case 4:
		cout<<"\nFor Main Course you'll have: "<<McQty<<" Fish Piccata";
		break;
		case 9:
		cout<<"\nYou have No Main Course";
		break;
	}
		switch (dst)
	{
		case 1:
		cout<<"\nFor Dessert you'll have: "<<DsrtQty<<" Floating Island";
		break;
		case 2:
		cout<<"\nFor Dessert you'll have: "<<DsrtQty<<" Creme Brulee";
		break;
		case 3:
		cout<<"\nFor Dessert you'll have: "<<DsrtQty<<" Panna Cotta";
		break;
		case 4:
		cout<<"\nFor Dessert you'll have: "<<DsrtQty<<" Pavlova";
		break;
		case 9:
		cout<<"\nYou have No Dessert";
		break;
	}
	switch (wn)
	{
		case 1:
		cout<<"\nFor Wine you'll have: "<<WineQty<<" Carlo Rossi";
		break;
		case 2:
		cout<<"\nFor Wine you'll have: "<<WineQty<<" Listel";
		break;
		case 3:
		cout<<"\nFor Wine you'll have: "<<WineQty<<" Novellino";
		break;
		case 9:
		cout<<"\nYou have No Wine";
		break;
	}

    cout<<"\n"<<endl;
	system("pause");
	system("cls");
}
cout<<"\n"<<endl;

	//Reciept
	cout<<waiter<<"Would you like a Receipt?\n\tEnter:  y = Yes\n\t\tn = No"<<endl<<"Your Answer: ";
	cin>>answer;
	cout<<endl;
	system("cls");

    cout<<waiter<<"Here's your bill.\n"<<endl;
		while (answer!='y' && answer!='n'){
			invalid();
			cin>>answer;
		}
		if (answer == 'y'){
            cout<<"____________________________________________________________"<<endl;
            cout<<"-----------------|   QinYing Restaurant   |-----------------\n";
            cout<<"\t      -------> Order Receipt <-------"<<endl;
	switch (ap)
	{
		case 1:
		AppSum();
		cout<<"- Potato Croquettes =\t\t"<<peso<<"120 *"<<Qty<<" =\t"<<peso<<app<<endl;
		break;
		case 2:
		AppSum();
		cout<<"- Thai Fish Cake =\t\t"<<peso<<"110 *"<<Qty<<" =\t"<<peso<<app<<endl;
		break;
		case 3:
		AppSum();
		cout<<"- Cheesy Baked Mussels =\t"<<peso<<"150 *"<<Qty<<" =\t"<<peso<<app<<endl;
		break;
		case 4:
		AppSum();
		cout<<"- Calamari w/ Aioli dip =\t"<<peso<<"130 *"<<Qty<<" =\t"<<peso<<app<<endl;
		break;
	}
	switch (so)
	{
		case 1:
		SpSum();
		cout<<"- Mushroom Soup =\t\t"<<peso<<"200 *"<<SpQty<<" =\t"<<peso<<sp<<endl;
		break;
		case 2:
		SpSum();
		cout<<"- Crab & Corn Chowder =\t\t"<<peso<<"250 *"<<SpQty<<" =\t"<<peso<<sp<<endl;
		break;
		case 3:
		SpSum();
		cout<<"- Carrot Vichyssoise =\t\t"<<peso<<"255 *"<<SpQty<<" =\t"<<peso<<sp<<endl;
		break;
		case 4:
		SpSum();
		cout<<"- Cosomme =\t\t\t"<<peso<<"280 *"<<SpQty<<" =\t"<<peso<<sp<<endl;
		break;
	}
	switch (sl)
	{
		case 1:
		SlSum();
		cout<<"- Caesar Salad =\t\t"<<peso<<"210 *"<<SlQty<<" =\t"<<peso<<sld<<endl;
		break;
		case 2:
		SlSum();
		cout<<"- Waldorf =\t\t\t"<<peso<<"230 *"<<SlQty<<" =\t"<<peso<<sld<<endl;
		break;
		case 3:
		SlSum();
		cout<<"- Mixed Green Salad =\t\t"<<peso<<"205 *"<<SlQty<<" =\t"<<peso<<sld<<endl;
		break;
		case 4:
		SlSum();
		cout<<"- Calypso Salad =\t\t"<<peso<<"240 *"<<SlQty<<" =\t"<<peso<<sld<<endl;
		break;
	}
	switch (mn)
	{
		case 1:
		McSum();
		cout<<"- Grilled Tenderloin Steak =\t"<<peso<<"350 *"<<McQty<<" =\t"<<peso<<mc<<endl;
		break;
		case 2:
		McSum();
		cout<<"- Cordon Bleu =\t\t\t"<<peso<<"300 *"<<McQty<<" =\t"<<peso<<mc<<endl;
		break;
		case 3:
		McSum();
		cout<<"- Salisbury Steak =\t\t"<<peso<<"290 *"<<McQty<<" =\t"<<peso<<mc<<endl;
		break;
		case 4:
		McSum();
		cout<<"- Fish Piccata =\t\t"<<peso<<"275 *"<<McQty<<" =\t"<<peso<<mc<<endl;
		break;
	}
	switch (dst)
	{
		case 1:
		DsrtSum();
		cout<<"- Floating Island =\t\t"<<peso<<"105 *"<<DsrtQty<<" =\t"<<peso<<dsrt<<endl;
		break;
		case 2:
		DsrtSum();
		cout<<"- Creme Brulee =\t\t"<<peso<<"125 *"<<DsrtQty<<" =\t"<<peso<<dsrt<<endl;
		break;
		case 3:
		DsrtSum();
		cout<<"- Panna Cotta =\t\t\t"<<peso<<"135 *"<<DsrtQty<<" =\t"<<peso<<dsrt<<endl;
		break;
		case 4:
		DsrtSum();
		cout<<"- Pavlova =\t\t\t"<<peso<<"100 *"<<DsrtQty<<" =\t"<<peso<<dsrt<<endl;
		break;
	}
	switch (wn)
	{
		case 1:
		WineSum();
		cout<<"- Carlo Rossi =\t\t        "<<peso<<"500 *"<<WineQty<<" =\t"<<peso<<wine<<endl;
		break;
		case 2:
		WineSum();
		cout<<"- Listel =\t\t"<<peso<<"450 *"<<WineQty<<" =\t"<<peso<<wine<<endl;
		break;
		case 3:
		WineSum();
		cout<<"- Novellino =\t\t\t"<<peso<<"480 *"<<WineQty<<" =\t"<<peso<<wine<<endl;
		break;
	}
	TotalSum();
}
else{
    AppSum();
    SpSum();
    SlSum();
    McSum();
    DsrtSum();
    WineSum();
    TotalSum();
}
	cout<<"\n\n"<<waiter<<"Thank you for Dining with us! We look forward for your next visit! :-)\n"<<endl;
	return 0;
}
