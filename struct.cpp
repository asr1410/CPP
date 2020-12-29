#include <iostream>
#include <string>
using namespace std;

struct employee_of_company
{
    int id;
    string name;
    char gender;
    long mobile_no;
} aman; //WE can declare the company name here to

typedef employee_of_company emp;
emp naman;

typedef types_of_money money;

int main()
{
    //FOR CANDIDATE AMAN
    cout << "Detail of First candidate" << endl;
    cout << "Enter your Id number" << endl;
    cin >> aman.id;
    getchar(); //Empty character is required as it take the enter as a input
    cout << "Enter your name" << endl;
    getline(cin, aman.name);
    cout << "Enter your gender" << endl;
    cin >> aman.gender;
    cout << "Enter your mobile no" << endl;
    cin >> aman.mobile_no;
    cout << endl;

    //FOR CANDIDATE declared outside function
    cout << "Detail of Second candidate" << endl;
    cout << "Enter your Id number" << endl;
    cin >> naman.id;
    getchar(); //Empty character is required as it take the enter as a input
    cout << "Enter your name" << endl;
    getline(cin, naman.name);
    cout << "Enter your gender" << endl;
    cin >> aman.gender;
    cout << "Enter your mobile no" << endl;
    cin >> naman.mobile_no;
    cout << endl;

    //FOR CANDIDATE declared inside main using original declaration
    struct employee_of_company ram;
    cout << "Detail of Third candidate" << endl;
    cout << "Enter your Id number" << endl;
    cin >> ram.id;
    getchar(); //Empty character is required as it take the enter as a input
    cout << "Enter your name" << endl;
    getline(cin, ram.name);
    cout << "Enter your gender" << endl;
    cin >> ram.gender;
    cout << "Enter your mobile no" << endl;
    cin >> ram.mobile_no;
    cout << endl;

    //FOR CANDIDATE declared inside main using type def keyword
    emp raj;
    cout << "Detail of Fourth candidate" << endl;
    cout << "Enter your Id number" << endl;
    cin >> raj.id;
    getchar(); //Empty character is required as it take the enter as a input
    cout << "Enter your name" << endl;
    getline(cin, raj.name);
    cout << "Enter your gender" << endl;
    cin >> raj.gender;
    cout << "Enter your mobile no" << endl;
    cin >> raj.mobile_no;
    cout << endl;

    cout << "Info of first candidiate" << endl;
    cout << "Id : " << aman.id << endl;
    cout << "Name : " << aman.name << endl;
    cout << "Gender : " << aman.gender << endl;
    cout << "Mobile No : " << aman.mobile_no << endl;

    cout << "Info of Second candidiate" << endl;
    cout << "Id : " << naman.id << endl;
    cout << "Name : " << naman.name << endl;
    cout << "Gender : " << naman.gender << endl;
    cout << "Mobile No : " << naman.mobile_no << endl;

    cout << "Info of Third candidiate" << endl;
    cout << "Id : " << ram.id << endl;
    cout << "Name : " << ram.name << endl;
    cout << "Gender : " << ram.gender << endl;
    cout << "Mobile No : " << ram.mobile_no << endl;

    cout << "Info of Fourth candidiate" << endl;
    cout << "Id : " << raj.id << endl;
    cout << "Name : " << raj.name << endl;
    cout << "Gender : " << raj.gender << endl;
    cout << "Mobile No : " << raj.mobile_no << endl;

    return 0;
}