//
// Created by seven on 07.04.2021.
//

#ifndef EMPLOYEE_MANAGEMENT_CEO_H
#define EMPLOYEE_MANAGEMENT_CEO_H


#include "Manager.h"
#include "Worker.h"

class Ceo : Manager {
    const list<Worker> &getSubordinates() override;

    void setSubordinates(const list<Worker> &subordinates) override;
};


#endif //EMPLOYEE_MANAGEMENT_CEO_H
