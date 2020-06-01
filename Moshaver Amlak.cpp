//In The Name Of ALLAH

# include <iostream>

using namespace std;

struct HOUSE
{
	int size; // metrazh khane
	int room; // tedade otagh ha
	int status; // vazeiat
	int cost; // hazine
};

int main()
{
	HOUSE house[1];
	int n, m; // adade entekhab
	int i = 0; // shomareye khane

	cout << "WELCOME______________________________________________________________________\n\n"
		<< "Welcome.\n"
		<< "In this program :\nSize is meter.\nCost is rial.\n"
		<< "Statuses are :\t1. buy(kharid)\t2. hire(ejare)\t3. bond(rahn)\n"
		<< "If you enter incorrect number, program won't work correctly.\n(for example negative number)\n"
		<< "And all number are integer.\n\n\n"
		<< endl;

	cout << "START________________________________________________________________________\n" << endl;

	cout << "1. Add\n" << "2. Edit\n" << "3. Report\n" << "4. Exit\n\n"
		<< "Please choose a number (1-4) : ";
	cin >> n;
	cout << "\n\n" << endl;

	while (n != 4)
	{
		switch (n)
		{
		case 1:
			cout << "ADD__________________________________________________________________________\n" << endl;

			cout << "Number of house : " << i << "\n";

			cout << "Size of house : ";
			cin >> house[i].size;

			cout << "Number of room : ";
			cin >> house[i].room;

			cout << "Status : ";
			cin >> house[i].status;

			cout << "Cost of status : ";
			cin >> house[i].cost;

			cout << "Successfull.\n\n" << endl;
			i++;

			break;


		case 2:
			cout << "EDIT_________________________________________________________________________\n" << endl;

			cout << "Houses and details are :\n" << endl;
			for (int j = 0; j < i; j++)
			{
				cout << "Number of house : " << j << "\n"
					<< "Size : " << house[j].size << "\n"
					<< "Room : " << house[j].room << "\n"
					<< "Status : " << house[j].status << "\n"
					<< "Cost : " << house[j].cost << "\n"
					<< endl;
			}

			cout << "Enter number of house to edit : ";
			cin >> n;
			if (n >= i || n < 0)
			{
				cout << "It is not correct.\n\n" << endl;
				break;
			}

			cout << "Size : " << house[n].size << "\t\tNew Size : ";
			cin >> house[n].size;
			cout << "Room : " << house[n].room << "\t\tNew Room : ";
			cin >> house[n].room;
			cout << "Status : " << house[n].status << "\t\t New Status : ";
			cin >> house[n].status;
			cout << "Cost : " << house[n].cost << "\t\tNew Cost : ";
			cin >> house[n].cost;
			cout << "successfull.\n\n" << endl;

			break;


		case 3:
			cout << "REPORT_______________________________________________________________________\n" << endl;

			cout << "1. All\n2. By Size\n3. By Status\n4. By Status And Cost\n5. Back\n\n"
				<< "Please choose a number (1-5) : ";
			cin >> n;
			cout << "\n\n" << endl;

			switch (n)
			{
			case 1:
				cout << "Houses and details are :\n" << endl;
				for (int j = 0; j < i; j++)
				{
					cout << "Number of house : " << j << "\n"
						<< "Size : " << house[j].size << "\n"
						<< "Room : " << house[j].room << "\n"
						<< "Status : " << house[j].status << "\n"
						<< "Cost : " << house[j].cost << "\n"
						<< endl;
				}

				break;

			case 2:
				cout << "Please enter wanted size : ";
				cin >> n;
				cout << "\n" << endl;

				cout << "Houses and details are :\n" << endl;
				for (int j = 0; j < i; j++)
				{
					if (house[j].size >= n)
					{
						cout << "Number of house : " << j << "\n"
							<< "Size : " << house[j].size << "\n"
							<< "Room : " << house[j].room << "\n"
							<< "Status : " << house[j].status << "\n"
							<< "Cost : " << house[j].cost << "\n"
							<< endl;
					}
				}

				break;

			case 3:
				cout << "Please enter wanted status : ";
				cin >> n;
				cout << "\n" << endl;

				cout << "Houses and details are :\n" << endl;
				for (int j = 0; j < i; j++)
				{
					if (house[j].status == n)
					{
						cout << "Number of house : " << j << "\n"
							<< "Size : " << house[j].size << "\n"
							<< "Room : " << house[j].room << "\n"
							<< "Status : " << house[j].status << "\n"
							<< "Cost : " << house[j].cost << "\n"
							<< endl;
					}
				}

				break;

			case 4:
				cout << "Please enter wanted status : ";
				cin >> n;
				cout << "\nPlease enter wanted cost : ";
				cin >> m;
				cout << "\n" << endl;

				cout << "Houses and details are :\n" << endl;
				for (int j = 0; j < i; j++)
				{
					if (house[j].status == n && house[j].cost <= m)
					{
						cout << "Number of house : " << j << "\n"
							<< "Size : " << house[j].size << "\n"
							<< "Room : " << house[j].room << "\n"
							<< "Status : " << house[j].status << "\n"
							<< "Cost : " << house[j].cost << "\n"
							<< endl;
					}
				}

				break;

			case 5:
				break;
			}

			break;
		}

		cout << "_____________________________________________________________________________\n" << endl;

		cout << "1. Add\n" << "2. Edit\n" << "3. Report\n" << "4. Exit\n\n"
			<< "Please choose a number (1-4) : ";
		cin >> n;
		cout << "\n\n" << endl;
	}

	cout << "EXIT_________________________________________________________________________\n" << endl;
	cout << "Good Luck.\n";
	cout << endl;

	return 0;
}