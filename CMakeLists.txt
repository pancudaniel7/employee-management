cmake_minimum_required(VERSION 3.17)
project(employee-management)

set(CMAKE_CXX_STANDARD 14)

add_executable(employee-management main.cpp src/model/impl/Manager.cpp src/model/Manager.h src/model/impl/Worker.cpp src/model/Worker.h src/model/Types.h src/util/impl/readCSV.cpp src/util/readCSV.h src/util/impl/writeCSV.cpp src/util/writeCSV.h src/service/impl/EmployeeService.cpp src/service/EmployeeService.h src/model/impl/Ceo.cpp src/model/Ceo.h src/model/impl/PrimaryManager.cpp src/model/PrimaryManager.h src/model/impl/TeamLead.cpp src/model/TeamLead.h)
