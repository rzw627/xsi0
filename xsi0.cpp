#include <iostream>

#include <limits>

#include <ctime>

using namespace std;

void titlul();                          // . . . . . . . . . Afiseaza titlul.
void arataTabla();                      // . . . . . . . . . Afiseaza tabla de X si 0.
void disclaimer();                      // . . . . . . . . . Instructiuni de joc.
void mutariX();                         // . . . . . . . . . Gestioneaza mutarile pentru X.
void mutari0();                         // . . . . . . . . . Gestioneaza mutarile pentru 0.
void reset();                           // . . . . . . . . . Aduce toata tabla de joc la valorile initiale.
void scor();                            // . . . . . . . . . Afiseaza scorul.
bool castigX();                         // . . . . . . . . . Verifica daca X a castigat.
bool castig0();                         // . . . . . . . . . Verifica daca 0 a castigat.
bool remiza();                          // . . . . . . . . . Verifica daca e remiza.

char tablaDeJoc[]
{
    '1',
    '2',
    '3',
    '4',
    '5',
    '6',
    '7',
    '8',
    '9'
};

int scor1 = 0, scor2 = 0;
int numarRunda;
int locX, loc0;

int main()
{
    titlul();
    disclaimer();
    while(true)
    {
        numarRunda = 1;
        do
        {
            if (numarRunda % 2 == 0)
            {
                mutari0();
            }
            else
            {
                mutariX();
            }
        }
        while (!castigX() && !castig0() && !remiza());
        if (castigX())
            scor1++;
        else if (castig0())
            scor2++;
        else if (remiza())
            cout << "                                                     REMIZA! :>" << endl << endl;
        scor();
        reset();
        arataTabla();
    }
    return 0;
}

void titlul()
{
    cout << "                                                   ***  X SI 0  ***" << endl << endl;
}

void arataTabla()
{
    cout << "                                                        |       |" << endl;
    cout << "                                                    " << tablaDeJoc[0] << "   |   " << tablaDeJoc[1] << "   |   " << tablaDeJoc[2] << endl;
    cout << "                                                        |       |" << endl;
    cout << "                                                 -------+-------+-------" << endl;
    cout << "                                                        |       |" << endl;
    cout << "                                                    " << tablaDeJoc[3] << "   |   " << tablaDeJoc[4] << "   |   " << tablaDeJoc[5] << endl;
    cout << "                                                        |       |" << endl;
    cout << "                                                 -------+-------+-------" << endl;
    cout << "                                                        |       |" << endl;
    cout << "                                                    " << tablaDeJoc[6] << "   |   " << tablaDeJoc[7] << "   |   " << tablaDeJoc[8] << endl;
    cout << "                                                        |       |" << endl;
    cout << endl;
}

void disclaimer()
{
    cout << "            *** PENTRU A JUCA ALEGETI UN NUMAR DIN INTERVALUL [1,9] UNDE SA PUNETI X SAU 0 ***" << endl << endl;
    cout << "*** DACA SE ALEGE ALTCEVA, SE VA PUTEA ALEGE DIN NOU SI DIN NOU PANA CAND SE ALEGE UN NUMAR DIN INTERVALUL RESPECTIV ***" << endl;
    cout << "                                         *** X VA INCEPE FIECARE PARTIDA ***" << endl << endl;
    arataTabla();
}

