#include "Person.h"

void Person::SetName(string n) {
    name = n;
}
void Person::SetAge(int a) {
    if (a >= 1 && a <= 100) {
        age = a;
    }
    else {
        cout << "Age is unreal\n";
    }
}
void Person::SetCountry(string c) {
    country = c;
}
void Person::SetHeight(double h) {
    if (h >= 130 && h <= 200) {
        height = h;
    }
    else {
        cout << "Height is unreal\n";
    }
}
void Person::SetWeight(double w) {
    if (w >= 30 && w <= 120) {
        weight = w;
    }
    else {
        cout << "Weight is unreal\n";
    }
}
void Person::SetColorHair(string ch) {
    color_hair = ch;
}
void Person::SetMood(string m) {
    mood = m;
}
void Person::SetHobby(string hb) {
    hobby = hb;
}
void Person::SetDream(string d) {
    dream = d;
}
void Person::SetAliveStatus(bool is_alive) {
    if (is_alive) {
        is_alive = true;
        cout << "The person is alive.\n";
    }
    else {
        is_alive = false;
        cout << "The person is not alive.\n";
    }
}
 void Person::SetHungryStatus(bool hungry) {
        if (hungry) {
            hungry = true;
            cout << "The person is hungry.\n";
        }
        else {
            hungry = false;
            cout << "The person is not hungry.\n";
        }
}


string Person::GetName() {
    return name;
}
int Person::GetAge() {
    return age;
}
string Person::GetCountry() {
    return country;
}
double Person::GetHeight() {
    return height;
}
double Person::GetWeight() {
    return weight;
}
string Person::GetColorHair() {
    return color_hair;
}
string Person::GetMood() {
    return mood;
}
string Person::GetHobby() {
    return hobby;
}
string Person::GetDream() {
    return dream;
}
bool Person::GetAliveStatus() {
    return is_alive;
}
bool Person::GetHungryStatus() {
    return hungry;
}

void Person::Eat(string meal) {
    cout << GetName() << " is eating...\n";
}

void Person::Sleep() {
    cout << GetName() << " sleeps...\n";
    activity = 100;
    hungry = true;
}

void Person::Walk(string street) {
    if (activity > 50)
    {
        cout << GetName() << " walking...";
        activity -= 30;
        exp += 5;
        hungry = true;
        weight -= 2;
    }
}

void Person::Read() {
    cout << GetName() << " is reading...\n";
}

void Person::Work() {
    if (activity < 10) {
        cout << GetName() << "doesn't want to work!";
        return;
    }
    if (hungry) {
        cout << GetName() << "want to eat, not to work!";
        return;
    }
    cout << GetName() << "working...";
    activity -= 10;
    weight -= 0.5;
}


