#include"stdio.h"
#include"string.h"
#include"stdlib.h"
typedef struct Student {
	char StuID[20];
	char Name[50];
	int Gender;
	int Date, Month, Year;
	float GPA;
};
Student Input4each(Student);
void Inputlist(Student*, int*);
void Output4each(Student);
void OutputList(Student*, int*);
void Find(Student*, int*);
void Insert(Student*, int*);
void Delete(Student*, int*);
void Modify(Student*, int*);
void Sort(Student*, int);
int main() {
	Student a[100];
	int n;
	Inputlist(a, &n);
	int option;
	int choice;
Menu:do
{
	printf("\n                   PLEASE PRESS:                    ");
	printf("\n  -  ( 1 ) to print out the list of students ");
	printf("\n  -  ( 2 ) to find student. ");
	printf("\n  -  ( 3 ) to add a new student to the list. ");
	printf("\n  -  ( 4 ) to Delete a student. ");
	printf("\n  -  ( 5 ) to adjust a student. ");
	printf("\n  -  ( 6 ) to sort the list of students. ");
	printf("\n  -  ( 7 ) to quit.");
	printf("\n  Your choice is :    ");

	while (scanf("%d", &option) != 1)
	{
		printf(" Please enter an integer: ");
		while (getchar() != '\n');
	}

	switch (option) {
	case 1:
		system("cls");
		printf("\n\n Are you sure you want to run this content ?");
		printf("\n [ 1 ]           to run.");
		printf("\n [ any number ]  to comeback to menu.");
		printf("\n  Your choice:  ");

		while (scanf("%d", &choice) != 1)
		{
			printf("Please enter a number: ");
			while (getchar() != '\n');
		}
		if (choice == 1) {
			OutputList(a, &n);
			goto Continue;
		}
		else {
			system("cls"); goto Menu;
		}
		break;
	case 2:
		system("cls");
		printf("\n\n Are you sure you want to run this content ?");
		printf("\n [ 1 ]           to run.");
		printf("\n [ any number ]  to comeback to menu.");
		printf("\n  Your choice:  ");
		while (scanf("%d", &choice) != 1)
		{
			printf("Please enter a number: ");
			while (getchar() != '\n');
		}
		if (choice == 1) {
			system("cls");
			Find(a, &n);

			goto Continue;
		}
		else { system("cls"); goto Menu; }

		break;
	case 3:
		system("cls");
		printf("\n\n Are you sure you want to run this content ?");
		printf("\n [ 1 ]           to run.");
		printf("\n [ any number ]  to comeback to menu.");
		printf("\n  Your choice:  ");
		while (scanf("%d", &choice) != 1)
		{
			printf("Please enter a number: ");
			while (getchar() != '\n');
		}
		if (choice == 1) {
			system("cls");
			Insert(a, &n);
			system("cls");
			goto Continue;
		}
		else {
			system("cls"); goto Menu;
		}
		break;
	case 4:
		system("cls");
		printf("\n\n Are you sure you want to run this content ?");
		printf("\n [ 1 ]           to run.");
		printf("\n [ any number ]  to comeback to menu.");
		printf("\n  Your choice:  ");
		while (scanf("%d", &choice) != 1)
		{
			printf("Please enter a number: ");
			while (getchar() != '\n');
		}
		if (choice == 1) {
			system("cls");
			Delete(a, &n);
			goto Continue;
		}
		else {
			system("cls"); goto Menu;
		}
		break;
	case 5:
		system("cls");
		printf("\n\n Are you sure you want to run this content ?");
		printf("\n [ 1 ]           to run.");
		printf("\n [ any number ]  to comeback to menu.");
		printf("\n  Your choice:  ");
		while (scanf("%d", &choice) != 1)
		{
			printf("Please enter a number: ");
			while (getchar() != '\n');
		}
		if (choice == 1) {
			system("cls");
			Modify(a, &n);

			goto Continue;
		}
		else {
			system("cls"); goto Menu;
		}
		break;
	case 6:
		system("cls");
		printf("\n\n Are you sure you want to run this content ?");
		printf("\n [ 1 ]           to run.");
		printf("\n [ any number ]  to comeback to menu.");
		printf("\n  Your choice:  ");
		while (scanf("%d", &choice) != 1)
		{
			printf("Please enter a number: ");
			while (getchar() != '\n');
		}
		if (choice == 1) {
			Sort(a, n);
			goto Continue;
		}
		else { system("cls"); goto Menu; }
		break;
	case 7:
		system("cls");
		printf("\n\n Are you sure you want to exit ?");
		printf("\n [ 1 ]           to exit.");
		printf("\n [ any number ]  to comeback to menu.");
		printf("\n  Your choice:  ");
		while (scanf("%d", &choice) != 1)
		{
			printf("Please enter a number: ");
			while (getchar() != '\n');
		}
		if (choice == 1) {
			printf("\n Exiting...");
			return 0;
		}
		else { system("cls"); goto Menu; }
		break;


	default:
		system("cls");
		printf("\n\n  ERROR!!!PLEASE CHOOSE AGAIN!\n");
		break;
	}
} while (option < 1 || option>7);
Continue:

int x;
printf("\n\n Do you want to continue to do something with your list of students ?");
printf("\n If yes type [ 1 ] and [ any number ] to exit: ");
while (scanf("%d", &x) != 1)
{
	printf("Please enter a number: ");
	while (getchar() != '\n');
}
if (x == 1) {
	system("cls");
	goto Menu;
}
if (x != 1) {
	printf("\n Exiting...");
}
}



