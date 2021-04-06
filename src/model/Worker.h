//
// Created by seven on 06.04.2021.
//

#ifndef EMPLOYEE_MANAGEMENT_WORKER_H
#define EMPLOYEE_MANAGEMENT_WORKER_H

#include <string>

using namespace std;

class Worker {
private:
    string id;
    string supervisorId;
    string name;
    double salary;
    string position;
    string department;
public:
    Worker(const string &id, const string &supervisorId, const string &name, double salary, const string &position,
           const string &department);

    const string &getName() const;

    void setName(const string &name);

    double getSalary() const;

    void setSalary(double salary);

    const string &getPosition() const;

    void setPosition(const string &position);

    const string &getDepartment() const;

    void setDepartment(const string &department);

    const string &getId() const;

    void setId(const string &id);

    const string &getSupervisorId() const;

    void setSupervisorId(const string &supervisorId);

    virtual ~Worker();
};

Worker::Worker(const string &id, const string &supervisorId, const string &name, double salary, const string &position,
               const string &department) : id(id), supervisorId(supervisorId), name(name), salary(salary),
                                           position(position), department(department) {}

Worker::~Worker() {
}

#endif //EMPLOYEE_MANAGEMENT_WORKER_H
