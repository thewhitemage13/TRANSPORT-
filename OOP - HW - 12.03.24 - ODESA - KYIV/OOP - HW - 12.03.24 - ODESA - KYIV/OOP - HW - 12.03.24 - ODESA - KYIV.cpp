#include <iostream>
#include <string>
using namespace std;
//В классе транспорт мы имеет два метода. Time() - считает сколько мы будем 
//Времени в пути(вводим время начала пути в формате HH:MM и время прибытия в такой же форме)
//Coast() - считает цену на поезку основываясь на расстоянии и цене за км
//Все эти методы передаются дочерним классам, потмоу что суть одна и таже
//В принципе эта реализация подходит не только для маршрута Одесса - Киев, но и для других маршрутов
class Transport {
protected:
    bool have_a_wheels;
    int  max_speed;
    string fuel_type;
    double miles_per_kilometers;
    int number_of_seats;

public:
    void Time() 
    {
        int time;
        string time_go;
        cout << "Enter departure: ";
        cin >> time_go;

        string time_finish;
        cout << "Enter arrival: ";
        cin >> time_finish;

        int departure_hour = 10 * (time_go[0] - '0') + (time_go[1] - '0');
        int departure_min = 10 * (time_go[3] - '0') + (time_go[4] - '0');

        int arrival_hour = 10 * (time_finish[0] - '0') + (time_finish[1] - '0');
        int arrival_min = 10 * (time_finish[3] - '0') + (time_finish[4] - '0');

        int TotalDepartureMinutes = departure_hour * 60 + departure_min;
        int TotalArrivalMinutes = arrival_hour * 60 + arrival_min;

        time = TotalArrivalMinutes - TotalDepartureMinutes;

        cout << "Time in the trip: " << time / 60 << " hours " << time % 60 << " minutes" << endl;
    }

    void Coast()
    {
        double price_kilometer; 
        cout << "Enter Price Per km: ";
        cin >> price_kilometer;
        double distance; 
        cout << "Enter distance: ";
        cin >> distance;
        double price = price_kilometer * distance;
        cout << "Cost of the trip: " << price << " UAH" << "\n";
    }
};

class Car : public Transport{
private:
    bool have_a_motor;
    double motor_displacement;
    bool doors;
    int number_doors;
    string car_brand;
};

class Taxi : public Transport {
private:
    bool have_a_motor;
    double motor_displacement;
    bool doors;
    int number_doors;
    string taxi_company_name;
    string car_brand;
};

class Tramway : public Transport {
    bool have_a_motor;
    bool doors;
    int number_doors;
};

class Trolleybus : public Transport{
    bool have_a_motor;
    bool doors;
    int number_doors;
};

class Minibus : public Transport {
    bool have_a_motor;
    double motor_displacement;
    bool doors;
    int number_doors;
    string taxi_company_name;
    string car_brand;
};

class ElectricScooter : public Transport {
    bool have_a_motor;
    string scooter_brand;
};

class Train : public Transport {
    bool have_a_motor;
    bool doors;
    int number_doors;
};

class AirPlane : public Transport {
    bool have_a_motor;
    bool doors;
    int number_doors;
};

class Bicycle : public Transport {
    string bicycle;
    int number_of_wheels;
};

int main() {
 //   Transport transport;
 ///*   transport.Time();*/
 //   transport.Coast();
 //   Car a;
 //   a.Time();

 //   Bicycle bc;
 //   bc.Time();
 //   bc.Coast();
}