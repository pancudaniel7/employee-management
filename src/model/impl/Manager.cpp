//
// Created by seven on 06.04.2021.
//

#include "../Manager.h"

ManagerType Manager::getManagerType() const {
    return managerType;
}

void Manager::setManagerType(ManagerType managerType) {
    Manager::managerType = managerType;
}

const list<Worker> &Manager::getSubordinates() const {
    return subordinates;
}

void Manager::setSubordinates(const list<Worker> &subordinates) {
    Manager::subordinates = subordinates;
}
