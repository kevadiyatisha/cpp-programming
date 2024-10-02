#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Employee 
{
    string name;
    string contact;
    string city;
    double salary;
    string language;
    double rating;
    string reviews;

    Employee(string n, string c, string ci, double s, string l, double r, string rev)
        : name(n), contact(c), city(ci), salary(s), language(l), rating(r), reviews(rev) {}
};

class EmployeeManagementSystem 
{
private:
    vector<Employee> employees;

public:
    void addEmployee(const Employee& emp) 
    {
        employees.push_back(emp);
    }

    void printCompanyData() const 
    {
        cout << "\nCompany Employee Data:\n";
        for (const auto& emp : employees) 
        {
            cout << "Name: " << emp.name << ", Contact: " << emp.contact 
                 << ", City: " << emp.city << ", Salary: " << emp.salary 
                 << ", Language: " << emp.language << ", Rating: " << emp.rating 
                 << ", Reviews: " << emp.reviews << endl;
        }
    }

    void printHRData() const 
    {
        cout << "\nHR Employee Data:\n";
        for (const auto& emp : employees) 
        {
            if (emp.language == "HR") 
            {
                cout << "Name: " << emp.name << ", Contact: " << emp.contact 
                     << ", City: " << emp.city << ", Salary: " << emp.salary 
                     << ", Rating: " << emp.rating << endl;
            }
        }
    }

    void printEmployeeData() const 
    {
        cout << "\nAll Employee Data:\n";
        for (const auto& emp : employees) 
        {
            cout << "Name: " << emp.name << ", Contact: " << emp.contact 
                 << ", Salary: " << emp.salary << ", City: " << emp.city << endl;
        }
    }

    void sortBySalary() 
    {
        sort(employees.begin(), employees.end(), [](const Employee& a, const Employee& b) 
        {
            return a.salary < b.salary;
        });
    }

    void sortByName() 
    {
        sort(employees.begin(), employees.end(), [](const Employee& a, const Employee& b) 
        {
            return a.name < b.name;
        });
    }

    void sortByLanguage() 
    {
        sort(employees.begin(), employees.end(), [](const Employee& a, const Employee& b) 
        {
            return a.language < b.language;
        });
    }

    void sortByRating() 
    {
        sort(employees.begin(), employees.end(), [](const Employee& a, const Employee& b) 
        {
            return a.rating < b.rating;
        });
    }

    void printEmployeesByCity(const string& city) const 
    {
        cout << "Employees in " << city << ":\n";
        for (const auto& emp : employees) 
        {
            if (emp.city == city) 
            {
                cout << "Name: " << emp.name << ", Contact: " << emp.contact 
                     << ", Salary: " << emp.salary << ", Rating: " << emp.rating << endl;
            }
        }
    }
};

int main() 
{
    EmployeeManagementSystem ems;

    // Sample data
    ems.addEmployee(Employee("het narola", "1234567890", "New York", 70000, "HR", 4.5, "Good performance"));
    ems.addEmployee(Employee("manas bhingradiya", "0987654321", "San Francisco", 60000, "Developer", 4.0, "Needs improvement"));
    ems.addEmployee(Employee("Charlie gadhiya", "1112223333", "Los Angeles", 75000, "Developer", 4.8, "Excellent work"));
    
    // Sample functionalities
    ems.printCompanyData();
    ems.printHRData();
    ems.printEmployeeData();
    
    cout << "\nSorting by Salary:\n";
    ems.sortBySalary();
    ems.printCompanyData();
    
    cout << "\nSorting by Name:\n";
    ems.sortByName();
    ems.printCompanyData();
    
    cout << "\nEmployees in San Francisco:\n";
    ems.printEmployeesByCity("San Francisco");

    return 0;
}
