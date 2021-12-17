#ifndef Order_HEADER
#define Order_HEADER
#include<vector>
#include"Item.h"
class Order{
public:
	void printContentsOfOrder();
	void printTotalPrice();
	void insertItem(Item item);
private:
	std::vector<Item> itemList;
};
#endif