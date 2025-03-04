#include "Person.h"
//#include "Meeting.h"
//#include "MeetingWindow.h"
#include <iostream>

int main()
{
	// Her kan du teste koden din
	while (1) {
        using namespace std;
		cout << "Menu\n"
			<< "0.\tAvslutt\n"
			<< "1.\ttestPrintPerson\n"
			<< "2.\ttest\n"
			<< "3.\ttest\n"
			<< "4.\ttest\n"
            << "5.\ttest\n"
            << "6.\ttest\n"
			<< "7.\ttest\n"
            << "8.\ttest\n"
            << "9.\ttest\n"
            << "10.\ttest\n"
            << "11.\ttest\n"
            << "12.\ttest\n"
            << "13.\ttest\n"
            << "14.\ttest\n"
			<< "Input: ";


		Person Filip{"Filip S", "filip@email.com"};
		Person Kule_Filip{"Kule Filip S", "kulefilip@email.com", std::make_unique<Car>(20)};
		Person Rare_Filip{"Rare Filip S", "rarefilip@email.com", std::make_unique<Car>(1)};

		int menu_choice;
		cin >> menu_choice;
		switch (menu_choice) {
        case 0:
            return 0;
            break;

        case 1:
			std::cout << Filip << "\n";
			std::cout << Kule_Filip << "\n";
			std::cout << Rare_Filip << "\n";
        
            return 0;
            break;

        case 2:
			return 0;
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

	return 0;
}
