#include <string>
#include <iostream>
using namespace std;


class Cockroach {

private:
    string name;
    double size;
    int paws_count;
    string color;
    string desire;
    bool is_alive = true;
    bool is_awful = true;
    bool is_dangerous = false;
    bool hungry = true;

    short activity = 100;

public:
    void SetName(string n);
    void SetSize(double s);
    void SetPawsCount(int pc);
    void SetColor(string c);
    void SetDesire(string d);
    void SetAliveStatus(bool alive);
    void SetAfwulStatus(bool awful);
    void SetDangStatus(bool dangerous);
    void SetHungryStatus(bool hungry);



    string GetName();
    double GetSize();
    int GetPawsCount();
    string GetColor();
    string GetDesire();
    bool GetAliveStatus();
    bool GetAwfulStatus();
    bool GetDangStatus();
    bool GetHungryStatus();


    void Eat(string meal);

    void Sleep();

    void Run(string slipper);

    void MakeDisaster();

    void Frighten();
};