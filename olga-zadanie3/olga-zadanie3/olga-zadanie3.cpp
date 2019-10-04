#include <iostream>

/*ZADANIE 3*/
/*Temat: funkcja warunkowa switch case*/
int main()
{
	bool example = true; //Pomy�la�em, �e czas w ko�cu zrobi� zmienn� logiczn�. 
	//No to tak: zmienna bool przyjmuje dwie warto�ci. true lub false. 
	//Jest te� sama w sobie bardzo prostym wyra�eniem logicznym, wi�c w ifie nie trzeba jej do niczego por�wnywa� i wtedy dzia�anie ifa zale�y bezpo�rednio od jej warto�ci.

	if (example) //je�li prze��czysz wcze�niejsz� zmienn� na false, to poka�e Ci si� kod w dolnym bloku a z g�rnego zniknie. Po pewnie to �e m�j przyk�ad si� zawsze wy�wietla jest lekko denerwuj�ce.
	{
		/*Przyk�ad 3.1*/
		/*Sk�adnia switch*/
		{
			int test = 13; // zmienna kt�r� b�dziemy testowali

			switch (test) // w nawiasach zamiast wyra�enia logicznego zmienna liczbowa ca�kowita (switch rozwa�a wszystkie przypadki, nie tylko jeden konkretny)
			{
				case 1: // po case stawiasz warto�� dla kt�rej b�dzie si� wykonywa� nast�pna cz��. Dwukropek sygnalizuje pocz�tek bloku (zast�puje nawiasy klamrowe)
					std::cout << "Dla wartosci 1\n\n";
					break; // break przerywa wykonywanie switch. Je�li go nie zrobisz wykona si� tak�e kolejny case. I kolejne tak d�ugo a� nie napotka break. Z regu�y jest to nieporz�dane
				case 13:
					std::cout << "Dla wartosci 13. Ta czesc wykonanie sie domyslnie z moim ustawieniem zmiennej test\n\n";
					break;
				case 15:
					std::cout << "Dla wartosci 15\n\n";
				case 16:
					std::cout << "Dla wartosci 16, ale wykona sie takze dla 15 przez to, ze w poprzednim case nie bylo break\n\n";
					break;
				default:
					std::cout << "Dla kazdej innej wartosci niz wymienione w case\n\n";
					break;
			}
		}
		/*KONIEC PRZYK�AD 3.1*/

		/*PRZYK�AD 3.2*/
		/*kopia menu z poprzedniego zadania z wykorzystanie switch case*/
		{
			int u_input = 0;

			std::cout << "#############################" << "\n";
			std::cout << "######## MENU GLOWNE ########" << "\n";
			std::cout << "#############################" << "\n";
			std::cout << "# 1. Opcja 1                #" << "\n";
			std::cout << "# 2. Opcja 2                #" << "\n";
			std::cout << "#############################" << "\n";
			std::cout << "\n";
			std::cout << "Podaj opcje z menu:";

			std::cin >> u_input;

			switch (u_input)
			{
			case 1:
				std::cout << "Tresc opcji 1" << "\n";
				break;
			case 2:
				std::cout << "Tresc opcji 2" << "\n";
				break;
			default:
				std::cout << "Wybrano nieistniejaca opcje!" << "\n";
				break;
			}

			std::cout << "#############################" << "\n";
			std::cout << "########## KONIEC ###########" << "\n";
			std::cout << "#############################" << "\n";
		}
		/*KONIEC PRZYK�AD 3.2*/
	}
	else
	{
		bool switch_current_exercise = false; //wykorzystaj, �eby prze��czy� sobie obecnie wy�wietlane zadanie ;)

		/*ZADANIE 3.1*/
		// Przer�b Tw�j kod z poprzedniego zadania. W miejscach gdzie to stosowne wykorzystaj switch zamiast if, else if, else
		if(!switch_current_exercise) //w nawiasie przed zmienn� jest negacja logiczna. Spowoduje to, �e zmienna zostanie odwr�cona. Dla false wypali if, a dla true else
		{
			int liczba_jeden = 0;
			int liczba_dwa = 0;
			int u_input = 0;
			int suma = 0;


			std::cout << "Podaj pierwsza liczbe" << "\n\n";

			std::cin >> liczba_jeden;

			std::cout << "\n";

			std::cout << "#1. Dodawanie                   #" << "\n\n";
			std::cout << "#2. Odejmowanie                 #" << "\n\n";
			std::cout << "#3. Dzielenie                   #" << "\n\n";
			std::cout << "#4. Mnozenie                    #" << "\n\n";
			std::cout << "Podaj numer opcji" << "\n\n";

			std::cin >> u_input;

			std::cout << "\n";

			std::cout << "Podaj druga liczbe" << "\n\n";

			std::cin >> liczba_dwa;

			std::cout << "\n";

			if (u_input == 1)
			{
				suma = liczba_jeden + liczba_dwa;
				std::cout << "Twoj wynik wynosi: " << suma;
			}

			else if (u_input == 2)
			{
				suma = liczba_jeden - liczba_dwa;
				std::cout << "Twoj wynik wynosi: " << suma;
			}

			else if (u_input == 3)
			{
				if (liczba_dwa != 0)
				{
					suma = liczba_jeden / liczba_dwa;
					std::cout << "Twoj wynik to: " << suma;
				}

				else if (liczba_dwa == 0)
				{
					std::cout << "\n";
					std::cout << "Nie mozna dzielic przez 0, wybierz inna liczbe" << "\n";
					std::cin >> liczba_dwa;
					std::cout << "\n";

					if (liczba_dwa != 0)
					{
						suma = liczba_jeden / liczba_dwa;
						std::cout << "Twoj wynik to: " << suma;
					}

					else
					{
						std::cout << "Jestes glupi" << "\n";
					}
				}
			}

			else if (u_input == 4)
			{
				suma = liczba_jeden * liczba_dwa;
				std::cout << "Twoj wynik wynosi: " << suma;
			}

			else
			{
				std::cout << "Niepoprawna opcja" << "\n";
			}

			std::cout << "\n";
			std::cout << "Czy juz moge zarabiac 6tys netto?" << "\n";

			std::cout << "btw, dziekuje, Arek!";
		}
		/*KONIEC ZADANIE 3.1*/
		else
		/*ZADANIE 3.2*/
		//Napisz program na obliczanie danej potegi liczby.
		//1. pobierz z konsoli podstaw� oraz wyk�adnik.
		//2. opieraj�c si� o warto�� wyk�adnika prze��cz ilokrotnie zmienna b�dzie mno�ona przez siebie wykorzystuj�c switch.
		//3. oblicz warto�� (�eby nie by�o za du�o roboty to dla wyk�adnik�w 0 1 2 3 4).
		//4. wypisz wynik na konsol�.
		{

		}
		/*KONIEC ZADANIE 3.2*/
	}
}
