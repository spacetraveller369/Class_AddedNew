#include "Person.h"
#include "Cockroach.h"
#include "Plant.h"
using namespace std;

int main() {

    Person person;

    person.SetName("Ilona");
    person.SetAge(30);
    person.SetCountry("Ukraine");
    person.SetHeight(169);
    person.SetWeight(65);
    person.SetColorHair("brown");
    person.SetMood("good");
    person.SetHobby("reading");
    person.SetDream("wealth");
    person.SetAliveStatus("true");
   

    person.Eat("meal");

    person.Sleep();

    person.Walk("street");

    person.Work();

    person.Read();

    Cockroach cockroach;

    cockroach.SetColor("brown");
    cockroach.SetSize(10);
    cockroach.SetAliveStatus(true);
    cockroach.SetDangStatus(false);
    cockroach.SetHungryStatus(true);
    cockroach.SetAfwulStatus(true);
    cockroach.SetDesire("eat");
    cockroach.SetName("Victor");
    cockroach.SetPawsCount(4);

    cockroach.Eat("garbage");
    cockroach.Run("slipper");
    cockroach.MakeDisaster();
    cockroach.Frighten();

    Plant plant;
    plant.SetKind("hibiscus");
    plant.SetCountry("Ukraine");
    plant.SetHeight(30);
    plant.SetWeight(2);
    plant.SetColor("green");
    plant.SetCondition("good");
    plant.SetDesire("water");

    plant.Drink("water");
    plant.Grow();
    plant.Give("oxygen");
    plant.Joy();
}

