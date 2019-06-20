/*
 * Программа для оценивания важности карт.
 */

int main() {
	char card_name[3];
	
	scanf("%2s", card_name);
	int val = 0;
	
	if (card_name[0] == "K") {
		val = 10;
	} else if (card_name[0] == "Q") {
		val = 9;
	} else if (card_name[0] == "V") {
		val 8;
	} else {
		val = atoi(card_name);
	}
	print("Ценность карты: %i\n", val);

	return 0;
}
