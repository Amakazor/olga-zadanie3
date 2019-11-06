#include <iostream>

/*ZADANIE 3*/
/*Temat: funkcja warunkowa switch case*/
int main()
{
	bool example = false; //Pomyœla³em, ¿e czas w koñcu zrobiæ zmienn¹ logiczn¹. 
	//No to tak: zmienna bool przyjmuje dwie wartoœci. true lub false. 
	//Jest te¿ sama w sobie bardzo prostym wyra¿eniem logicznym, wiêc w ifie nie trzeba jej do niczego porównywaæ i wtedy dzia³anie ifa zale¿y bezpoœrednio od jej wartoœci.

	if (example) //jeœli prze³¹czysz wczeœniejsz¹ zmienn¹ na false, to poka¿e Ci siê kod w dolnym bloku a z górnego zniknie. Po pewnie to ¿e mój przyk³ad siê zawsze wyœwietla jest lekko denerwuj¹ce.
	{
		/*Przyk³ad 3.1*/
		/*Sk³adnia switch*/
		{
			int test = 13; // zmienna któr¹ bêdziemy testowali

			switch (test) // w nawiasach zamiast wyra¿enia logicznego zmienna liczbowa ca³kowita (switch rozwa¿a wszystkie przypadki, nie tylko jeden konkretny)
			{
			case 1: // po case stawiasz wartoœæ dla której bêdzie siê wykonywaæ nastêpna czêœæ. Dwukropek sygnalizuje pocz¹tek bloku (zastêpuje nawiasy klamrowe)
				std::cout << "Dla wartosci 1\n\n";
				break; // break przerywa wykonywanie switch. Jeœli go nie zrobisz wykona siê tak¿e kolejny case. I kolejne tak d³ugo a¿ nie napotka break. Z regu³y jest to nieporz¹dane
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
		/*KONIEC PRZYK£AD 3.1*/

		/*PRZYK£AD 3.2*/
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
		/*KONIEC PRZYK£AD 3.2*/
	}
	else
	{
		bool switch_current_exercise = true; //wykorzystaj, ¿eby prze³¹czyæ sobie obecnie wyœwietlane zadanie ;)

		/*ZADANIE 3.1*/
		// Przerób Twój kod z poprzedniego zadania. W miejscach gdzie to stosowne wykorzystaj switch zamiast if, else if, else
		if (!switch_current_exercise) //w nawiasie przed zmienn¹ jest negacja logiczna. Spowoduje to, ¿e zmienna zostanie odwrócona. Dla false wypali if, a dla true else
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

			switch (u_input)
			{
			case 1:
				suma = liczba_jeden + liczba_dwa;
				std::cout << "Twoj wynik wynosi: " << suma;
				break;

			case 2:
				suma = liczba_jeden - liczba_dwa;
				std::cout << "Twoj wynik wynosi: " << suma;
				break;

			case 3:

				if (liczba_dwa != 0)
				{
					suma = liczba_jeden / liczba_dwa;
					std::cout << "Twoj wynik to: " << suma;
				}

				else
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
			break;

			case 4:

				suma = liczba_jeden * liczba_dwa;
				std::cout << "Twoj wynik wynosi: " << suma;
			break;

			default:

				std::cout << "Niepoprawna opcja" << "\n";

			}

			std::cout << "\n";
			std::cout << "Czy juz moge zarabiac 6tys netto?" << "\n";
		}

		else
		{
			int podstawa = 0;
			int wykladnik = 0;
			int suma = 0;

			std::cout << "Jest to moj pierwszy program do liczenia poteg" << "\n\n";
			std::cout << "Nastepna bedzie rakieta" << "\n\n";

			std::cout << "Podaj prosze podstawe" << "\n\n";

			std::cin >> podstawa;

			std::cout << "\n\n";

			std::cout << "Podaj prosze wykladnik" << "\n\n";

			std::cin >> wykladnik;

			std::cout << "\n\n";


			switch (wykladnik)
			{
			case 0:
				std::cout << "Twoja potega wynosi 0" << '\n\n';

			case 1:
				suma = podstawa;
				std::cout << "Twoja potega wynosi: " << suma << "\n\n";
				break;

			case 2:
				suma = podstawa * podstawa;
				std::cout << "Twoja potega wynosi: " << suma << "\n\n";
				break;

			case 3:
				suma = podstawa * podstawa * podstawa;
				std::cout << "Twoja potega wynosi: " << suma << "\n\n";
				break;

			case 4:
				suma = podstawa * podstawa * podstawa * podstawa;
				std::cout << "Twoja potega wynosi: " << suma << "\n\n";
				break;

			default:
				std::cout << "Nie jestem wystarczajaco dobra, by to zrobic :((" << "\n\n";


			}

			std::cout << "Koniec \n\n";
		}
	}
	std::cout << "spoko jestes";
}

