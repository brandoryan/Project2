#ifndef DISTANCESMODEL_H
#define DISTANCESMODEL_H

#include "model.h"

struct Distances {
    STRING startTeam;
    STRING endTeam;
    double distanceBetween;
};

class DistancesModel: public Model
{
public:
    DistancesModel();
    ~DistancesModel();

    void refreshModel();
private:
    QVector<Distances> teamDistances;
};

#endif // DISTANCESMODEL_H
