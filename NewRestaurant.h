#ifndef NEWRESTAURANT_H
#define NEWRESTAURANT_H

using std::cin;
using std::cout;
using std::endl;
using std::setw;

class NewRestaurants
{
private:
    int userChoice, FinalCountItem = 0;
    int CountItem = 0;
    int PriceItem = 0;
    int EnterItems = 0;
    char MoreItem;

public:
   
   void DisplayMenuCard()
    {
       cout << endl
            << "--MENU CARD--" << endl;
       cout << "1]SANDWICHES                     2]BURGER                      3]PIZZA                       4]TOASTS                      5]SOMETHING SPECIAL" << endl
            << "  Plain Veg                        Veggie Aalu Tikki             Veg Cheese                    Cheese Chilli Toast           Nachos Salsa" << endl
            << "  Diet Grilled                     Corn Tikki                    Mexican Veg                   Cheese Corn Toast             Cheese Nachos Salsa" << endl
            << "  Veg Grill                        Cheesy Crunch                 Baby Corn                     Schezwan Paneer Toast         Alfredo Pasto" << endl
            << "  Veg Cheese                       Yuva Special Story            Mushroom Pizza                                              Arrabiata Pasta" << endl
            << "  Schezwan Corn                                                  Chef's Cheesy Choice                                        Veg Lasagna" << endl;
    }
   
   
    void MainFunction()
	{
		cout << setw(70) << " --Welcome to the Restaurant-- \n"<< endl;
	   	do{
	    	DisplayMenuCard();
			cout << endl
			<< "What would you like to have: ";
	  		cin >> userChoice;
	       	cout << endl;
		    switch (userChoice)
		    {
		       case 1:
		           Sandwiches();
		           break;
		
		       case 2:
		           Burger();
		           break;
		
		       case 3:
		           Pizza();
		           break;
		
		       case 4:
		           Toasts();
		           break;
		
		       case 5:
		           SomethingSpecial();
		           break;
		
		       default:
		           cout << "Enter valid choice" << endl;
		           break;
		   	}
	   		cout << "\nDo you want to order more from our menu: " << endl
	   		<< "Press Y for Yes and N for No: ";
			cin >> MoreItem;
		}while(MoreItem == 'Y' || MoreItem == 'y');
		cout<< "Have a good day!" << endl;        
	}	


void PrintBill()
{
    cout << "\n\n\tBill" << endl;
    cout << "Your Bill is: Rs.";
   cout << PriceItem << endl;
   cout << "Total Items:";
   cout << FinalCountItem << endl;
   cout << "--Visit Again!!!--"<<endl;
}
   
   
    void CountTotalItems()
{
   cout << "How many items you want to order: ";
   cin >> EnterItems;
   cout << endl;
   CountItem = CountItem + EnterItems;
   FinalCountItem += CountItem;
}
   
    int CountTotalPrice(int temp)
{
    PriceItem = PriceItem + (temp * CountItem);
    return PriceItem;
}
   
