#include "std_lib_facilities.h"
#include "CourseCatalog.h"
#include "FileUtils.h"
#include "bouncingBall.h"

CourseCatalog ntnu;

int main()
{
	// Her kan du teste din kode ved å kalle på de ulike funksjonene du har implementert	
	string emne;
	string beskrivelse;

	while (1) {
		cout << "Menu\n"
			<< "0.\tAvslutt\n"
			<< "1.\ttestInputToFile\n"
			<< "2.\ttestLineNumber\n"
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
        
		
		switch (menu_choice)
		{
        case 0:
            return 0;
            break;

        case 1:
            writeUserInputToFile("testfil.txt");
            break;

		case 2:
            addLineNumbers("testfil.txt");
            break;

		case 3:
			cin >> emne;
			cin >> beskrivelse;
			ntnu.addCourse(emne, beskrivelse);
			break;

		case 4:
			cin >> emne;
			ntnu.removeCourse(emne);
			break;

		case 5:
			cin >> emne;
			beskrivelse = ntnu.getCourse(emne);
			cout << "Beskrivelse for " << emne << ": " << beskrivelse << endl;
			break;

		case 6:
			testCourseCatalog();
			
            break;

		case 7:
			ntnu.saveToFile("courses.txt");
			break;
		
		case 8:
			ntnu.loadFromFile("courses.txt");

		case 9:
			bouncingBall();
			break;

		default:
			
			break;
		}
	}


	return 0;

}

void testCourseCatalog() {
    ntnu.addCourse("TDT4110", "Informasjonsteknologi grunnkurs");
    ntnu.addCourse("TDT4102", "Prosedyre og objekt");
    ntnu.addCourse("TMA4100", "Matematikk 1");
}