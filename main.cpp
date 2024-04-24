#include "db.h"

int main() {
    // creating database using DataBase class
    DataBase db;
    db.createTable(); // table example is for a particular project

    // creating car and inserting it to the table
    Car car = Car(0, "Volvo", "Something", 1536489);
    db.insertValues(car);

    return 0;
}
