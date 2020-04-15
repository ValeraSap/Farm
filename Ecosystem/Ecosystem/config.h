#pragma once

#define MS_PER_UPDATE 0.005 

//Поле - квадратная матрица, размер поля - размер матрицы (х)
enum class FieldSize{SMALL=1, MEDIUM=2};

enum Rain { NO_RAINS, RAINS };

enum Wind { NO_WIND, NORTH, NORTH_EAST, EAST, EAST_SOUTH, SOUTH, SOUTH_WEST, WEST, WEST_NORTH };

enum Seasons { SUMMER, AUTUMN, WINTER, SPRING };

enum TimeOfDay { DAY, NIGHT };