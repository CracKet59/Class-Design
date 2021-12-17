#include<iostream>
#include"Order.h"
void Order::printContentsOfOrder() {
	std::cout << "\n======================================";
	std::cout << "\nOrder:";
	for (auto& item : itemList) {
		std::cout << "\n" << item.getItemName()
			<< " X " << item.getItemStock()
			<< " item price: " << item.getItemPrice()
			<< " total Price: " << item.getItemPrice() * item.getItemStock();
	}
}
void Order::printTotalPrice() {
	std::cout << "\n======================================";
	std::cout << "\nTotal Order Price:";
	double price = 0.0;
	for (auto& item : itemList) {
		price += item.getItemPrice();
	}
	std::cout << price;
}

void Order::insertItem(Item item) {
	if (itemList.size() < 10)
		itemList.push_back(item);
	else
		std::cout << "\nNo More than 10 Orders.";
}

