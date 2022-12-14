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

    public:
        void add();
        void update_price();
        void search();
        void update_qty();
        void display();

};

class supplier{
        int id; //PK in the DB
        string name;
        long int phn; //phone ? would probably use a string instead
        string addr_line1;
        string addr_line2;
        string addr_city;
        string addr_state;
    public:
        void add_supplier();
        void search_supplier_by_id();
        void remove_supplier();

};

class order{
        int id; //pk
        int book_id; //fk book
        int supplier_id; //fk suppliers
        int qty;
        date order_date;
        int eta;
        char received;
        int inv;

    public:
        void new_order();
        void view();
        void mark_canceled();
        void mark_received();
}

class employee{
        int id; //pk
        string name;
        string addr_line1;
        string addr_line2;
        string addr_city;
        string addr_state;
        long int phn;
        date date_of_joining;
        long int salary;
    public:
        void add_employee();
        void search_employee();
        void assign_mgr_stat();
        void display();
        void update_salary();
};

class member{
        int id;//pk
        string name;
        string addr_line1;
        string addr_line2;
        string addr_city;
        string addr_state;
        long int phn;
        date beg_date;
        bool valid;
    public:
        void add_member();
        void refresh();
        void search_member();
};

