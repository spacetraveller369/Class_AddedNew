#include "Plant.h"

void Plant::SetKind(string k) {
    kind = k;
}
void Plant::SetCountry(string c) {
    country = c;
}
void Plant::SetHeight(double h) {
    if (h >= 1 && h <= 50) {
        height = h;
    }
}
void Plant::SetWeight(double w) {
    if (w >= 1 && w <= 10) {
        weight = w;
    }
}
void Plant::SetColor(string clr) {
    color = clr;
}
void Plant::SetCondition(string cnd) {
    condition = cnd;
}

void Plant::SetDesire(string d) {
    desire = d;
}
void Plant::SetAliveStatus(bool alive) {
    if (alive) {
        is_alive = true;
        cout << "Plant is alive.\n";
    }
}

string Plant::GetKind() {
    return kind;
}
string Plant::GetCountry() {
    return country;
}
double Plant::GetHeight() {
    return height;
}
double Plant::GetWeight() {
    return weight;
}
string Plant::GetColor() {
    return color;
}
string Plant::GetCondition() {
    return condition;
}

string Plant::GetDesire() {
    return desire;
}
bool Plant::GetAliveStatus() {
    return is_alive;
};


void Plant::Drink(string water) {
    cout << GetKind() << " is drinking...\n";
    hungry = false;
    height += 2;
    weight += 2;
}

void Plant::Grow() {
    cout << GetKind() << " is growing...\n";
    activity = 100;
    hungry = true;
    height += 2;
}

void Plant::Give(string oxygen) {
    cout << GetKind() << " is giving me an oxygen to breathe...\n";
}

void Plant::Joy() {
    cout << GetKind() << " is giving a joy to my cat...\n";
}