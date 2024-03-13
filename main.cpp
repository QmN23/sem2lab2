//�������� �����, ����������� ��������� � ����� �������� �������� ������. �� ��������� ��� �������� ���������� � ������������.
//����������������� ������������� ������ ������.
//10.�����, ������ ������� �����������, ������.

#include <iostream>
#include <cmath>


class Cone {
    double radius; // ������ ��������� ������
    double height; // ������ ������

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
            std::cout << "������ ������ ���� ������������� ������" << std::endl;
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
            std::cout << "������ ������ ���� ������������� ������" << std::endl;
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
    std::cout << "������� ������ ��������� ������: ";
    std::cin >> radius;
    std::cout << "������� ������ ������: ";
    std::cin >> height;

    Cone cone(radius, height);


    std::cout << "������� ����������� ������: " << cone.surface_area() << std::endl;
    std::cout << "����� ������: " << cone.volume() << std::endl;

    return 0;
}


