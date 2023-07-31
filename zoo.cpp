#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include "ZOO.h"

using namespace std;

void show_interactions();
void add_animals(zoo& Agent);
void remove_animals(zoo& Agent);
void feedings(zoo& Agent);
void animal_descriptions(zoo& Agent);


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
    std::cout << "Welcome to Zoo Management System" << std::endl;
    std::cout << "Please choose the animal you want to enter" << std::endl;
    std::cout << "1. Dog" << std::endl;
    std::cout << "2. Tiger" << std::endl;
    std::cout << "3. Lion" << std::endl;
    std::cout << "4. Elephant" << std::endl;
    std::cout << "5. Giraffe" << std::endl;
    std::cout << "6. Dolphin" << std::endl;
    std::cout << "7. Bird" << std::endl;
    std::cout << "8. Eagle" << std::endl;
    std::cout << "9. Bald Eagle" << std::endl;
    std::cout << "0. Exit" << std::endl;
    std::cout << "Enter your choice: ";

    int choice;
    cin >> choice;
    cin.ignore();

    while (cin.fail() || choice < 0 || choice > 9)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid choice (0 to 9): ";
        cin >> choice;
        cin.ignore();
    }

    string N;
    cout << "Enter the name of the animal: ";
    getline(cin, N);

    int A;
    cout << "Enter the age of the animal: ";
    cin >> A;

    while (cin.fail() || A < 0)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid age (non-negative integer): ";
        cin >> A;
    }

    double W;// wight
    cout << "Enter the weight of the animal: ";
    cin >> W;
    

    while (cin.fail() || W < 0)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a valid weight (non-negative number): ";
        cin >> W;
    }
    cin.ignore();

    switch (choice)
    {
        case 1:
        {
            string breed;
            cout << "Enter the breed of the dog: ";
            getline(cin, breed);
            Agent.add_animal(new Dog(breed, N, A, W));
            break;
        }
        case 2:
        {
            string type;
            cout << "Enter the type of the tiger: ";
            getline(cin, type);
            Agent.add_animal(new Tiger(type, N, A, W));
            break;
        }
        case 3:
        {
            string liontype;
            cout << "Enter the type of the lion: ";
            getline(cin, liontype);
            Agent.add_animal(new Lion(liontype, N, A, W));
            break;
        }
        case 4:
        {
            string type;
            cout << "Enter the type of the elephant: ";
            getline(cin, type);
            Agent.add_animal(new Elephant(type, N, A, W));
            break;
        }
        case 5:
        {
            string type;
            cout << "Enter the type of the giraffe: ";
            getline(cin, type);
            Agent.add_animal(new Giraffe(type, N, A, W));
            break;
        }
        case 6:
        {
            string type;
            cout << "Enter the type of the dolphin: ";
            getline(cin, type);
            Agent.add_animal(new Dolphin(type, N, A, W));
            break;
        }
        case 7:
        {
            string type;
            cout << "Enter the type of the bird: ";
            getline(cin, type);
            Agent.add_animal(new bird(type, N, A, W));
            break;
        }
        case 8:
        {
            string type;
            cout << "Enter the type of the eagle: ";
            getline(cin, type);
            bool isEndangered;
            cout << "Is the eagle endangered? (1 for yes, 0 for no): ";
            cin >> isEndangered;
            cin.ignore();
            Agent.add_animal(new eagle(type, N, A, W, isEndangered));
            break;
        }
        case 9:
        {
            string type;
            cout << "Enter the type of the bald eagle: ";
            getline(cin, type);
            bool isEndangered;
            cout << "Is the bald eagle endangered? (1 for yes, 0 for no): ";
            cin >> isEndangered;
            cin.ignore();
            string origin;
            cout << "Enter the origin of the bald eagle: ";
            getline(cin, origin);
            Agent.add_animal(new baldeagle(type, N, A, W, isEndangered, origin));
            break;
        }
        case 0:
            std::cout << "Exiting Zoo Management System." << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please enter a valid option." << std::endl;
            break;
    }
}

void remove_animals(zoo& Agent)
{
    string get;
    cout << "Enter the name of the animal You want to remove: "<<endl;
    getline(cin,get);
    Agent.remove_animal(get);
};

void feedings(zoo& Agent)
{
    string get;
    cout<<"Enter the name of the animal You want to feed: "<<endl;
    getline(cin,get);
    Agent.feeding(get);
}
void animal_descriptions(zoo& Agent)
{
    string get;
    cout<<"Enter the name of the animal You want to see: "<<endl;
    getline(cin,get);
    Agent.show_description(get);
}

