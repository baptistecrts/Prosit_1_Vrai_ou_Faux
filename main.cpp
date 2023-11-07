#include "verification.h"
#include <iostream>

int main() {
    Point point1(0, 0);
    Point point2(1, 1);

    double distance = point1.distance(point2);

    cout << "La distance entre les dexu points est : " << distance << endl;

    if (distance == 1.0) {
        cout << "L’hypothèse est validée." << endl;
    }
    else {
        cout << "L’hypothèse est invalide." << endl;
    }

    // Vous pouvez ajouter d'autres points et effectuer d'autres vérifications ici.

    return 0;
}
