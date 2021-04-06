//
// Created by seven on 06.04.2021.
//

#ifndef EMPLOYEE_MANAGEMENT_MANAGER_H
#define EMPLOYEE_MANAGEMENT_MANAGER_H

#include "Types.h"
#include "list"
#include "Worker.h"

class Manager : Worker {
protected:
    list<Worker> subordinates;

public:
    Manager(const string &id, const string &supervisorId, const string &name, double salary, const string &position,
            const string &department, const list<Worker> &subordinates);

    virtual const list<Worker> &getSubordinates() = 0;

    virtual void setSubordinates(const list<Worker> &subordinates) = 0;

    virtual ~Manager();
};

Manager::Manager(const string &id, const string &supervisorId, const string &name, double salary,
                 const string &position, const string &department, const list<Worker> &subordinates) : Worker(id,
                                                                                                              supervisorId,
                                                                                                              name,
                                                                                                              salary,
                                                                                                              position,
                                                                                                              department),
                                                                                                       subordinates(
                                                                                                               subordinates) {}

Manager::~Manager() {
}

#endif //EMPLOYEE_MANAGEMENT_MANAGER_H
