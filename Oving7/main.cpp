#include <iostream>
#include "DynamicMemory.h"
#include "Matrix.h"
#include "Dummy.h"

int main() {
	// Her kan du teste din kode ved å kalle på de ulike funksjonene du har implementert	

	while (1) {
        using namespace std;
		cout << "Menu\n"
			<< "0.\tAvslutt\n"
			<< "1.\ttestLagMatrise\n"
			<< "2.\tPrintMatrise\n"
			<< "3.\ttestAddCourse\n"
			<< "4.\ttestRemoveCourse\n"
            << "5.\ttestGetCourse\n"
            << "6.\ttempCourseCatalog\n"
			<< "7.\ttemp\n"
            << "8.\ttemp\n"
            << "9.\tbouncingBall\n"
            << "10.\ttemp\n"
            << "11.\ttemp\n"
            << "12.\ttemp\n"
            << "13.\ttemp\n"
            << "14.\ttemp\n"
			<< "Input: ";

		int menu_choice;
		cin >> menu_choice;

        int rowsss;
        
        cin >> rowsss;
        Matrix matrise{rowsss};
		
		switch (menu_choice) {
        case 0:
            return 0;
            break;

        case 1:
        
            return 0;
            break;

        case 2:
            cout << matrise << endl;
            break;

        case 3:
            return 0;
            break;

        case 4:
            return 0;
            break;

        case 5:
            return 0;
            break;

        case 6:
            return 0;
            break;

        case 7:
            return 0;
            break;

        case 8:
            return 0;
            break;

        case 9:
            return 0;
            break;

        case 10:
            return 0;
            break;

        case 11:
            return 0;
            break;

		default:
			
			break;
		}
	}

    createFibonacci();
	return 0;
}