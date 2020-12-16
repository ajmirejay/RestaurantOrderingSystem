#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include "NewRestaurant.h"

using std::cin;
using std::cout;

int main()
{
    bool loopprint = true;
    while(true)
    {
        NewRestaurants obj;
        obj.MainFunction();
        obj.PrintBill();
    }
    return 0;
}