int leapyear(int y)
{
	return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
}
int checkBirthDay(int d, int m, int y)
{
	switch (m)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	{
		if (d < 0 && d > 31)
		{
			return false;
		}
		break;
	}
	case 2:
	{
		if (leapyear(y)) {
			if (d > 29) {
				return false;
			}
		}
		else {
			if (d > 28) {
				return false;
			}
		}
		break;
	}
	case 4:
	case 6:
	case 9:
	case 11:
	{
		if (d > 30) return false;
		break;
	}
	}
	return true;
}

Student Input4each(Student x) {
	printf("\n(1) Enter Student ID: ");
	scanf("%s", x.StuID);
name:
	int check = 0;
	printf("\n(2) Enter Student's Name: ");
	fflush(stdin);
	gets(x.Name);
	for (int r = 0; r < strlen(x.Name); r++) {
		if ((x.Name)[r] < 65 || ((x.Name)[r] > 90 && (x.Name)[r] < 97) || (x.Name)[r] > 122) {
			if ((x.Name)[r] != 32) {
				check = 1;
				r = strlen(x.Name);
			}
		}
	} if (check == 1) { printf("\tWrong form!\n"); goto name; }

	for (int i = 0; i < 1; i++) {
		printf("\n(3) Choose Student's Gender:  ");
		printf("\n[ 0 ] : Male");
		printf("\n[ 1 ] : Female");
		printf("\n=> Your choice:  ");
		while (scanf("%d", &x.Gender) != 1)
		{
			printf("Please choose [1 or 0]: ");
			while (getchar() != '\n');
		}
		if (x.Gender != 1 && x.Gender != 0) {
			printf("\n Error!!!");
			printf("Please choose [1 or 0]"); i--;
		}
	}
	printf("\n(4) Enter Student's Birthday ( please input [ YEAR ] from [1940 to 2003] ): ");
birthday:
	for (int d = 0; d < 1; d++) {
		printf("\n  - Date: ");
		while (scanf("%d", &x.Date) != 1)
		{
			printf("Please enter a number from [1 to 31]: ");
			while (getchar() != '\n');
		}
		printf("  - Month: ");
		while (scanf("%d", &x.Month) != 1)
		{
			printf("Please enter a number from [1 to 12]: ");
			while (getchar() != '\n');
		}
		printf("  - Year: ");
		while (scanf("%d", &x.Year) != 1)
		{
			printf("Please enter a number from [1940 to 2003]: ");
			while (getchar() != '\n');
		}
		if (x.Year < 1940 || x.Year>2003 || x.Month < 1 || x.Month > 12 || x.Date < 0 || x.Date > 31)
		{
			printf("\nError!!! Please Input birthday again!"); d--;
		}
		else {
			if (!checkBirthDay(x.Date, x.Month, x.Year)) {
				printf("\nError!!! Please Input birthday again!");
				goto birthday;
			}
		}

	}fflush(stdin);
	for (int c = 0; c < 1; c++) {
		printf("\n(5) Enter Student GPA:  ");
		while (scanf("%f", &x.GPA) != 1)
		{
			printf("Please enter a real number from [0.00 to 10.00] : ");
			while (getchar() != '\n');
		}
		if (x.GPA < 0.00 || x.GPA>10.00)
		{
			printf("\nError!!!Please enter GPA again!"); c--;
		}
	}
	return x;
}
void Inputlist(Student* p, int* n) {

	printf("Give the number of students: ");
Ip:	
	while (scanf("%d", n) != 1) {
	printf(" Error! Please enter a number: ");
	while (getchar() != '\n');
	}
	if (*n >= 0) {
		system("cls");
		for (int i = 0; i < *n; i++) {
			system("cls");
			printf("\nInput information for student number %d", i + 1);
			p[i] = Input4each(p[i]); system("cls");
		}
	}
	else {
		printf("Error! please input the [ number >= 0 ] :"); goto Ip;
	}
}

