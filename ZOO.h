#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class animal
{
    protected:
    string name;
    int age;
    double weight;
    bool fed{false};

    public:
    // constructor
    animal(const string& _name, int _age, double _weight)
    : name(_name), age(_age), weight(_weight){}

    //setter functions

    void setname(const string& _name){name =_name;}
    void setage(int _age){age = _age;}
    void setweight (double _weight){weight =_weight;}
    void setfed(bool value){fed = value;}

    //getter functions

    const string get_name(){return name;}
    const int get_age(){return age;}
    const double get_Weight(){return weight;}

    // virtual dynamic binding animal description functions

    virtual void animal_description() const 
    {
        cout << "My name is: "<< name << endl;
        cout << "My age is: "<< age << endl;
        cout << "My Weight is: "<< weight << endl;
    }
    virtual void amifed() const
    {
        cout << "Am i fed ?"<< (fed ? "true": "false") <<endl;
    }
    virtual void makeSound() const
    {
        cout << "Some generic animal sound.\n";
    }
    virtual void eat() const
    {
        cout << "Eating generic animal food.\n";
    }
};

class Dog: public animal
{
    protected:
    string breed;

    public:
    Dog(const string& _breed,const string& _name, int _age, double _weight):
    animal(_name,_age,_weight),breed(_breed){}

    virtual void animal_description() const override
    {
        cout << "My name is: "<< name << endl;
        cout << "My age is: "<< age << endl;
        cout << "My Weight is: "<< weight << endl;
        cout << "I belong to family of: "<< breed<<endl;

    }
    void makeSound() const override
    {
        cout << "Woof! Woof!\n";
    }
    void eat() const override
    {
        cout << "Eating dog food.\n";
    }
    void amifed() const
    {
        cout << "Am i fed ?"<< (fed ? "true": "false") <<endl;
    }
};
class Tiger: public animal
{
    protected:
    string type;

    public:
    Tiger(const string& _type,const string& _name, int _age, double _weight):
    animal(_name,_age,_weight),type(_type){}

    virtual void animal_description() const override 
    {
        cout << "My name is: "<< name << endl;
        cout << "My age is: "<< age << endl;
        cout << "My Weight is: "<< weight << endl;
        cout << "I am really powefull "<<endl;
        cout << "i belong to family of "<< type<< endl;

    }
    void makeSound() const override
    {
        cout << "Roarrrrrr!\n";
    }
    void eat() const override
    {
        cout << "Eating meat.\n";
    }
    void amifed() const
    {
        cout << "Am i fed ?"<< (fed ? "true": "false") <<endl;
    }
};
class Lion: public animal
{
    protected:
    string liontype;

    public:
    Lion(const string& _liontype,const string& _name, int _age, double _weight):
    animal(_name,_age,_weight),liontype(_liontype){}

    virtual void animal_description() const override 
    {
        cout << "My name is: "<< name << endl;
        cout << "My age is: "<< age << endl;
        cout << "My Weight is: "<< weight << endl;
        cout << "I roar like thunder rrrhhrhrhrhhrhrhrhr "<<endl;
        cout << "i belong to family of "<< liontype<< endl;

    }
    void makeSound() const override
    {
        cout << "Rrrrrrrrrrrrr!\n";
    }
    void eat() const override
    {
        cout << "Eating meat.\n";
    }
    void amifed() const
    {
        cout << "Am i fed ?"<< (fed ? "true": "false") <<endl;
    }
};
class Elephant: public animal
{
    protected:
    string type;

    public:
    Elephant(const string& _type,const string& _name, int _age, double _weight):
    animal(_name,_age,_weight),type(_type){}

    virtual void animal_description() const override 
    {
        cout << "My name is: "<< name << endl;
        cout << "My age is: "<< age << endl;
        cout << "My Weight is: "<< weight << endl;
        cout << "I weight a lot" <<endl;
        cout << "i belong to family of "<< type<< endl;
    }
    void makeSound() const override
    {
        cout << "Trumpet! Trumpet!\n";
    }
    void eat() const override
    {
        cout << "Eating plants and fruits.\n";
    }
    void amifed() const
    {
        cout << "Am i fed ?"<< (fed ? "true": "false") <<endl;
    }
};
class Giraffe: public animal
{
    protected:
    string type;

    public:
    Giraffe(const string& _type,const string& _name, int _age, double _weight):
    animal(_name,_age,_weight),type(_type){}

    virtual void animal_description() const override 
    {
        cout << "My name is: "<< name << endl;
        cout << "My age is: "<< age << endl;
        cout << "My Weight is: "<< weight << endl;
        cout << "I am really tall"<< endl;
        cout << "i belong to family of "<< type<< endl;
    }
    void makeSound() const override
    {
        cout << "Silent (Giraffes are generally quiet animals).\n";
    }
    void eat() const override
    {
        cout << "Eating leaves from tall trees.\n";
    }
    void amifed() const
    {
        cout << "Am i fed ?"<< (fed ? "true": "false") <<endl;
    }
};
class Dolphin: public animal
{
    protected:
    string type;

