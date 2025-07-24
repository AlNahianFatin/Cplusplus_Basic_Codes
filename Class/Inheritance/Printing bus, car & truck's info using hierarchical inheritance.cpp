#include <iostream>
#include<string>
using namespace std;

class Vehicle
{
public:
    float maxSpeed;
    string brand;
    int numSeats;

    Vehicle(float sp, string b, int st)
    {
        maxSpeed = sp;
        brand = b;
        numSeats = st;
    }
    void setMaxSpeed(float sp)
    {
        maxSpeed = sp;
    }
    float getMaxSpeed()
    {
        return maxSpeed;
    }
    void setBrand(string b)
    {
        brand = b;
    }
    string getBrand()
    {
        return brand;
    }
    void setSeatNumbers(int st)
    {
        numSeats = st;
    }
    int getSeatNumbers()
    {
        return  numSeats;
    }
};

class Truck : public Vehicle
{
private:
    bool Trailer;
public:
    Truck(float sp, string b, int st, bool trailer) : Vehicle(sp, b, st), Trailer(trailer) {}
    void setTrailer(bool trailer)
    {
        Trailer = trailer;
    }
    bool getTrailer()
    {
        return Trailer;
    }

    float distance()
    {
        return maxSpeed * 6;
    }
};

class Bus : public Vehicle
{
private:
    string busStand;
public:
    Bus(float sp, string b, int st, string stand) : Vehicle(sp, b, st), busStand(stand) {}
    void setBusStand(string stand)
    {
        busStand = stand;
    }
    string getBusStand()
    {
        return busStand;
    }
    float distance()
    {
        return maxSpeed * 6;
    }
};

class Car : public Vehicle
{
private:
    string fuelType;
public:
    Car(float sp, string b, int st, string fuel) : Vehicle(sp, b, st), fuelType(fuel) {}
    void setFuelType(string fuel)
    {
        fuelType = fuel;
    }
    string getFuelType()
    {
        return fuelType;
    }
    float distance()
    {
        return maxSpeed * 6;
    }
};

int main()
{
    Truck truck(150, "BMW", 2, true);
    Bus bus(130, "HONDA", 40, "Gabtoli bus stand");
    Car car(100, "Ferrari", 2, "Gasoline");

    cout << "Truck brand is: " << truck.getBrand() << ", with " << truck.getSeatNumbers() << " seats, its maximum speed is: " << truck.getMaxSpeed() << " km/h and it has trailer: " << truck.getTrailer() << "."<< endl;
    cout << "Distance traveled in 6 hours: " << truck.distance() << " km." << endl;

    cout << "\nBus brand is: " << bus.getBrand() << ", with " << bus.getSeatNumbers() << " seats, its maximum speed is: " << bus.getMaxSpeed() << " km/h and the bus stand name is: " << bus.getBusStand() << "."<< endl;
    cout << "Distance traveled in 6 hours: " << bus.distance() << " km." << endl;

    cout << "\nCar brand is: " << car.getBrand() << ", with " << car.getSeatNumbers() << " seats, its maximum speed is: " << car.getMaxSpeed() << " km/h and it uses " << car.getFuelType() << " as fuel." << endl;
    cout << "Distance traveled in 6 hours: " << car.distance() << " km." << endl;

    return 0;
}
