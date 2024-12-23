#include <iostream>
#include "carre.h"

using namespace std;

int main() {
    // Cr�ation de carr�s avec le constructeur par d�faut et param�tr�
    CCarre c1, c2(15, 25, 30);  // c2 est cr�� avec un constructeur param�tr�
    CCarre* c3 = new CCarre(25, 35, 40);  // c3 est cr�� dynamiquement avec new et un constructeur param�tr�
    CCarre c4;

    // Initialisation des caract�ristiques de c1
    c1.Setsx(5);
    c1.Setsy(10);
    c1.Setcote(20);

    cout << "Caract�ristiques initiales de c1 :" << endl;
    c1.Afficher();

    cout << "\nCaract�ristiques initiales de c2 (cr�� avec le constructeur param�tr�) :" << endl;
    c2.Afficher();

    cout << "\nCaract�ristiques initiales de c3 (cr�� dynamiquement avec new et le constructeur param�tr�) :" << endl;
    c3->Afficher();

    // Initialisation des caract�ristiques de c4
    c4.Setsx(35);
    c4.Setsy(45);
    c4.Setcote(50);

    cout << "\nCaract�ristiques initiales de c4 :" << endl;
    c4.Afficher();

    // Test de la m�thode Deplacer avec c1
    cout << "\nD�placement de c1 vers le nord avec un saut de 3..." << endl;
    c1.Deplacer('n', 3);
    c1.Afficher();

    // Test de la m�thode surcharg�e Deplacer avec un vecteur pour c1
    cout << "\nD�placement de c1 selon le vecteur (dx = 4, dy = -2)..." << endl;
    c1.Deplacer(4, -2);
    c1.Afficher();

    // Test de la m�thode Deplacer avec c2
    cout << "\nD�placement de c2 vers l'est avec un saut de 5..." << endl;
    c2.Deplacer('e', 5);
    c2.Afficher();

    // Test de la m�thode surcharg�e Deplacer avec un vecteur pour c2
    cout << "\nD�placement de c2 selon le vecteur (dx = -3, dy = 7)" << endl;
    c2.Deplacer(-3, 7);
    c2.Afficher();

    // Test de la m�thode Deplacer avec c3
    cout << "\nD�placement de c3 vers le sud avec un saut de 2..." << endl;
    c3->Deplacer('s', 2);
    c3->Afficher();

    // Test de la m�thode surcharg�e Deplacer avec un vecteur pour c3
    cout << "\nD�placement de c3 selon le vecteur (dx = 1, dy = 1)..." << endl;
    c3->Deplacer(1, 1);
    c3->Afficher();

    // Test de la m�thode Deplacer avec c4
    cout << "\nD�placement de c4 vers l'ouest avec un saut de 4..." << endl;
    c4.Deplacer('o', 4);
    c4.Afficher();

    // Test de la m�thode surcharg�e Deplacer avec un vecteur pour c4
    cout << "\nD�placement de c4 selon le vecteur (dx = -2, dy = -3)" << endl;
    c4.Deplacer(-2, -3);
    c4.Afficher();

    // Cr�ation d'un tableau d'objets CCarre
    CCarre carres[4] = { c1, c2, *c3, c4 };  // Passer *c3 car c3 est un pointeur

    // Affichage des caract�ristiques de chaque carr�
    for (int i = 0; i < 4; i++) {
        cout << "\nCaract�ristiques du carr� " << i + 1 << " :" << endl;
        carres[i].Afficher();
    }

    // Lib�ration de la m�moire allou�e dynamiquement pour c3
    delete c3;

    return 0;
}
