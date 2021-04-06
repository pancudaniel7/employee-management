//
// Created by seven on 06.04.2021.
//

#include "../Worker.h"

const string &Worker::getName() const {
    return name;
}

void Worker::setName(const string &name) {
    Worker::name = name;
}

double Worker::getSalary() const {
    return salary;
}

void Worker::setSalary(double salary) {
    Worker::salary = salary;
}

const string &Worker::getPosition() const {
    return position;
}

void Worker::setPosition(const string &position) {
    Worker::position = position;
}

const string &Worker::getDepartment() const {
    return department;
}

void Worker::setDepartment(const string &department) {
    Worker::department = department;
}

const string &Worker::getId() const {
    return id;
}

void Worker::setId(const string &id) {
    Worker::id = id;
}

const string &Worker::getSupervisorId() const {
    return supervisorId;
}

void Worker::setSupervisorId(const string &supervisorId) {
    Worker::supervisorId = supervisorId;
}
