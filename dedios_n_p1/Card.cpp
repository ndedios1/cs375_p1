/*Card.cpp*/

#include <sstream>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "Card.h"

using namespace std;

Card::Card(){
	name;
	price;
}

Card::Card(string n, int mprice){
	name = n;
	price = mprice;
}

string Card::getName(){
	return name;
}

int Card::getPrice(){
	return price;
}


void Card::printCard(){
	cout << "Name: " << name << " Price: " << price << "\n";
}

string Card::out(){
	string price_string = to_string(price);
	string ret_string = "Name: " + name + "\t" + "Price: " + price_string;
	return ret_string;
}
