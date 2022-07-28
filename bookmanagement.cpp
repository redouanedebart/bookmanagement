//---------Headers-------

#include <iostream>
#include <windows.h> //might not be necessary
#include <mysql.h> //might change to use postgreSQL
#include <sstream>
#include <conio.h>

#define HOST "127.0.0.1"
#define USER "root"
#define PASS /*put the password of MySQL in here between ""*/
#define DATABASE "Management"
#define PORT 3306
#define PASSWORD //pwd for the app

//--------------------------
//--------Global Var---------
typedef struct
{
	int date;
	int month;
	int year;
}date;
//--------------------------
//---------Classes----------

class book{
    int id; //will be PK for the database
    string title;
    string author;
    int page_number;
    int qty;
    float price;
}