void mutariX()
{
    cout << "                                                   RANDUL LUI X: ";
    cin >> locX;
    cout << endl;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits < streamsize > ::max(), '\n');
        cout << "                                           RANDUL LUI X, ALEGE UN NUMAR: ";
        cin >> locX;
        cout << endl;
    }

    switch (locX)
    {
    case 1:
        if (tablaDeJoc[0] == 'X' || tablaDeJoc[0] == '0')
        {
            cout << "                                           " << locX << " NU E LIBER, ALEGE UN LOC LIBER!" << endl << endl;
            arataTabla();
            mutariX();
        }
        else
        {
            tablaDeJoc[0] = 'X';
            arataTabla();
            numarRunda++;
        }

        break;
    case 2:
        if (tablaDeJoc[1] == 'X' || tablaDeJoc[1] == '0')
        {
            cout << "                                           " << locX << " NU E LIBER, ALEGE UN LOC LIBER!" << endl << endl;
            arataTabla();
            mutariX();
        }
        else
        {
            tablaDeJoc[1] = 'X';
            arataTabla();
            numarRunda++;
        }

        break;
    case 3:
        if (tablaDeJoc[2] == 'X' || tablaDeJoc[2] == '0')
        {
            cout << "                                           " << locX << " NU E LIBER, ALEGE UN LOC LIBER!" << endl << endl;
            arataTabla();
            mutariX();
        }
        else
        {
            tablaDeJoc[2] = 'X';
            arataTabla();
            numarRunda++;
        }

        break;
    case 4:
        if (tablaDeJoc[3] == 'X' || tablaDeJoc[3] == '0')
        {
            cout << "                                           " << locX << " NU E LIBER, ALEGE UN LOC LIBER!" << endl << endl;
            arataTabla();
            mutariX();
        }
        else
        {
            tablaDeJoc[3] = 'X';
            arataTabla();
            numarRunda++;
        }

        break;
    case 5:
        if (tablaDeJoc[4] == 'X' || tablaDeJoc[4] == '0')
        {
            cout << "                                           " << locX << " NU E LIBER, ALEGE UN LOC LIBER!" << endl << endl;
            arataTabla();
            mutariX();
        }
        else
        {
            tablaDeJoc[4] = 'X';
            arataTabla();
            numarRunda++;
        }

        break;
    case 6:
        if (tablaDeJoc[5] == 'X' || tablaDeJoc[5] == '0')
        {
            cout << "                                           " << locX << " NU E LIBER, ALEGE UN LOC LIBER!" << endl << endl;
            arataTabla();
            mutariX();
        }
        else
        {
            tablaDeJoc[5] = 'X';
            arataTabla();
            numarRunda++;
        }

        break;
    case 7:
        if (tablaDeJoc[6] == 'X' || tablaDeJoc[6] == '0')
        {
            cout << "                                           " << locX << " NU E LIBER, ALEGE UN LOC LIBER!" << endl << endl;
            arataTabla();
            mutariX();
        }
        else
        {
            tablaDeJoc[6] = 'X';
            arataTabla();
            numarRunda++;
        }

        break;
    case 8:
        if (tablaDeJoc[7] == 'X' || tablaDeJoc[7] == '0')
        {
            cout << "                                           " << locX << " NU E LIBER, ALEGE UN LOC LIBER!" << endl << endl;
            arataTabla();
            mutariX();
        }
        else
        {
            tablaDeJoc[7] = 'X';
            arataTabla();
            numarRunda++;
        }

        break;
    case 9:
        if (tablaDeJoc[8] == 'X' || tablaDeJoc[8] == '0')
        {
            cout << "                                           " << locX << " NU E LIBER, ALEGE UN LOC LIBER!" << endl << endl;
            arataTabla();
            mutariX();
        }
        else
        {
            tablaDeJoc[8] = 'X';
            arataTabla();
            numarRunda++;
        }

        break;
    default:
        cout << "                                           ALEGE UN NUMAR DIN INTERVALUL[1,9]: " << endl << endl;
        arataTabla();
        mutariX();
    }
}

void mutari0()
{
    cout << "                                                   RANDUL LUI 0: ";
    cin >> loc0;
    cout << endl;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits < streamsize > ::max(), '\n');
        cout << "                                           ALEGE UN NUMAR DIN INTERVALUL [1,9]: ";
        cin >> loc0;
        cout << endl;
    }

    switch (loc0)
    {
    case 1:
        if (tablaDeJoc[0] == 'X' || tablaDeJoc[0] == '0')
        {
            cout << "                                           " << loc0 << " NU E LIBER, ALEGE UN LOC LIBER!" << endl << endl;
            arataTabla();
            mutari0();
        }
        else
        {
            tablaDeJoc[0] = '0';
            arataTabla();
            numarRunda++;
        }

        break;
    case 2:
        if (tablaDeJoc[1] == 'X' || tablaDeJoc[1] == '0')
        {
            cout << "                                           " << loc0 << " NU E LIBER, ALEGE UN LOC LIBER!" << endl << endl;
            arataTabla();
            mutari0();
        }
        else
        {
            tablaDeJoc[1] = '0';
            arataTabla();
            numarRunda++;
        }

        break;
    case 3:
        if (tablaDeJoc[2] == 'X' || tablaDeJoc[2] == '0')
        {
            cout << "                                           " << loc0 << " NU E LIBER, ALEGE UN LOC LIBER!" << endl << endl;
            arataTabla();
            mutari0();
        }
        else
        {
            tablaDeJoc[2] = '0';
            arataTabla();
            numarRunda++;
        }

        break;
    case 4:
        if (tablaDeJoc[3] == 'X' || tablaDeJoc[3] == '0')
        {
            cout << "                                           " << loc0 << " NU E LIBER, ALEGE UN LOC LIBER!" << endl << endl;
            arataTabla();
            mutari0();
        }
        else
        {
            tablaDeJoc[3] = '0';
            arataTabla();
            numarRunda++;
        }

        break;
    case 5:
        if (tablaDeJoc[4] == 'X' || tablaDeJoc[4] == '0')
        {
            cout << "                                           " << loc0 << " NU E LIBER, ALEGE UN LOC LIBER!" << endl << endl;
            arataTabla();
            mutari0();
        }
        else
        {
            tablaDeJoc[4] = '0';
            arataTabla();
            numarRunda++;
        }

        break;
    case 6:
        if (tablaDeJoc[5] == 'X' || tablaDeJoc[5] == '0')
        {
            cout << "                                           " << loc0 << " NU E LIBER, ALEGE UN LOC LIBER!" << endl << endl;
            arataTabla();
            mutari0();
        }
        else
        {
            tablaDeJoc[5] = '0';
            arataTabla();
            numarRunda++;
        }

        break;
    case 7:
        if (tablaDeJoc[6] == 'X' || tablaDeJoc[6] == '0')
        {
            cout << "                                           " << loc0 << " NU E LIBER, ALEGE UN LOC LIBER!" << endl << endl;
            arataTabla();
            mutari0();
        }
        else
        {
            tablaDeJoc[6] = '0';
            arataTabla();
            numarRunda++;
        }

        break;
    case 8:
        if (tablaDeJoc[7] == 'X' || tablaDeJoc[7] == '0')
        {
            cout << "                                           " << loc0 << " NU E LIBER, ALEGE UN LOC LIBER!" << endl << endl;
            arataTabla();
            mutari0();
        }
        else
        {
            tablaDeJoc[7] = '0';
            arataTabla();
            numarRunda++;
        }

        break;
    case 9:
        if (tablaDeJoc[8] == 'X' || tablaDeJoc[8] == '0')
        {
            cout << "                                           " << loc0 << " NU E LIBER, ALEGE UN LOC LIBER!" << endl << endl;
            arataTabla();
            mutari0();
        }
        else
        {
            tablaDeJoc[8] = '0';
            arataTabla();
            numarRunda++;
        }

        break;
    default:
        cout << "                                           ALEGE UN NUMAR DIN INTERVALUL[1,9]" << endl << endl;
        arataTabla();
        mutari0();
    }
}

