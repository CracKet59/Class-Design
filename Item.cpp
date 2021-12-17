#include"Item.h"
Item::Item(std::string itemName,long itemId,double itemPrice,int itemStock) {
	this->itemName = itemName;
	this->itemId = itemId;
	this->itemPrice = itemPrice;
	this->itemStock = itemStock;
}
std::string Item::getItemName(){ return itemName; }
void Item::setItemName(std::string itemName) { this->itemName = itemName; }
long Item::getItemId(){ return itemId; }
void Item::setItemId(long itemId) { this->itemId = itemId; }
double Item::getItemPrice() { return itemPrice; }
void Item::setItemId( double itemPrice) { this->itemPrice = itemPrice; }
int Item::getItemStock(){ return itemStock; }
void Item::setItemStock(int itemStock) { this->itemStock = itemStock; }
