#include<iostream>
#include<string>
using namespace std;

int main()
{
	string peso="₱";
	/*Food Shop Name*/
	cout<<"-----------------|   QinYing Restaurant   |-----------------\n";
	// / will only function after a character is declared.
	cout<<"--> Washengtoon Street, Brgy. Sandamukal, Dimahanap City <--"<<endl;
	
	/*Menu*/
	cout<<"\n"<<"••••••[[[ \tOur Very Own Restaurant Menu\t ]]]••••••\n";
	/*Appetizer*/
	cout<<"\n\t\t     ~~~ Appetizer ~~~";
	cout<<"\n\t• Potato Croquettes     = "<<peso<<"120";
	cout<<"\n\t• Thai Fish Cake        = "<<peso<<"110";
	cout<<"\n\t• Cheesy Baked Mussels  = "<<peso<<"150";
	cout<<"\n\t• Calamari w/ Aioli Dip = "<<peso<<"130"<<endl;
	
	/*Soup*/
	cout<<"\n\t\t       ~~~ Soup ~~~\n";
	cout<<"\n\t• Mushroom Soup       = "<<peso<<"200";
	cout<<"\n\t• Crab & Corn Chowder = "<<peso<<"250";
	cout<<"\n\t• Carrot Vichyssoise  = "<<peso<<"255";
	cout<<"\n\t• Cosommé\t      = "<<peso<<"280"<<endl;

	/*Salad*/
	
	cout<<"\n\t\t       ~~~ Salad ~~~\n";
	cout<<"\n\t• Caesar Salad      = "<<peso<<"210";
	cout<<"\n\t• Waldorf           = "<<peso<<"230";
	cout<<"\n\t• Mixed Green Salad = "<<peso<<"205";
	cout<<"\n\t• Calypso Salad     = "<<peso<<"240\n"<<endl;
	
	/*Main Course*/
	cout<<"\n\t\t    ~~~ Main Course ~~~\n";
	cout<<"\n\t• Grilled Tenderloin Steak = "<<peso<<"350";
	cout<<"\n\t• Cordon Bleu \t\t   = "<<peso<<"300";
	cout<<"\n\t• Salisbury Steak\t   = "<<peso<<"290";
	cout<<"\n\t• Fish Piccata\t\t   = "<<peso<<"275"<<endl;
	
	/*Desserts*/
	cout<<"\n\t\t    ~~~ Desserts ~~~\n";
	cout<<"\n\t• Floating Island = "<<peso<<"105";
	cout<<"\n\t• Créme Brûlée\t  = "<<peso<<"125";
	cout<<"\n\t• Panna Cotta\t  = "<<peso<<"135";
	cout<<"\n\t• Pavlova\t  = "<<peso<<"100"<<endl;
	
	/*Wine*/
	cout<<"\n\t\t   ~~~ Wine Selection ~~~\n";
	cout<<"\n\t• Carlo Rossi     = "<<peso<<"500";
	cout<<"\n\t• Listel\t  = "<<peso<<"450";
	cout<<"\n\t• Novellino\t  = "<<peso<<"480"<<endl;
	cout<<"____________________________________________________________"<<endl;
	
	
	//Order Taking
	string waiter="Waiter: ";
	string guest="You: ";
	string td="⚠";
	
	cout<<waiter<<"May I take your order?"<<endl;
	cout<<td<<"Choose your appetizer:\n";
	cout<<" • Enter the Item Price:\n";
	cout<<"\t120.) Potato Croquettes\n";
	cout<<"\t110.) Thai Fish Cake\n";
	cout<<"\t150.) Cheesy Baked Mussels\n";
	cout<<"\t130.) Calamari w/ Aioli Dip\n"<<endl;
	
	//Appetizer Choice
	int app;
	cout<<"choice:";
	cin>>app;
	{
		while (app!=120 && app!=110 && app!=150 && app!=130){
			cout<<"Invalid Output! Try Again: ";
			cin>>app;
		}
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
		case 13:
		cout<<"Calamari w/ Aioli dip";
		break;
	}
	cout<<endl;
	}
	
