#include <iostream>
#include <string>
using namespace std;
class Vehicle
{
private:
    string vehicleModel;
public:
    Vehicle(string model)
    {
        vehicleModel = model;
    }
    void setVehicleModel(string model)
    {
        vehicleModel = model;
    }
    string getVehicleModel()
    {
        return vehicleModel;
    }
    void showVehicle()
    {
        cout << "Vehicle Model: " << vehicleModel << endl;
    }
};
class FuelVehicle : public Vehicle
{
private:
    float fuelCapacity;
public:
    FuelVehicle(string model, float capacity) : Vehicle(model)
    {
        fuelCapacity = capacity;
    }
    void setFuelCapacity(float capacity)
    {
        fuelCapacity = capacity;
    }
    float getFuelCapacity()
    {
        return fuelCapacity;
    }
    void showFuelVehicle()
    {
        showVehicle();
        cout << "Fuel Capacity: " << fuelCapacity << " liters" << endl;
    }
};
class ElectricVehicle : public Vehicle
{
private:
    float batteryCapacity;
public:
    ElectricVehicle(string model, float capacity) : Vehicle(model)
    {
        batteryCapacity = capacity;
    }
    void setBatteryCapacity(float capacity)
    {
        batteryCapacity = capacity;
    }
    float getBatteryCapacity()
    {
        return batteryCapacity;
    }
    void showElectricVehicle()
    {
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }
};
class HybridVehicle : public FuelVehicle, public ElectricVehicle
{
public:
    HybridVehicle(string model, float fuelCapacity, float batteryCapacity) :
        FuelVehicle(model, fuelCapacity), ElectricVehicle(model, batteryCapacity) {}
    void showHybridVehicle()
    {
        showFuelVehicle();
        showElectricVehicle();
    }
};
int main()
{
    HybridVehicle myCar("Kia Niro", 84.5, 6.5);
    myCar.showHybridVehicle();
    return 0;
}
