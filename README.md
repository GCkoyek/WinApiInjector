# WinApiInjector
WinApiInjector to program ktory nadpisuje manipuluje i zmienia pliki w czasie rzeczywistym działania programu, w tym przypadku zmienia pliki i nadpisuje pliki Fivema

# Jak to działa?

* Użytkownik uruchamia aplikacje Fivem i wchodzi na serwer
* WinApiInjector identyfikuje wybrany proces na podstawie PID
* Uzyskuje dostęp do podstawowych informacji o procesie (np. użycie pamięci, wątki)
* Nadpisuje wartości gracza takie jak Hp Stamina Attack_Amount
* Identyfikuje adresy (offsety) powiązane z wybranymi danymi przeciwnika, i wyświetla na ekranie pozycje przeciwnika w czasie rzeczywistym

## Technologie

* C++
* Windows API
* Win32
* ImGui


## Uruchamianie

1. Pobierz repozytorium
2. Skompiluj projekt w Visual Studio
3. Uruchom jako administrator (opcjonalnie dla rozszerzonych danych)
