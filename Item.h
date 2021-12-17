#ifndef Item_HEADER
#define Item_HEADER
#include<string>
class Item {
public:
	Item(std::string, long, double, int);
	std::string getItemName();
	void setItemName(std::string itemName);
	long getItemId();
	void setItemId(long itemId);
	double getItemPrice();
	void setItemId(double itemPrice);
	int getItemStock();
	void setItemStock(int itemStock);
private:
	std::string itemName;
	long itemId;
	double itemPrice;
	int itemStock;
};

#endif
