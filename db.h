#include <string>
#include <iostream>
#include <sqlite3.h>

struct Car{
public:
    int id;
    std::string brand;
    std::string model;
    int price;

    Car(int id, std::string brand, std::string model, int price): id(id), brand(brand), model(model), price(price){};
    ~Car(){};
};

class DataBase{
private:
    sqlite3* db;
public:
    DataBase(const std::string& filePath = "database.db");
    ~DataBase();
    void createTable();
    void insertValues(const Car& car);
};

DataBase::DataBase(const std::string &filePath)
{
    int dbStatus = sqlite3_open(filePath.c_str(), &db); // returns 0 or 1 if error exist
}

DataBase::~DataBase() {
    int dbStatus = sqlite3_close(db);  // returns 0 or 1 if error exist
}

void DataBase::createTable()
{
    const std::string query = "CREATE TABLE IF NOT EXISTS used_cars("
                        "    id integer PRIMARY KEY AUTOINCREMENT,"
                        "    brand text,"
                        "    model text,"
                        "    price int,"
                        "    city text,"
                        "    fuel text,"
                        "    transmission text,"
                        "    drive text,"
                        "    mileage int,"
                        "    country text,"
                        "    engine_capacity int,"
                        "    engine_hp int,"
                        "    age text"
                        ")";
    char *errorMessage;
    int dbStatus = sqlite3_exec(db, query.c_str(), nullptr, nullptr, &errorMessage);
    if (errorMessage)
        std::cout << "Some error acquired: " << errorMessage << std::endl;
    else
        std::cout << "Create table status: " << dbStatus << std::endl;
}

void DataBase::insertValues(const Car& car)
{
    const std::string query = "INSERT INTO used_cars(brand, model, price) VALUES "
                              "('"+car.brand+"', '"+car.model+"', "+std::to_string(car.price)+")";
    char *errorMessage;
    int dbStatus = sqlite3_exec(db, query.c_str(), nullptr, nullptr, &errorMessage);
    if (errorMessage)
        std::cout << "Some error acquired: " << errorMessage << std::endl;
    else
        std::cout << "Insert status: " << dbStatus << std::endl;
}
