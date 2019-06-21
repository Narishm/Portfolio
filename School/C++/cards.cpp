#include <iostream.h>
#include <iomanip.h>
using namespace std;

enum suit {club, diamond, heart, spade};
enum rank {two = 2, three, four, five, six, seven, eight, nine, ten, jack, queen, king, ace};

struct card {
suit color;
rank number;
};

int main() {
	card cards[52];
	cout << "\n   Show me the Cards! \n\n";
	int i, j, temp_rank, card_ctr = 0;
	for (i = 0; i < 4; ++i) {
		for (j = 2; j < 15;  ++j) {
			cards[card_ctr].color = (suit)i;
			cards[card_ctr].number = (rank)j;
			++card_ctr;
		}
	}
	card_ctr = 0;
	for(i = 0; i < 4; ++i) {
		for(j = 2; j < 15; ++j) {
			temp_rank = cards[card_ctr].number;
			if(temp_rank < 11) {
				cout << " " << cards[card_ctr].number;
			}
			else if(temp_rank == jack) {
				cout << " " << "J";
			}
			else if(temp_rank == queen)	{
				cout << " " << "Q";
			}
			else if(temp_rank == king) {
				cout << " " << "K";
			}
			else {
				cout << " " << "A";
			}
			switch(cards[card_ctr].color) {
				case spade:
					cout << char(6) << " ";
					break;
				case heart:
					cout << char(3) << " ";
					break;
				case diamond:
					cout << char(4) << " ";
					break;
				case club:
					cout << char(5) << " ";
					break;
			}
			++card_ctr;
		}
		cout << endl << endl;
	}
	return 0;
}
