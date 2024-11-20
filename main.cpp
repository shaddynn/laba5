#include <iostream>
#include <limits>

#include "Teapot.h"
using namespace std;

// электрический чайник
int main() {
    system("clear");
    int choice;

    Teapot teapot;

    while (true) {
        system("clear");
        if (teapot.getIsOvercrowded() && teapot.getIsHeats()) {
                teapot.setIsBroken(true);
        cout << "Чайник сломался! Чайник переполнен." << endl;
        }

        if (teapot.getIsEmpty() && teapot.getIsHeats()) {
            teapot.setIsBroken(true);
        cout << "Чайник сломался! Наберите воду в чайник." << endl;
        }

        string pStr;
        string cStr;
        string bStr;
        string oStr;

        if (teapot.getIsHeats()) {
            pStr = " Да";
        } else {
            pStr = " Нет";
        }
        if (teapot.getIsEmpty()) {
            cStr = " Да";
        } else {
            cStr = " Нет";
        }
        if (teapot.getIsBroken()) {
            bStr = " Да";
        } else {
            bStr = " Нет";
        }
        if (teapot.getIsOvercrowded()) {
            oStr = " Да";
        } else {
            oStr = " Нет";
        }


        cout << "\nСостояние чайника\n" << endl;
        cout << "Чайник греет? " << pStr << endl;
        cout << "Чайник пуст?" << cStr << endl;
        cout << "Чайник сломан?" << bStr << endl;
        cout << "Чайник переполнен?" << oStr << endl;

        cout << "\nМеню:\n";
        cout << "1. Нагреть/охладить чайник\n";
        cout << "2. Налить/слить воду в чайник\n";
        cout << "3. Починить/Сломать чайник\n";
        cout << "4. Переполнить/не переполнить чайник\n";
        cout << "0. Выход\n";
        cout << "Выберите действие: ";



        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            system("clear");
            cout << "Некорректный ввод." << endl;
            do {

            } while (cin.get() != '\n');
            do {
                cout << '\n' << "Press the Enter key to continue.";
            } while (cin.get() != '\n');
            continue;
        }
        if (choice ==  1 && teapot.getIsBroken()) {
            cout << "Чайник не может греть, он сломан! Сначала почините чайник." << endl;
            do {
            } while (cin.get() != '\n');
            do {
            } while (cin.get() != '\n');
        }
        else if (choice == 1 && !teapot.getIsBroken()) {
            teapot.changeIsHeats();
        }

        else if (choice ==  2) {
            teapot.changeIsEmpty();
            if (teapot.getIsEmpty()) {
                teapot.setIsOvercrowded(false);
            }
        }

        else if (choice ==  3) {
            teapot.changeIsBroken();
            teapot.setIsHeats(false);
        }

        else if (choice ==  4) {
            teapot.changeIsOvercrowded();
            if (teapot.getIsOvercrowded()) {
                teapot.setIsEmpty(false);
            }
        }

        else if (choice == 0) {
            system("clear");
            cout << "Выход из программы." << endl;
            do {

            } while (cin.get() != '\n');
            do {
                cout << '\n' << "Press the Enter key to continue.";
            } while (cin.get() != '\n');
            return 0;
        } else {
            cout << "Некорректный выбор. Пожалуйста, попробуйте еще раз." << endl;
            do {
                cout << '\n' << "Press the Enter key to continue.";
            } while (cin.get() != '\n');
        }
    }
    return 0;
}