void reset()
{
    tablaDeJoc[0] = '1';
    tablaDeJoc[1] = '2';
    tablaDeJoc[2] = '3';
    tablaDeJoc[3] = '4';
    tablaDeJoc[4] = '5';
    tablaDeJoc[5] = '6';
    tablaDeJoc[6] = '7';
    tablaDeJoc[7] = '8';
    tablaDeJoc[8] = '9';
}

void scor()
{
    cout << "                                                 Scor (X - 0) : " << scor1 << " - " << scor2 << endl << endl;
}

bool castigX()
{
    if (tablaDeJoc[1] == 'X' && tablaDeJoc[4] == 'X' && tablaDeJoc[7] == 'X')
        return true;
    else if (tablaDeJoc[0] == 'X' && tablaDeJoc[4] == 'X' && tablaDeJoc[8] == 'X')
        return true;
    else if (tablaDeJoc[0] == 'X' && tablaDeJoc[3] == 'X' && tablaDeJoc[6] == 'X')
        return true;
    else if (tablaDeJoc[2] == 'X' && tablaDeJoc[4] == 'X' && tablaDeJoc[6] == 'X')
        return true;
    else if (tablaDeJoc[0] == 'X' && tablaDeJoc[1] == 'X' && tablaDeJoc[2] == 'X')
        return true;
    else if (tablaDeJoc[3] == 'X' && tablaDeJoc[4] == 'X' && tablaDeJoc[5] == 'X')
        return true;
    else if (tablaDeJoc[6] == 'X' && tablaDeJoc[7] == 'X' && tablaDeJoc[8] == 'X')
        return true;
    else if (tablaDeJoc[2] == 'X' && tablaDeJoc[5] == 'X' && tablaDeJoc[8] == 'X')
        return true;
    else
        return false;
}

bool castig0()
{
    if (tablaDeJoc[1] == '0' && tablaDeJoc[4] == '0' && tablaDeJoc[7] == '0')
        return true;
    else if (tablaDeJoc[0] == '0' && tablaDeJoc[4] == '0' && tablaDeJoc[8] == '0')
        return true;
    else if (tablaDeJoc[0] == '0' && tablaDeJoc[3] == '0' && tablaDeJoc[6] == '0')
        return true;
    else if (tablaDeJoc[2] == '0' && tablaDeJoc[4] == '0' && tablaDeJoc[6] == '0')
        return true;
    else if (tablaDeJoc[0] == '0' && tablaDeJoc[1] == '0' && tablaDeJoc[2] == '0')
        return true;
    else if (tablaDeJoc[3] == '0' && tablaDeJoc[4] == '0' && tablaDeJoc[5] == '0')
        return true;
    else if (tablaDeJoc[6] == '0' && tablaDeJoc[7] == '0' && tablaDeJoc[8] == '0')
        return true;
    else if (tablaDeJoc[2] == '0' && tablaDeJoc[5] == '0' && tablaDeJoc[8] == '0')
        return true;
    else
        return false;
}

bool remiza()
{
    if (!castigX() && !castig0() && numarRunda == 10)
        return true;
    else
        return false;
}