void Output4each(Student y) {
	printf("\n\t- StudentID: %s", y.StuID);
	printf("\n\t- Student's Name: %s", y.Name);
	printf("\n\t- Student Gender: ");
	if (y.Gender == 0)printf("Male"); if (y.Gender == 1)printf("Female");
	printf("\n\t- Student Birthday: %d/ %d/ %d", y.Date, y.Month, y.Year);
	printf("\n\t- Student GPA: %.2f", y.GPA);
}

void OutputList(Student* q, int* n) {
	system("cls");
	printf("\nList of students: ");
	if (*n < 1) { printf("\n\n    EMPTY! "); }
	else {

		for (int i = 0; i < *n; i++) {
			printf("\n");
			printf("\nStudent number %d :", i + 1);
			Output4each(q[i]);
		}
	}
}


void Find(Student a[], int* n) {
ok:
	if (*n < 1) { printf("\n\n YOU DON'T HAVE ANY STUDENT TO FIND !"); }
	else {
		int u;
		int c;
		int found = 0;
		for (int d = 0; d < 1; d++) {
			printf("\nHow do you like to find: ");
			printf("\nPress:");
			printf("\n[ 1 ]: to find by ID");
			printf("\n[ 2 ]: to find by Name");
			printf("\n[ 3 ]: to find by Gender");
			printf("\n[ 4 ]: to find by Birthday");
			printf("\n[ 5 ]: to find by GPA");
			printf("\nYour choice: ");
			while (scanf("%d", &c) != 1)
			{
				printf("Please enter a number from [1 to 5]: ");
				while (getchar() != '\n');
			}

			if (c < 1 || c > 6) { system("cls"); printf("\n Error! Please choose [1 to 5]"); d--; }
			else {
				if (c == 1) {
					system("cls");
					char x[20];
					printf("\nEnter Student ID :");
					scanf("%s", x);
					system("cls");
					printf("\n\nThe ID is from: ");
					for (int i = 0; i < *n; i++) {
						if (strcmp(x, a[i].StuID) == 0) {
							found = 1;
							printf("\n\nStudent number %d", i + 1);
							Output4each(a[i]);
						}
					}
					if (found == 0) {

						printf("\n\n NOTHING FOUND!");
					}

				}
				if (c == 2) {
					system("cls");
					char y[50];
					name1:
						int check = 0;
						printf("\nType student's Name you want to find: ");
						fflush(stdin);
						gets(y);
						for (int r = 0; r < strlen(y); r++) {
							if ((y)[r] < 65 || ((y)[r] > 90 && (y)[r] < 97) || (y)[r] > 122) {
								if ((y)[r] != 32) {
									check = 1;
									r = strlen(y);
								}
							}
						} if (check == 1) { printf("\tWrong form!\n"); goto name1; }
						system("cls");
						printf("\nthe Name is from: ");
						for (int i = 0; i < *n; i++) {
							if (strstr(strupr(a[i].Name), strupr(y))) {
								found = 1;
								printf("\n\nStudent number %d", i + 1);
								Output4each(a[i]);
							}
						}
						if (found == 0) { printf("\n\n NOTHING FOUND! "); }
				}

				if (c == 3) {
					system("cls");
					int e;
					printf("\nClick: ");
					for (int h = 0; h < 1; h++) {
						printf("\n[ 0 ] to see information of all Male students.");
						printf("\n[ 1 ] to see information of all Female students.");
						printf("\n You choose:  ");
						while (scanf("%d", &e) != 1)
						{
							printf("Please enter a number [0 or 1]: ");
							while (getchar() != '\n');
						}
						if (e < 0 || e>1) { system("cls"); printf("\n Error! Please choose [0 or 1]"); h--; }
						else {
							system("cls");
							for (int i = 0; i < *n; i++) {
								if (e == a[i].Gender) {
									found = 1;
									printf("\n\nStudent number %d", i + 1);
									Output4each(a[i]);
								}
							}
							if (found == 0) { printf("\n\n NOTHING FOUND!"); }
						}
					}
				}

				if (c == 4) {
					system("cls");
					int d, m, y;
					printf("\n\nType Student birthday you want to find: ");
				birthday1:
					for (int z = 0; z < 1; z++) {
						printf("\n");
						printf(" - Date: ");
						while (scanf("%d", &d) != 1)
						{
							printf("Please enter a number from [1 to 31]: ");
							while (getchar() != '\n');
						}

						printf(" - Month: ");
						while (scanf("%d", &m) != 1)
						{
							printf("Please enter a number from [1 to 12]: ");
							while (getchar() != '\n');
						}

						printf(" - Year: ");
						while (scanf("%d", &y) != 1)
						{
							printf("Please enter a number from [1940 to 2003]: ");
							while (getchar() != '\n');
						}
						if (y < 1940 || y>2003 || m < 1 || m > 12 || d < 0 || d > 31)
						{
							printf("\nError!!! Please Input birthday again!"); z--;
						}
						else {
							if (!checkBirthDay(d, m, y)) {
								printf("\nError!!! Please Input birthday again!");
								goto birthday1;
							}
						}
					}
					system("cls");
					printf("\nThe birthday is from:");

					for (int i = 0; i < *n; i++) {
						if ((d == a[i].Date) || (m == a[i].Month) || (y == a[i].Year) || (d == a[i].Date && m == a[i].Month) || (d == a[i].Date && y == a[i].Year) || (m == a[i].Month && y == a[i].Year) || (d == a[i].Date && m == a[i].Month && y == a[i].Year)) {
							found = 1;
							printf("\n\nStudent number %d:", i + 1);
							Output4each(a[i]);
						}
					}
					if (found == 0) { printf("\n\n NOTHING FOUND!"); }
				}

				if (c == 5) {
					system("cls");
					float g;
					printf("\nType Student GPA you want to find: ");
					while (scanf("%f", &g) != 1)
					{
						printf("Please enter a real number from [0.00 to 10.00]: ");
						while (getchar() != '\n');
					}
					system("cls");
					printf("\nThe GPA is from: ");
					for (int i = 0; i < *n; i++) {
						if (g == a[i].GPA) {
							found = 1;
							printf("\n\nStudent number %d:", i + 1);
							Output4each(a[i]);
						}
					}
					if (found == 0) { printf("\n\n NOTHING FOUND!"); }					
				}
			}
			printf("\n\nDo you want to [ FIND ] anyone else in the list ? ");
			printf("\nType [ 1 ] to continue or [ any number ] to quit: ");
			while (scanf("%d", &u) != 1)
			{
				printf("Please enter a number: ");
				while (getchar() != '\n');
			}
			if (u == 1) {
				system("cls");
				goto ok;
			}
			else { system("cls"); }
		}
	}
}