//Soup Choice
	cout<<endl<<td<<"Choose your soup:\n";
	cout<<" • Enter the Item Price:\n";
	cout<<"\t200.) Mushroom Soup\n";
	cout<<"\t250.) Crab & Corn Chowder\n";
	cout<<"\t255.) Carrot Vichyssoise\n";
	cout<<"\t280.) Cosommé\n"<<endl;
	int sp;
	cout<<"choice:";
	cin>>sp;
	{
		while (sp!=200 && sp!=250 && sp!=255 && sp!=280){
			cout<<"Invalid Output! Try Again: ";
			cin>>sp;
		}
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
		cout<<"Cosommé";
		break;
	}
	cout<<endl;
	}
	
	//Salad Choice
	cout<<endl<<td<<"Choose your Salad:\n";
	cout<<" • Enter the Item Price:\n";
	cout<<"\t210.) Caesar Salad\n";
	cout<<"\t230.) Waldorf\n";
	cout<<"\t205.) Mixed Green Salad\n";
	cout<<"\t240.) Calypso\n"<<endl;
	int sld;
	cout<<"choice:";
	cin>>sld;
	{
			while (sld!=210 && sld!=230 && sld!=205 && sld!=240){
			cout<<"Invalid Output! Try Again: ";
			cin>>sld;
		}
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
	
	//Main Course Choice
	cout<<endl<<td<<"Choose your Main Course:\n";
	cout<<" • Enter the Item Price:\n";
	cout<<"\t350.) Grilled Tenderloin Steak\n";
	cout<<"\t300.) Cordon Bleu\n";
	cout<<"\t290.) Salisbury Steak\n";
	cout<<"\t275.) Fish Piccata\n"<<endl;
	int mc;
	cout<<"choice:";
	cin>>mc;
	{
			while (mc!=350 && mc!=300 && mc!=290 && mc!=275){
			cout<<"Invalid Output! Try Again: ";
			cin>>mc;
		}
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
	
	//Dessert Choice
	cout<<endl<<td<<"Choose your Dessert:\n";
	cout<<" • Enter the Item Price:\n";
	cout<<"\t105.) Floating Island\n";
	cout<<"\t125.) Créme Brûlée\n";
	cout<<"\t135.) Panna Cotta\n";
	cout<<"\t100.) Pavlova\n"<<endl;
	int dsrt;
	cout<<"choice:";
	cin>>dsrt;
	{
			while (dsrt!=105 && dsrt!=125 && dsrt!=135 && dsrt!=100){
			cout<<"Invalid Output! Try Again: ";
			cin>>dsrt;
		}
		cout<<endl<<guest<<"For my dessert give me... ";
	switch (dsrt)
	{
		case 105:
		cout<<"Floating Island";
		break;
		case 125:
		cout<<"Créme Brûlée";
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
	
	//Wine Selection
	cout<<endl<<td<<"Choose your Wine:\n";
	cout<<" • Enter the Item Price:\n";
	cout<<"\t500.) Carlo Rossi\n";
	cout<<"\t450.) Listel\n";
	cout<<"\t480.) Novellino\n"<<endl;
	int wn;
	cout<<"choice:";
	cin>>wn;
	{
			while (wn!=500 && wn!=450 && wn!=480){
			cout<<"Invalid Output! Try Again: ";
			cin>>wn;
		}
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
	
	
	//Repeat Order
	cout<<"\n\n"<<waiter<<"May I repeat your order?\n\tEnter:  Y = Yes\n\t\tN = No"<<endl<<"Your Answer: ";
	char answer;
	cin>>answer;
	
	while (answer != 'N'){
		while (answer!='Y' && answer!='N'){
			cout << "invalid input!! try again" << endl;
			cin>>answer;
		}
		
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
		cout<<"Cosommé";
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
		cout<<"Créme Brûlée";
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
	cout<<"\n\n"<<waiter<<"Would you like a Receipt?\n\tEnter:  Y = Yes\n\t\tN = No"<<endl<<"Your Answer: ";
	cin>>answer;
	
	while (answer != 'N'){
		while (answer!='Y' && answer!='N'){
			cout << "invalid input!! try again" << endl;
			cin>>answer;
			break;
		}
	cout<<"____________________________________________________________"<<endl;
cout<<"-----------------|   QinYing Restaurant   |-----------------\n";
cout<<"\t      -------> Order Receipt <-------"<<endl;
	switch (app)
	{
		case 120:
		cout<<"• Potato Croquettes =\t\t"<<peso<<"120"<<endl;
		break;
		case 110:
		cout<<"• Thai Fish Cake =\t\t"<<peso<<"110"<<endl;
		break;
		case 150:
		cout<<"• Cheesy Baked Mussels =\t"<<peso<<"150"<<endl;
		break;
		case 130:
		cout<<"• Calamari w/ Aioli dip =\t"<<peso<<"130"<<endl;
		break;
	}
	switch (sp)
	{
		case 200:
		cout<<"• Mushroom Soup =\t\t"<<peso<<"200"<<endl;
		break;
		case 250:
		cout<<"• Crab & Corn Chowder =\t\t"<<peso<<"250"<<endl;
		break;
		case 255:
		cout<<"• Carrot Vichyssoise =\t\t"<<peso<<"255"<<endl;
		break;
		case 280:
		cout<<"• Cosommé =\t\t\t"<<peso<<"280"<<endl;
		break;
	}
	switch (sld)
	{
		case 210:
		cout<<"• Caesar Salad =\t\t"<<peso<<"210"<<endl;
		break;
		case 230:
		cout<<"• Waldorf =\t\t\t"<<peso<<"230"<<endl;
		break;
		case 205:
		cout<<"• Mixed Green Salad =\t\t"<<peso<<"205"<<endl;
		break;
		case 240:
		cout<<"• Calypso Salad =\t\t"<<peso<<"240"<<endl;
		break;
	}
	switch (mc)
	{
		case 350:
		cout<<"• Grilled Tenderloin Steak =\t"<<peso<<"350"<<endl;
		break;
		case 300:
		cout<<"• Cordon Bleu =\t\t\t"<<peso<<"300"<<endl;
		break;
		case 290:
		cout<<"• Salisbury Steak =\t\t"<<peso<<"290"<<endl;
		break;
		case 275:
		cout<<"• Fish Piccata =\t\t"<<peso<<"275"<<endl;
		break;
	}
	switch (dsrt)
	{
		case 105:
		cout<<"• Floating Island =\t\t"<<peso<<"105"<<endl;
		break;
		case 125:
		cout<<"• Créme Brûlée =\t\t"<<peso<<"125"<<endl;
		break;
		case 135:
		cout<<"• Panna Cotta =\t\t\t"<<peso<<"135"<<endl;
		break;
		case 100:
		cout<<"• Pavlova =\t\t\t"<<peso<<"100"<<endl;
		break;
	}
	switch (wn)
	{
		case 500:
		cout<<"• Carlo Rossi =\t\t\t"<<peso<<"500"<<endl;
		break;
		case 450:
		cout<<"• Listel =\t\t\t"<<peso<<"450"<<endl;
		break;
		case 480:
		cout<<"• Novellino =\t\t\t"<<peso<<"480"<<endl;
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
	cout<<"\n\nThank you for Dining with us! We look forward for your next visit! :-)";
	
	return 0;
}