#include <iostream>

using namespace std;




class Jet
{
private:
    double damage;
    double HP;
    double speed;
public:
    void printJet()
    {
        cout << "Jet stats: " << endl
             << "Damage: " << getDamage() << endl
             << "HP: " << getHP() << endl
             << "Speed: " << getSpeed() << endl;
    }
    void setDamage()
    {
        cout << "Enter damage: ";
        cin >> damage;
    }
    double getDamage() {return damage;}
    void setHP()
    {
        cout << "Enter HP: ";
        cin >> HP;
    }
    double getHP() {return HP;}
    void setSpeed()
    {
        cout << "Enter Speed: ";
        cin >> speed;
    }
    double getSpeed() {return speed;}
};





class Cruiser : public Jet
{
private:
    double armor;
    int freePlaces;
    int maxPlaces;
public:
    void setArmor()
    {
        cout << "Enter Armor: ";
        cin >> armor;
    }
    double getArmor() {return armor;}
    void placeJets()
    {
        cout << "Enter free places for jets: ";
        cin >> freePlaces;
        maxPlaces = freePlaces;
    }
    int getMaxPlaces(){return maxPlaces;}
    void addJets()
    {
        int flag = freePlaces;
        cout << "Free places: " << freePlaces << endl;
        cout << "Do you want to add a jet on your cruiser?" << endl
             << "1 - Hell Yeah!" << endl
             << "2 - Not now" << endl;
        short choose;
        cin >> choose;
        if (choose == 1)
        {
            if(freePlaces > 0)
            {
                while(choose != 2)
                {
                    freePlaces--;
                    cout << "You have " << flag - freePlaces << " jets" << endl
                         << "Free places: " << freePlaces << endl
                         << "Another one?" << endl
                         << "1 - YES" << endl
                         << "2 - ENOUGH" << endl;
                    cin >> choose;
                }
            }
        }
    }

    int getFreePlaces() {return freePlaces;}

    int combatPower(int Max, int places, double Damage)
    {
        int combatPower = (Max - places) * Damage;
        return combatPower;
    }
    void printCruiser(Jet unit)
    {
        cout << "Cruiser stats: " << endl
             << "HP: " << getHP() << endl
             << "Speed: " << getSpeed() << endl
             << "Armor: " << getArmor() << endl
             << "Free places for jets: " << getFreePlaces() << endl
             << "Combat power: " << combatPower(getMaxPlaces(), getFreePlaces(), unit.getDamage()) << endl
             << "Speed mark: " << unit.getSpeed() << endl;
    }
};



class Flagman : public Cruiser
{
private:
    double fleetSpeed;
    int fleetLarge = 0;
public:

    void addCruiser()
    {
        short choose;
        cout << "DO you want to add a Cruiser into your fleet?" << endl
             << "1 - YES" << endl
             << "2 - NO" << endl;
        cin >> choose;
        if (choose == 1)
        {
            while(choose != 2)
            {
                fleetLarge++;
                cout << "You have " << fleetLarge << " Cruisers in your fleet" << endl;
                cout << "Another one?" << endl
                     << "1 - YES" << endl
                     << "2 - NO" << endl;
                     cin >> choose;
            }
        }
    }
    int getFleetLarge() {return fleetLarge;}

    void setFleetSpeed()
    {
        cout << "Enter fleet speed: ";
        cin >> fleetSpeed;
    }
    double getFleetSpeed() {return fleetSpeed;}

    void printFlagman()
    {
        cout << "Flagman stats: " << endl
             << "HP: " << getHP() << endl
             << "Armor: " << getArmor() << endl
             << "Speed: " << getSpeed() << endl
             << "Fleet Speed: " << getFleetSpeed() << endl
             << "Cruisers on the board: " << getFleetLarge() << endl;
    }


};

void theLine()
{
    cout << "=====================" << endl;
}

Jet setJetStats()
{
    Jet tmp;
    tmp.setDamage();
    tmp.setHP();
    tmp.setSpeed();
    return tmp;
}
Cruiser setCruiserStats()
{
    Cruiser tmp;
    tmp.setHP();
    tmp.setSpeed();
    tmp.setArmor();
    return tmp;
}

Flagman setFlagmanStats()
{
    Flagman tmp;
    tmp.setHP();
    tmp.setArmor();
    tmp.setSpeed();
    tmp.setFleetSpeed();
    return tmp;
}



int main()
{
    theLine();
    cout << "Create you Jet: " << endl;
    theLine();

    Jet JetUnit = setJetStats();

    theLine();

    JetUnit.printJet();

    theLine();
    cout << "Create you Cruiser: " << endl;
    theLine();

    Cruiser CruiserUnit = setCruiserStats();
    CruiserUnit.placeJets();
    CruiserUnit.addJets();

    theLine();

    CruiserUnit.printCruiser(JetUnit);

    theLine();

    cout << "Create your Flagman: " << endl;

    theLine();

    Flagman FlagmanUnit = setFlagmanStats();
    FlagmanUnit.addCruiser();

    theLine();

    FlagmanUnit.printFlagman();

    theLine();


    return 0;
}
