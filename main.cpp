//Создайте класс, описывающий указанный в вашем варианте реальный объект. Не забывайте про принципы абстракции и инкапсуляции.
//Продемонстрируйте использование вашего класса.
//10.Конус, расчет площади поверхности, объема.

#include <iostream>
#include <cmath>


class Cone {
    double radius; // Радиус основания конуса
    double height; // Высота конуса

public:

    Cone(double r, double h) {
        radius = r;
        height = h;
    }


    double get_radius() const {
        return radius;
    }


    void set_radius(double r) {
        if (r > 0) {
            radius = r;
        }
        else {
            std::cout << "Радиус должен быть положительным числом" << std::endl;
        }
    }


    double get_height() const {
        return height;
    }


    void set_height(double h) {
        if (h > 0) {
            height = h;
        }
        else {
            std::cout << "Высота должна быть положительным числом" << std::endl;
        }
    }

    double surface_area() const {
        return 3.14 * radius * (radius + sqrt(radius * radius + height * height));
    }


    double volume() const {
        return (3.14 * radius * radius * height) / 3;
    }
};

int main() {

    setlocale(LC_ALL, "Russian");

    double radius, height;
    std::cout << "Введите радиус основания конуса: ";
    std::cin >> radius;
    std::cout << "Введите высоту конуса: ";
    std::cin >> height;

    Cone cone(radius, height);


    std::cout << "Площадь поверхности конуса: " << cone.surface_area() << std::endl;
    std::cout << "Объем конуса: " << cone.volume() << std::endl;

    return 0;
}


