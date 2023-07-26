#include <iostream>
#include <string>
#include <vector>
#include "ZOO.h"

using namespace std;

void show_interactions();
void add_animals(zoo& Agent);
void remove_animals(zoo& Agent){};
void feedings(zoo& Agent){};
void animal_descriptions(const zoo& Agent){};


int main()
{
    zoo Agent;
    int choice;

    do{
        show_interactions();
        cin >> choice;
        cin.ignore();
        switch(choice)
        {
        case 1:
        add_animals(Agent);
        break;
        case 2:
        remove_animals(Agent);
        break;
        case 3:
        feedings(Agent);
        break;
        case 4:
        animal_descriptions(Agent);
        break;
        }
    }while(choice != 0);
    
};

void show_interactions()
{
    cout << "\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
    cout << "ZOO Management System\n";
    cout << "1. Add an Animal\n";
    cout << "2. Remove an Animal\n";
    cout << "3. Feed an animal\n";
    cout << "4. Show description of an animal\n";
    cout << "0. Exit \n";
    cout << "Enter your choice: ";
}
/// @brief 
/// @param Agent 
void add_animals(zoo& Agent)
{
cout << "Welcome to Zoo Management System" << endl;
cout << "Please choose the animal you want to enter" << endl;
cout << "1. Dog" << endl;
cout << "2. Tiger" << endl;
cout << "3. Lion" << endl;
cout << "4. Elephant" << endl;
cout << "5. Giraffe" << endl;
cout << "6. Dolphin" << endl;
cout << "7. Bird" << endl;
cout << "8. Eagle" << endl;
cout << "9. Bald Eagle" << endl;
cout << "0. Exit" << endl;
cout << "Enter your choice: ";

};

