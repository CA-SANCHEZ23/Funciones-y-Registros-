#include <iostream>
#include <string>

using namespace std;

struct Empleado {
    string nombre;
    string cargo;
    double salarioBase;
    int anosAntiguedad;
};

double calcularBono(const Empleado& emp) {
    if (emp.anosAntiguedad > 5) {
        return emp.salarioBase * 0.15;
    } else {
        return emp.salarioBase * 0.05;
    }
}

void mostrarFichaEmpleado(const Empleado& emp) {
    cout << "========================================\n";
    cout << "         FICHA DE EMPLEADO             \n";
    cout << "========================================\n";
    cout << "Nombre: " << emp.nombre << endl;
    cout << "Cargo: " << emp.cargo << endl;
    cout << "Salario Base: $" << emp.salarioBase << endl;
    cout << "Antiguedad: " << emp.anosAntiguedad << " anos\n";
    cout << "Bono asignado: $" << calcularBono(emp) << endl;
    cout << "Sueldo Total Estimado: $" << (emp.salarioBase + calcularBono(emp)) << endl;
    cout << "========================================\n";
}

int main() {
    Empleado emp1 = {"Sofia Ramirez", "Desarrolladora Senior", 3500.00, 6};

    mostrarFichaEmpleado(emp1);

    return 0;
}