void Insert(Student a[], int* n) {
insert:
	Student x;
	int e;
	printf("\nInput Information for a new student :");
	x = Input4each(x);
	a[*n] = x;
	(*n)++;
	system("cls");
	printf("\n\n     Added!");
	printf("\n\n The information of the new student is: ");
	Output4each(x);
	printf("\n\nDo you want to [ ADD ] another new student ? ");
	printf("\nPress [ 1 ] to continue or [ any number ] to quit:  ");
	while (scanf("%d", &e) != 1)
	{
		printf("Please enter a number: ");
		while (getchar() != '\n');
	}
	if (e == 1) {
		system("cls");
		goto insert;
	}


}

void Delete(Student a[], int* n) {
del:
	OutputList(a, n);
	if (*n < 1) { printf(" YOU DON'T HAVE ANY STUDENT TO DELETE !"); }
	else {
		OutputList(a, n);
		int r;
		int x;
		for (int y = 0; y < 1; y++) {
			printf("\nWhich student you want to delete:  ");
			while (scanf("%d", &x) != 1)
			{
				printf("Please enter a number: ");
				while (getchar() != '\n');
			}
			if (x<1 || x>(*n)) { printf("\n Error! Choose [ 1 to %d ]", (*n)); y--; }
		}
		(*n)--;
		for (int i = x - 1; i < (*n + 1); i++)
		{
			a[i] = a[i + 1];
		}
		OutputList(a, n);
		if (*n < 1) { printf(" YOU DON'T HAVE ANY STUDENT LEFT IN YOUR LIST. "); }
		else {
			printf("\n\nDo you want to [ DELETE ] another student ? ");
			printf("\nPress [ 1 ] to continue or [ any number ] to quit :  ");
			while (scanf("%d", &r) != 1)
			{
				printf("Please enter a number: ");
				while (getchar() != '\n');
			}
			switch (r) {
			case 1: {
				system("cls");
				goto del;
				break; }
			}
		}
	}
}
void Modify(Student a[], int* n) {
modify:
	OutputList(a, n);
	if (*n < 1) { printf(" YOU DON'T HAVE ANY STUDENT'S INFORMATION TO ADJUST !"); }
	else {
		OutputList(a, n);
		int x, q, o;
		int choice;
		for (int f = 0; f < 1; f++) {
			printf("\n\nwhich student you want to adjust:  ");
			while (scanf("%d", &x) != 1)
			{
				printf("Please enter a number: ");
				while (getchar() != '\n');
			}
			if (x<1 || x>(*n)) {
				printf("Please choose [1 to %d]", (*n)); f--;
			}
		}
	adjust:	system("cls");
		for (int i = 0; i < *n; i++) {
			if (i + 1 == x) {
				Output4each(a[i]);
				for (int k = 0; k < 1; k++) {
					printf("\nWhich information of the student needs adjusting ?\n 1. ID\n 2. Name\n 3. Gender\n 4. Birthday\n 5. GPA\n 6. All\n   Your choice:  ");
					while (scanf("%d", &choice) != 1)
					{
						printf("Please enter a number from [1 to 6]: ");
						while (getchar() != '\n');
					}
					if (choice < 1 || choice>6) { printf("\nError! Choose [ 1 to 6 ]"); k--; }
					else {
						if (choice == 1) {
							fflush(stdin);
							printf("\n Enter Student ID:  ");
							scanf("%s", &a[i].StuID);
							printf("\n\nDo you want to [ ADJUST ] any other information of the student ? ");
							printf(" \nPress [ 1 ] to continue or [ any number ] to quit adjusting :  ");
							while (scanf("%d", &q) != 1)
							{
								printf("Please enter a number: ");
								while (getchar() != '\n');
							}
							if (q == 1) {
								goto adjust;
							}
							if (q != 1) {
								system("cls");
								printf("\n\n   The information after adjusted: ");
								Output4each(a[i]);
							}

						}
						if (choice == 2) {
							fflush(stdin);
						name2: int check = 0;
							printf("\n Enter Student's Name: ");
							gets(a[i].Name);
							for (int r = 0; r < strlen(a[i].Name); r++) {
								if ((a[i].Name)[r] < 65 || ((a[i].Name)[r] > 90 && (a[i].Name)[r] < 97) || (a[i].Name)[r] > 122) {
									if ((a[i].Name)[r] != 32) {
										check = 1;
										r = strlen(a[i].Name);
									}
								}
							} if (check == 1) { printf("\tWrong form!\n"); goto name2; }
							printf("\n\nDo you want to [ ADJUST ] any other information of the student ? ");
							printf(" \nPress [ 1 ] to continue or [ any number ] to quit adjusting :  ");
							while (scanf("%d", &q) != 1)
							{
								printf("Please enter a number: ");
								while (getchar() != '\n');
							}
							if (q == 1) {
								goto adjust;
							}
							if (q != 1) {
								system("cls");
								printf("\n\n   The information after adjusted: ");
								Output4each(a[i]);
							}
						}
						if (choice == 3) {
							fflush(stdin);
							for (int i = 0; i < 1; i++) {
								printf("\n Choose Student's Gender:  ");
								printf("\n[ 0 ] : Male");
								printf("\n[ 1 ] : Female");
								printf("\n=> Your choice:  ");
								while (scanf("%d", &a[i].Gender) != 1)
								{
									printf("Please enter a number [0 or 1]: ");
									while (getchar() != '\n');
								}
								if (a[i].Gender != 1 && a[i].Gender != 0) {
									printf("\n Error!!!");
									printf("Please choose [1 or 0]"); i--;
								}
							}
							printf("\n\nDo you want to [ ADJUST ] any other information of the student ? ");
							printf(" \nPress [ 1 ] to continue or [ any number ] to quit adjusting :  ");
							while (scanf("%d", &q) != 1)
							{
								printf("Please enter a number: ");
								while (getchar() != '\n');
							}
							if (q == 1) {
								goto adjust;
							}
							if (q != 1) {
								system("cls");
								printf("\n\n   The information after adjusted: ");
								Output4each(a[i]);
							}
						}
						if (choice == 4) {
							fflush(stdin);
							printf("\n Enter Student's Birthday ( please input [ YEAR ] from [1940 to 2003] ): ");
							for (int d = 0; d < 1; d++) {
							birthday:
								printf("\n  - Date: ");
								while (scanf("%d", &a[i].Date) != 1)
								{
									printf("Please enter a number from [1 to 31]: ");
									while (getchar() != '\n');
								}
								printf("  - Month: ");
								while (scanf("%d", &a[i].Month) != 1)
								{
									printf("Please enter a number from [1 to 12]: ");
									while (getchar() != '\n');
								}
								printf("  - Year: ");
								while (scanf("%d", &a[i].Year) != 1)
								{
									printf("Please enter a number from [1940 to 2003]: ");
									while (getchar() != '\n');
								}
								if (a[i].Year < 1940 || a[i].Year > 2003 || a[i].Month < 1 || a[i].Month > 12 || a[i].Date < 0 || a[i].Date > 31)
								{
									printf("\nError!!! Please Input birthday again!"); d--;
								}
								else
								{
									if (!checkBirthDay(a[i].Date, a[i].Month, a[i].Year)) {
										printf("\nError!!! Please Input birthday again!");
										goto birthday;
									}
								}
							}
							printf("\n\nDo you want to [ ADJUST ] any other information of the student ? ");
							printf(" \nPress [ 1 ] to continue or [ any number ] to quit adjusting :  ");
							while (scanf("%d", &q) != 1)
							{
								printf("Please enter a number: ");
								while (getchar() != '\n');
							}
							if (q == 1) {
								goto adjust;
							}
							if (q != 1) {
								system("cls");
								printf("\n\n   The information after adjusted: ");
								Output4each(a[i]);
							}
						}
						if (choice == 5) {
							fflush(stdin);
							for (int c = 0; c < 1; c++) {
								printf("\n Enter Student GPA:  ");
								while (scanf("%f", &a[i].GPA) != 1)
								{
									printf("Please enter a real number from [0.00 to 10.00]: ");
									while (getchar() != '\n');
								}
								if (a[i].GPA < 0.00 || a[i].GPA>10.00)
								{
									printf("\nError!!!Please enter GPA again!"); c--;
								}
							}
							printf("\n\nDo you want to [ ADJUST ] any other information of the student ? ");
							printf(" \nPress [ 1 ] to continue or [ any number ] to quit adjusting :  ");
							while (scanf("%d", &q) != 1)
							{
								printf("Please enter a number: ");
								while (getchar() != '\n');
							}
							if (q == 1) {
								goto adjust;
							}
							if (q != 1) {
								system("cls");
								printf("\n\n   The information after adjusted: ");
								Output4each(a[i]);
							}
						}
						if (choice == 6) {
							fflush(stdin);
							printf("\n Enter Student ID: ");
							scanf("%s", a[i].StuID);
						name3:  int check = 0;
							printf("\n Enter Student's Name: ");
							fflush(stdin);
							gets(a[i].Name);
							for (int r = 0; r < strlen(a[i].Name); r++) {
								if ((a[i].Name)[r] < 65 || ((a[i].Name)[r] > 90 && (a[i].Name)[r] < 97) || (a[i].Name)[r] > 122) {
									if ((a[i].Name)[r] != 32) {
										check = 1;
										r = strlen(a[i].Name);
									}
								}
							} if (check == 1) { printf("\tWrong form!\n"); goto name3; }
							for (int i = 0; i < 1; i++) {
								printf("\n Choose Student's Gender:  ");
								printf("\n[ 0 ] : Male");
								printf("\n[ 1 ] : Female");
								printf("\n=> Your choice:  ");
								while (scanf("%d", &a[i].Gender) != 1)
								{
									printf("Please enter a number [0 or 1]: ");
									while (getchar() != '\n');
								}
								if (a[i].Gender != 1 && a[i].Gender != 0) {
									printf("\n Error!!!");
									printf("Please choose [1 or 0]"); i--;
								}
							}
							printf("\n Enter Student's Birthday ( please input [ YEAR ] from [1940 to 2003] ): ");
							for (int d = 0; d < 1; d++) {
							birthday2:
								printf("\n  - Date: ");
								while (scanf("%d", &a[i].Date) != 1)
								{
									printf("Please enter a number from [1 to 31]: ");
									while (getchar() != '\n');
								}
								printf("  - Month: ");
								while (scanf("%d", &a[i].Month) != 1)
								{
									printf("Please enter a number from [1 to 12]: ");
									while (getchar() != '\n');
								}
								printf("  - Year: ");
								while (scanf("%d", &a[i].Year) != 1)
								{
									printf("Please enter a number from [1940 to 2003]: ");
									while (getchar() != '\n');
								}
								if (a[i].Year < 1940 || a[i].Year > 2003 || a[i].Month < 1 || a[i].Month > 12 || a[i].Date < 0 || a[i].Date > 31)
								{
									printf("\nError!!! Please Input birthday again!"); d--;
								}
								else {
									if (!checkBirthDay(a[i].Date, a[i].Month, a[i].Year)) {
										printf("\nError!!! Please Input birthday again!");
										goto birthday2;
									}
								}

							}
							for (int c = 0; c < 1; c++) {
								printf("\n Enter Student GPA:  ");
								while (scanf("%d", &a[i].GPA) != 1)
								{
									printf("Please enter a number from [1 to 31]: ");
									while (getchar() != '\n');
								}
								if (a[i].GPA < 0.00 || a[i].GPA>10.00)
								{
									printf("\nError!!!Please enter GPA again!"); c--;
								}
							}
							printf("\n\nDo you want to [ ADJUST ] any other information of the student ? ");
							printf(" \nPress [ 1 ] to continue or [ any number ] to quit adjusting :  ");
							while (scanf("%d", &q) != 1)
							{
								printf("Please enter a number: ");
								while (getchar() != '\n');
							}
							if (q == 1) {
								goto adjust;
							}
							if (q != 1) {
								system("cls");
								printf("\n\n   The information after adjusted: ");
								Output4each(a[i]);
							}

						}   printf("\n\nDo you want to [ ADJUST ] anyone else ?");
						printf("\nType [ 1 ] to continue and [ any number ] to quit: ");
						while (scanf("%d", &o) != 1)
						{
							printf("Please enter a number: ");
							while (getchar() != '\n');
						}
						if (o == 1) {
							system("cls");
							goto modify;
						}
						else { system("cls"); }
					}
				}
			}

		}
	}
}

