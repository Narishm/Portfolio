#include "fPlayer.h"

int readFootballPlayers(char *input, fPlayer team[], int* total);
void sortEm(fPlayer [], int total);

void sortEm(fPlayer team[], int total) {
	int i,j;
	fPlayer temp;
	for(i = 0; i < total; ++i) {
		for(j = 1; j < total; ++j) {
			if(team[j-1] > team[j]) {
				temp = team[j];
				team[j] = team[j-1];
				team[j-1] = temp;
			}
		}
	}
}

int readFootballPlayers(char *filename, fPlayer team[], int *total) {
	int wt, ft, in;
	ifstream input;
	input.open(filename, ios::in|ios::nocreate);
	if(!input) return 1;
	char buf[50], junk;
	input.getline(buf, 50);
	*total = atoi(buf);
	for(int i = 0; i = *total; ++i) {
		input.getline(buf, 50);
		team[i].setName(buf);
		input >> ft >> in >> wt;
		input.get(junk);
		team[i].setWeight(wt);
		team[i].setHeight(ft, in);
	}
	input.close();
	return 0;
}

int main() {
	fPlayer team[5];
	int total;
	cout << "\n\n Sorting Football Player Objects" << endl << "\n     Hit Enter To Continue";
	char enter;
	cin.get(enter);
	char *input = "players.dat";
	int error = readFootballPlayers(input, team, &total);
	if(error) {
		cout << "\n Could Not Find File " << input << "!" << endl << endl;
		exit(1);
	}
	cout << "\n\n The Original Players.dat File is: ";
	for(int i = 0; i < total; ++i) {
		team[i].writeInfo();
	}
	cout << "\n\n These are big fellows! \n\n";
	cin.get(enter);
	return 0;
}
