#include <string>
#include <iostream>

#ifndef FUNCTIONTEMPLATE_CHARACTER_H
#define FUNCTIONTEMPLATE_CHARACTER_H

using namespace std;

class Character {
private:
    string type;
    int level;

public:
    Character(string _type = "Warrior", int _level = 0) : type(_type), level(_level) {}

    string getType() 
    { 
        return type; 
    }

    int getLevel() 
    { 
        return level; 
    }

    void setType(string _type) 
    { 
        type = _type; 
    }

    void setLevel(int _level) 
    { 
        level = _level; 
    }

    //Operator == : two characters are equal if their type and level are the same.
    bool operator==(const Character& other)
    {
        if (type == other.type)
        {
            if (level == other.level)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }

    /*
     *Operator > : character with higher level is larger.
     *If they have the same level, compare using their type. 
     *For example: at the same level, type "Wizard" is larger than "Human" alphabetically
     */
    bool operator>(const Character& other)
    {
        if (level > other.level)
        {
            return true;
        }
        else if (level == other.level)
        {
            if (type > other.type)
            {
                return true;
            }
            else
            {
                return false;
            }  
        }
        else
        {
            return false;
        }
    }
};

ostream& operator<<(ostream& os, Character& character)
{
    os << character.getType() << ": level " << character.getLevel() << endl;
    return os;
}

#endif //FUNCTIONTEMPLATE_CHARACTER_H


