#include <iostream>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    int n, i;

    cout << "inserire il numero degli alunni" << endl;
    cin >> n;
    string nomi[n];
    string voti[n];
    string assenze[n];

    for (i = 0; i <= n - 1; i++) {
        cout << "studente" << i + 1 << ". Inserire nome, voto, assenze" << endl;
        cin >> nomi[i];
        cin >> voti[i];
        cin >> assenze[i];
    }
    cout << "visualizzare i dati dello studente numero:" << endl;
    cin >> i;
    cout << "Nome:" << nomi[i] << "voto:" << voti[i] << "assenze:" << assenze[i] << endl;
    cout << "dati della classe" << endl;
    for (i = 0; i <= n - 1; i++) {
        cout << "studente" << i + 1 << ":" << nomi[i] << "voto:" << voti[i] << "assenze:" << assenze[i] << endl;
    }
    string nome;
    int indice;

    indice = (int) (-1);
    cout << "visualizzare i dati dello studente che si chiama:" << endl;
    cin >> nome;
    for (i = 0; i <= n - 1; i++) {
        if (nomi[i] == nome) {
            indice = i;
        }
    }
    if (indice >= 0) {
        cout << "nome:" << nomi[indice] << "voto:" << voti[indice] << "assenze:" << assenze[indice] << endl;
    }
    return 0;
}

