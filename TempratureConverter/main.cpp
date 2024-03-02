#include <iostream>

#ifndef TEMPERATURE_CONVERTER_H
#define TEMPERATURE_CONVERTER_H

double CelsiusToFahrenheit(double celsius)
{
    return (celsius * 9.0 / 5.0) + 32.0;
}

double FahrenheitToCelsius(double fahrenheit)
{
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

double CelsiusToKelvin(double celsius)
{
    return celsius + 273.15;
}

double KelvinToCelsius(double kelvin)
{
    return kelvin - 273.15;
}

#endif

int main()
{
    using namespace std;

    int choice;
    double temperature, convertedTemperature;

    cout << "Temperature Converter" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "3. Celsius to Kelvin" << endl;
    cout << "4. Kelvin to Celsius" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    if (choice < 1 || choice > 4)
    {
        cout << "Invalid choice." << endl;
        return 1;
    }

    cout << "Enter the temperature: ";
    cin >> temperature;

    switch (choice)
    {
    case 1:
        convertedTemperature = CelsiusToFahrenheit(temperature);
        break;
    case 2:
        convertedTemperature = FahrenheitToCelsius(temperature);
        break;
    case 3:
        convertedTemperature = CelsiusToKelvin(temperature);
        break;
    case 4:
        convertedTemperature = KelvinToCelsius(temperature);
        break;
    default:
        cout << "Invalid choice." << endl;
        return 1;
    }

    cout << "Converted Temperature: " << convertedTemperature << endl;

    return 0;
}