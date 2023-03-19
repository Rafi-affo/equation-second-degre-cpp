#include <iostream>

using namespace std;

int main()
{
    double a,b,c,resultat;
     //Afficher un message a l'utilisateur
    cout << "Entrer la valeur de a : " << endl;
    //Lire la valeur saisi par l'utilisateur et l'enregistrer dans la variable a
    cin >> a;
    while(a == 0){
        cout << "Erreur a ne doit pas etre nul. Reessayez" << endl;
        cin >> a;
    }


    //Demander à l'utilisateur d'entrer b
    //Afficher un message a l'utilisateur
    cout << "Entrer la valeur de b : " << endl;
    //Lire la valeur saisi par l'utilisateur et l'enregistrer dans la variable b
    cin >> b;

     cout << "Entrer la valeur de c : " << endl;
    //Lire la valeur saisi par l'utilisateur et l'enregistrer dans la variable b
    cin >> c;
    cout << "hello";
    return 0;
}