void Sort(Student a[], int n) {
	if (n < 1) {
		system("cls");
		printf("\n\n YOU DON'T HAVE ANY STUDENT IN THE LIST TO SORT !");
	}
	else {
		int x, f;
		for (int c = 0; c < 1; c++) {
			system("cls");
			printf("\nIn what way you want to sort the list ? ");
			printf("\nPress:");
			printf("\n[ 1 ] sort by Name (ascending order).");
			printf("\n[ 2 ] sort by birthday (youngest to oldest).");
			printf("\n[ 3 ] sort by GPA (ascending order).");
			printf("\nYou choose: ");
			while (scanf("%d", &f) != 1)
			{
				printf("Please enter a number from [1 to 31]: ");
				while (getchar() != '\n');
			}
			if (f < 1 || f>3) { printf("\nChoose [ 1 to 3 ] :"); c--; }
			else {
				if (f == 1) {
					for (int i = 0; i < n - 1; i++) {
						for (int j = i + 1; j < n; j++) {
							if (strcmp(strupr(a[i].Name), strupr(a[j].Name)) > 0) {
								Student temp;
								temp = a[i];
								a[i] = a[j];
								a[j] = temp;
							}
						}
					}
				}
				if (f == 2) {
					for (int t = 0; t < n - 1; t++) {
						for (int k = t + 1; k < n; k++) {
							if (a[t].Year < a[k].Year) {
								Student temp;
								temp = a[t];
								a[t] = a[k];
								a[k] = temp;
							}
							if (a[t].Year == a[k].Year && a[t].Month < a[k].Month) {
								Student temp;
								temp = a[t];
								a[t] = a[k];
								a[k] = temp;
							}
							if (a[t].Year == a[k].Year && a[t].Month == a[k].Month && a[t].Date < a[k].Date) {
								Student temp;
								temp = a[t];
								a[t] = a[k];
								a[k] = temp;
							}
						}
					}
				}
				if (f == 3) {
					for (int u = 0; u < n - 1; u++) {
						for (int q = u + 1; q < n; q++) {
							if (a[u].GPA > a[q].GPA) {
								Student temp;
								temp = a[u];
								a[u] = a[q];
								a[q] = temp;
							}
						}
					}
				}
				system("cls");
				printf("\nList of students after sorted : ");
				if (n < 1) { printf("\n\n    Empty! "); }
				else {
					for (int i = 0; i < n; i++) {
						printf("\n");
						printf("\nStudent number %d :", i + 1);
						Output4each(a[i]);
					}
				}
			}
		}
	}
}






