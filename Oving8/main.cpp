#include "Person.h"
#include "Meeting.h"
#include "MeetingWindow.h"
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

		// MeetingWindow::AnimationWindow mainWindows{TDT4102::Point position, int width, int height, const std::string& title};

        auto filippointer = std::make_shared<Person>("Filip S", "filip@email.com");
        auto kuleFilippointer = std::make_shared<Person>("Kule Filip S", "kulefilip@email.com", std::make_unique<Car>(20));
        auto rareFilippointer = std::make_shared<Person>("Rare Filip S", "rarefilip@email.com", std::make_unique<Car>(1));

        Meeting mote (1, 12, 13, Campus::trh, "prank", filippointer);
        Meeting mote2 (1, 12, 13, Campus::trh, "asdds", filippointer);

        mote.addParticipant(kuleFilippointer);

		int menu_choice;
		cin >> menu_choice;
		switch (menu_choice) {
        case 0:
            return 0;
            break;

        case 1:
			//std::cout << Filip << "\n";
			//std::cout << Kule_Filip << "\n";
			//std::cout << Rare_Filip << "\n";
        
            return 0;
            break;

        case 2:
            cout << mote.findPotentialCoDriving(mote2).size() << endl;

            break;

        case 3: {
            MeetingWindow vindu ({100,100}, 800, 400, "jaja");

            vindu.wait_for_close();
            break;
        }

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