    void Sandwiches()
{
   int SandwichChoice, tempSandwich;
   int SandwichPriceArray[5] = {119, 69, 89, 99, 99};

do{

   cout << "Sandwiches Menu:" << endl
        << "#1 Plain Veg              119/-" << endl
        << "#2 Diet Grilled           69/-" << endl
        << "#3 Veg Grill              89/-" << endl
        << "#4 Veg Cheese             99/-" << endl
        << "#5 Schezwan Corn          99/-" << endl
        << "#6 Exit" << endl;

   cout << "Enter barcode number of your choice: ";
   cin >> SandwichChoice;
   switch (SandwichChoice)
   {
   case 1:
       CountTotalItems();
       tempSandwich = SandwichPriceArray[0];
       PriceItem = CountTotalPrice(tempSandwich);
       CountItem = 0;
       break;

   case 2:
       CountTotalItems();
       tempSandwich = SandwichPriceArray[1];
       PriceItem = CountTotalPrice(tempSandwich);
       CountItem = 0;
       break;

   case 3:
       CountTotalItems();
       tempSandwich = SandwichPriceArray[2];
       PriceItem = CountTotalPrice(tempSandwich);
       CountItem = 0;
       break;

   case 4:
       CountTotalItems();
       tempSandwich = SandwichPriceArray[3];
       PriceItem = CountTotalPrice(tempSandwich);
       CountItem = 0;
       break;

   case 5:
       CountTotalItems();
       tempSandwich = SandwichPriceArray[4];
       PriceItem = CountTotalPrice(tempSandwich);
       CountItem = 0;
       break;

   case 6:
       break;

   default:
       cout << "Please enter valid barcode number" << endl;
       break;
   }
   cout << "Do you want to order more from this Sandwich Menu: " << endl
        << "Y for Yes and N for No: ";
   cin >> MoreItem;
}while(MoreItem == 'Y' || MoreItem == 'y');
   
    cout << "Thank you for your order!" << endl;
}

void Burger()
{
   int BurgerChoice, tempBurger;
   int BurgerPriceArray[4] = {59, 69, 79, 149};

do{
   cout << "Burger Menu:" << endl
        << "#1 Veggie Aalu Tikki              59/-" << endl
        << "#2 Corn Tikki                     69/-" << endl
        << "#3 Cheesy Crunch                  79/-" << endl
        << "#4 Yuva Special Story            149/-" << endl
        << "#5 Exit" << endl;

   cout << "Enter barcode number of your choice: ";
   cin >> BurgerChoice;
   switch (BurgerChoice)
   {
   case 1:
       CountTotalItems();
       tempBurger = BurgerPriceArray[0];
       PriceItem = CountTotalPrice(tempBurger);
       CountItem = 0;
       break;

   case 2:
       CountTotalItems();
       tempBurger = BurgerPriceArray[1];
       PriceItem = CountTotalPrice(tempBurger);
       CountItem = 0;
       break;

   case 3:
       CountTotalItems();
       tempBurger = BurgerPriceArray[2];
       PriceItem = CountTotalPrice(tempBurger);
       CountItem = 0;
       break;

   case 4:
       CountTotalItems();
       tempBurger = BurgerPriceArray[3];
       PriceItem = CountTotalPrice(tempBurger);
       CountItem = 0;
       break;

   case 5:
       break;

   default:
       cout << "Please enter valid barcode number" << endl;
       break;
   }
   cout << "Do you want to order more from this Burger Menu: " << endl
        << "Y for Yes and N for No: ";
   cin >> MoreItem;
}while(MoreItem == 'Y' || MoreItem == 'y');
   
   cout << "Thank you for your order!" << endl;
}

void Pizza()
{
   int PizzaChoice, tempPizza;
   int PizzaPriceArray[5] = {109, 129, 129, 139, 159};

do{
   cout << "Pizza Menu:" << endl
        << "#1 Veg Cheese                  109/-" << endl
        << "#2 Mexican Veg                 129/-" << endl
        << "#3 Baby Corn                   129/-" << endl
        << "#4 Mushroom Pizza              139/-" << endl
        << "#5 Chef's Cheesy Choice        159/-" << endl
        << "#6 Exit" << endl;

   cout << "Enter barcode number of your choice: ";
   cin >> PizzaChoice;
   switch (PizzaChoice)
   {
   case 1:
       CountTotalItems();
       tempPizza = PizzaPriceArray[0];
       PriceItem = CountTotalPrice(tempPizza);
       CountItem = 0;
       break;

   case 2:
       CountTotalItems();
       tempPizza = PizzaPriceArray[1];
       PriceItem = CountTotalPrice(tempPizza);
       CountItem = 0;
       break;

   case 3:
       CountTotalItems();
       tempPizza = PizzaPriceArray[2];
       PriceItem = CountTotalPrice(tempPizza);
       CountItem = 0;
       break;

   case 4:
       CountTotalItems();
       tempPizza = PizzaPriceArray[3];
       PriceItem = CountTotalPrice(tempPizza);
       CountItem = 0;
       break;

   case 5:
       CountTotalItems();
       tempPizza = PizzaPriceArray[4];
       PriceItem = CountTotalPrice(tempPizza);
       CountItem = 0;
       break;

   case 6:
       break;

   default:
       cout << "Please enter valid barcode number" << endl;
       break;
   }
   cout << "Do you want to order more from this Pizza Menu: " << endl
        << "Y for Yes and N for No: ";
   cin >> MoreItem;
}while(MoreItem == 'Y' || MoreItem == 'y');
   cout << "Thank you for your order!" << endl;
}

void Toasts()
{
   int ToastsChoice, tempToasts;
   int ToastsPriceArray[3] = {119, 119, 129};

do{
   cout << "Toasts Menu:" << endl
        << "#1 Cheese Chilli Toast             119/-" << endl
        << "#2 Cheese Corn Toast               119/-" << endl
        << "#3 Schezwan Paneer Toast           129/-" << endl
        << "#4 Exit" << endl;

   cout << "Enter barcode number of your choice: ";
   cin >> ToastsChoice;
   switch (ToastsChoice)
   {
   case 1:
       CountTotalItems();
       tempToasts = ToastsPriceArray[0];
       PriceItem = CountTotalPrice(tempToasts);
       CountItem = 0;
       break;

   case 2:
       CountTotalItems();
       tempToasts = ToastsPriceArray[1];
       PriceItem = CountTotalPrice(tempToasts);
       CountItem = 0;
       break;

   case 3:
       CountTotalItems();
       tempToasts = ToastsPriceArray[2];
       PriceItem = CountTotalPrice(tempToasts);
       CountItem = 0;
       break;

   case 4:
       break;

   default:
       cout << "Please enter valid barcode number" << endl;
       break;
   }
   cout << "Do you want to order more from this Toasts Menu: " << endl
        << "Y for Yes and N for No: ";
   cin >> MoreItem;
}while(MoreItem == 'Y' || MoreItem == 'y');
   
   cout << "Thank you for your order!" << endl;
}

void SomethingSpecial()
{
   int SomethingSpecialChoice, tempSomethingSpecial;
   int SomethingSpecialPriceArray[5] = {119, 129, 139, 139, 199};

do{
   cout << "SomethingSpecial Menu:" << endl
        << "#1 Nachos Salsa                    119/-" << endl
        << "#2 Cheese Nachos Salsa             129/-" << endl
        << "#3 Alfredo Pasta                   139/-" << endl
        << "#4 Arrabiata Pasta                 139/-" << endl
        << "#5 Veg Lasagna                     199/-" << endl
        << "#6 Exit" << endl;

   cout << "Enter barcode number of your choice: ";
   cin >> SomethingSpecialChoice;
   switch (SomethingSpecialChoice)
   {
   case 1:
       CountTotalItems();
       tempSomethingSpecial = SomethingSpecialPriceArray[0];
       PriceItem = CountTotalPrice(tempSomethingSpecial);
       CountItem = 0;
       break;

   case 2:
       CountTotalItems();
       tempSomethingSpecial = SomethingSpecialPriceArray[1];
       PriceItem = CountTotalPrice(tempSomethingSpecial);
       CountItem = 0;
       break;

   case 3:
       CountTotalItems();
       tempSomethingSpecial = SomethingSpecialPriceArray[2];
       PriceItem = CountTotalPrice(tempSomethingSpecial);
       CountItem = 0;
       break;

   case 4:
       CountTotalItems();
       tempSomethingSpecial = SomethingSpecialPriceArray[3];
       PriceItem = CountTotalPrice(tempSomethingSpecial);
       CountItem = 0;
       break;

   case 5:
       CountTotalItems();
       tempSomethingSpecial = SomethingSpecialPriceArray[4];
       PriceItem = CountTotalPrice(tempSomethingSpecial);
       CountItem = 0;
       break;

   case 6:
       break;

   default:
       cout << "Please enter valid barcode number" << endl;
       break;
   }
   cout << "Do you want to order more from this SomethingSpecial Menu: " << endl
        << "Y for Yes and N for No: ";
   cin >> MoreItem;
   }while(MoreItem == 'Y' || MoreItem == 'y');
   
   cout << "Thank you for your order!" << endl;
}



};

#endif