    public:
    Dolphin(const string& _type,const string& _name, int _age, double _weight):
    animal(_name,_age,_weight),type(_type){}

    virtual void animal_description() const override 
    {
        cout << "My name is: "<< name << endl;
        cout << "My age is: "<< age << endl;
        cout << "My Weight is: "<< weight << endl;
        cout << "I am really friendly" <<endl;
        cout << "i belong to family of "<< type<< endl;
    }
    void makeSound() const override
    {
        cout << "Clicks and whistles (Dolphins communicate using echolocation).\n";
    }
    void eat() const override
    {
        cout << "Eating fish and squid.\n";
    }
    void amifed() const
    {
        cout << "Am i fed ?"<< (fed ? "true": "false") <<endl;
    }
};
class bird: public animal
{
    protected:
    string type;

    public:
    bird(const string& _type,const string& _name, int _age, double _weight):
    animal(_name,_age,_weight),type(_type){}

    virtual void animal_description() const override
    {
        cout << "My name is: "<< name << endl;
        cout << "My age is: "<< age << endl;
        cout << "My Weight is: "<< weight << endl;
        cout << "I am really friendly" <<endl;
        cout << "i belong to family of "<< type<< endl;
    }
    void makeSound() const override
    {
        cout << "Chirp! Chirp!\n";
    }
    void eat() const override
    {
        cout << "Eating bird seeds and insects.\n";
    }
    void amifed() const
    {
        cout << "Am i fed ?"<< (fed ? "true": "false") <<endl;
    }
};
class eagle: public bird
{
    protected:
    bool isendangered;

    public:
    eagle(const string& _type,const string& _name, int _age, double _weight,bool _isendangered):
    bird(_type,_name,_age,_weight),isendangered(_isendangered){}

    virtual void animal_description() const override 
    {
        cout << "My name is: "<< name << endl;
        cout << "My age is: "<< age << endl;
        cout << "My Weight is: "<< weight << endl;
        cout << "I am really friendly" <<endl;
        cout << "i belong to family of "<< type<< endl;
        cout << "Am i belong to endangered species: "<<isendangered<<endl;
    }
    void makeSound() const override
    {
        cout << "Screech! Screech!\n";
    }
    void eat() const override
    {
        cout << "Eating small animals and fish.\n";
    }
    void amifed() const
    {
        cout << "Am i fed ?"<< (fed ? "true": "false") <<endl;
    }
};
class baldeagle: public eagle
{
    protected:
    string origin;

    public:
    baldeagle(const string& _type,const string& _name, int _age, double _weight,bool _isendangered, string& _origin):
    eagle(_type,_name,_age,_weight,_isendangered),origin(_origin){}

    virtual void animal_description() const override 
    {
        cout << "My name is: "<< name << endl;
        cout << "My age is: "<< age << endl;
        cout << "My Weight is: "<< weight << endl;
        cout << "I am really friendly" <<endl;
        cout << "i belong to family of "<< type<< endl;
        cout << "Am i belong to endangered species: "<<isendangered<<endl;
        cout << "I am from : "<< origin;
    }
    void makeSound() const override
    {
        cout << "High-pitched screech! High-pitched screech!\n";
    }
    void eat() const override
    {
        cout << "Eating fish from lakes and rivers.\n";
    }
    void amifed() const
    {
        cout << "Am i fed ?"<< (fed ? "true": "false") <<endl;
    }
};

class zoo
{
    protected:
    vector <animal *> animals;
    public:
    
    void add_animal(animal* Animal)
    {
        animals.push_back(Animal);
        cout<<"Animal added succesfully"<<endl;
    }
    
    void remove_animal(string input)
    {
        bool animal_found = false;
        for(auto it = animals.begin(); it != animals.end(); ++it)
        {
            if((*it)->get_name() == input)
            {
                delete *it;
                animals.erase(it);
                cout<< "Animal removed succesfully"<<endl;
                animal_found = true;
                break;
            }
            cout<< "Animal did not find"<<endl;
        }
        if(!animal_found)
        {
            cout<<"Animal did not found" <<endl;
        }
    }
    void feeding(string input)
    {
        bool animal_found = false;
        for(auto it = animals.begin(); it != animals.end(); ++it)
        {
            if((*it)->get_name() == input)
            {
                (*it)->setfed(true);
                cout<< "Animal fed succesfully"<<endl;
                animal_found = true;
                break;
            }
        }
        if(!animal_found)
        {
             cout<<"Animal did not found" <<endl;
        }
    }
    void show_description(string input)
    {
        bool animal_found = false;
        for(auto it = animals.begin(); it != animals.end(); ++it)
        {
            if((*it)->get_name() == input)
            {
                (*it)->animal_description();
                (*it)->amifed();
                animal_found = true;
                break;
            }
        }
        if(!animal_found)
        {
            cout<<"Animal did not found"<<endl;
        }
    }

    // destrucor to deallocate memories for animal objects
    ~zoo()
    {
        for (const auto& animalptr :  animals)
        {
            delete animalptr;
        }
    }
};