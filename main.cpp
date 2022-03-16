#include <iostream>
#include<string>
#include<set>

using  namespace std;
int s = 0;
static int c = 0;
int b = 0;
string admin = "";
string password = "";
class Doctor_appointment {
private:
    string admin1 = "";
    string password1 = "";
    string e_mail = "";
    int exist;
public: Doctor_appointment() {
        cout << "________________________________________________________________________________________________________________________" << endl;
        cout << endl;
        cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "  Doctor General Clinic   " << "\n";
        cout << "________________________________________________________________________________________________________________________" << endl;
        cout << "\n" << "\n";
    }
    ~Doctor_appointment() {
        cout << "thank you for time " << "\n";
        cout << "________________________________________________________________________________________________________________________" << endl;
    }
    void  register_inform() {

        int n;
        cout << "1__" << "register_in" << "\n" << "2__" << "log in" << endl;
        cin >> n;
        if (n == 1) {
            cout << "1__" << "enter your username plase" << "\n";
            cin >> admin;
            cout << endl;
            cout << "2__" << "enter any password plase" << "\n";
            cin >> password;
            cout << endl;
            cout << "enter your e_mail" << "\n";
            cin >> e_mail;
            cout << endl;
            cout << "successful registration" << "\n";
        }
        else if  (n==2) {
            cout << "1__" << "enter your username plase" << "\n";
            cin >> admin;
            cout << endl;
            cout << "2__" << "enter any password plase" << "\n";
            cin >> password;
            cout << endl;
        }
        else {
            cout << "error" << "\n";
            register_inform();

        }
        cout << "________________________________________________________________________________________________________________________" << endl;

    }
    void show() {
        cout << "****************************************" << endl;
        cout << "welcom in clinic" << "\n";
        cout << "****************************************" << endl;
        cout << "1__book an appionment" << "\n";
        /*  cout << "2__check an appionment" << "\n";*/
        cout << "3__cheat with doctor" << "\n";
        cout << "4__view the medicine" << "\n";
        cout << "5__Find out prices" << "\n";
        cin >> s;
        if (s > 6) {
            cout << "error" << "\n";
            register_inform();

        }
        cout << "________________________________________________________________________________________________________________________" << endl;
        cout << "________________________________________________________________________________________________________________________" << endl;
        cout << endl;
    }
    void book_appiont() {
        int s = 0;

        cout << "choose your suitable date" << "\n";
        cout << "1__the day is-  " << "Saturday" << "\t" << "Time- " << "8 pm" << "\n";
        cout << "2__the day is-  " << "Sunday" << "\t" << "Time- " << "7 pm" << "\n";
        cout << "3__the day is-  " << "Tuesday" << "\t" << "Time- " << "4 pm" << "\n";
        cout << "4__the day is-  " << "Wednesday" << "\t" << "Time- " << "9 am" << "\n";
        cout << "5__the day is-  " << "Thursday " << "\t" << "Time- " << "10 am" << "\n";
        cin >> b;
        if (b > 6) {
            cout << "error" << "\n";
            book_appiont();
        }
        cout << "successful Booking " << "\n";
        cout << endl;
        cout << "________________________________________________________________________________________________________________________" << endl;
        cout << "if you want to exsit to back enter 0" << endl;
        cin >> exist; cout << endl;
        cout << "________________________________________________________________________________________________________________________" << endl;
        if (exist == 0) {
            show();

        }

        cout << "________________________________________________________________________________________________________________________" << endl;
        cout << endl;
    }
    /*  void check_appoint() {
          if (b == 1) {
              cout << "your appointment in " << " Saturday" << " 8 pm" << "\n";
          }
          else if (b == 2) {
              cout << "your appointment in " << " Sunday" << "  7 pm" << "\n";
          }
          else if (b == 3) {
              cout << "your appointment in " << "  Tuesday" << "  4 pm" << "\n";
          }
          else if (b == 4) {
              cout << "your appointment in " << "  Wednesday" << "  9 am" << "\n";
          }
          else if (b == 5) {
              cout << "your appointment in " << "  Thursday " << "  10 am" << "\n";
          }

          else {
              cout << " you have not appointment " << "\n";
              show();

          }
          cout << "________________________________________________________________________________________________________________________" << endl;
          cout << "________________________________________________________________________________________________________________________" << endl;
      }*/
    void find_price() {
        cout << "The price of Medical Examination in the clinic is 150 pounds" << "\n";
        cout << "The price of Medical Examination in the houes is 30 pounds" << "\n";
        cout << "________________________________________________________________________________________________________________________" << endl;
        cout << "if you want to exsit to back enter 0" << endl;
        cin >> exist; cout << endl;
        cout << "________________________________________________________________________________________________________________________" << endl;
        if (exist == 0) {
            show();
        }

        cout << "________________________________________________________________________________________________________________________" << endl;

    }
    void view_medicine() {
        cout << "enter your username  and password" << endl;
        cin >> admin1;
        cin >> password1;
        cout << "\n";
        if (admin == admin1 && password == password1) {
            cout << "your medicine is::" << "\n";
            cout << " Kongstal" << "\n";
            cout << " Ex-Zoofliza" << "\n";
            cout << " Tamiflu" << "\n";

        }
        else {
            cout << "you have not been checked " << endl;
            cout << "you can book appointment" << "\n";
            show();
        }
        cout << "________________________________________________________________________________________________________________________" << endl;
        cout << "if you want to exsit to back enter 0" << endl;
        cin >> exist; cout << endl;
        cout << "________________________________________________________________________________________________________________________" << endl;
        if (exist == 0) {
            show();
        }
        cout << "________________________________________________________________________________________________________________________" << endl;
    }
    void message() {
        string message_pat;
        cout << "enter your message to doctor" << "\n";
        cin >> message_pat;
        cout << endl;
        cout << "We will get back to you as soon as possible" << "\n";
        cout << "________________________________________________________________________________________________________________________" << endl;
        cout << "if you want to exsit to back enter 0" << endl;
        cin >> exist; cout << endl;
        cout << "________________________________________________________________________________________________________________________" << endl;
        if (exist == 0) {
            show();
        }
        cout << "________________________________________________________________________________________________________________________" << endl;
    }


};
int main() {
    Doctor_appointment d1;
    amir:
    d1.register_inform();
    d1.show();

    if (s > 0) {
        if (s == 1) {
            d1.book_appiont();
        }
            /*else if (s == 2) {
                d1.check_appoint();
            }*/
        else if (s == 3) {
            d1.message();
        }
        else if (s == 4) {

            d1.view_medicine();
        }
        else if (s == 5) {

            d1.find_price();
        }

        ++c;
        cout << "________________________________________________________________________________________________________________________" << endl;
        cout << " your information patient  " << c  << "\n";
        cout << "username is  " << admin << "\n";
        cout << "password is  " << password << "\n";
        if (b == 1) {
            cout << "your appointment in " << " Saturday" << " 8 pm" << "\n";
        }
        else if (b == 2) {
            cout << "your appointment in " << " Sunday" << "  7 pm" << "\n";
        }
        else if (b == 3) {
            cout << "your appointment in " << "  Tuesday" << "  4 pm" << "\n";
        }
        else if (b == 4) {
            cout << "your appointment in " << "  Wednesday" << "  9 am" << "\n";
        }
        else if (b == 5) {
            cout << "your appointment in " << "  Thursday " << "  10 am" << "\n";
            cout << "________________________________________________________________________________________________________________________" << endl;
        }
        else {
            cout << "you have not data" << "\n";

        }

    }
    goto amir;



}
