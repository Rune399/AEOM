# Handleiding voor het laatste prototype
## Benodigde materialen

### Elektronica

| Component | Aantal |
|------------|---------|
| Arduino UNO | 1 |
| Servomotor | 1 |
| Steppermotor | 1 |
| Potentiometer | 1 |
| Breadboard | 1 |
| Jumper wires | Meerdere |

### Mechanische onderdelen

| Component | Aantal |
|------------|---------|
| 3D-geprinte onderdelen | Zie STL-bestanden |
| M3 bouten | Diverse |
| M3 moeren | Diverse |
| Secondelijm | 1 |

### Aankooplinks

- **Arduino UNO**  
  https://www.amazon.de/dp/B007R9TUJE

- **Servomotor**  
  https://www.amazon.de/dp/B0CP7RR3F5

- **Steppermotor**  
  https://www.amazon.de/dp/B0CW9ST4XM

- **Potentiometer**  
  https://www.amazon.de/dp/B01NCAJHZB

- **Breadboard**  
  https://www.amazon.de/dp/B07KKJSFM1

- **Jumper wires**  
  https://www.amazon.de/dp/B07KKJSFM1

- **Externe regelbare voeding**  
  https://www.amazon.de/dp/B0D3PVL1V7

## Schakeling
### Elektronische onderdelen

AEOM maakt gebruik van een eenvoudige maar modulaire elektronica-opbouw rond een **Arduino UNO**. Het systeem combineert een **servomotor** voor het bedienen van draaiknoppen en een **stappenmotor** voor het positioneren van de arm.

#### Elektrisch schema

<p align="center">
  <img src="img/Servo_and_Stepper_schema.png" width="80%">
</p>

#### Gebruikte componenten

| Component | Functie |
|------------|------------|
| Arduino UNO | Hoofdcontroller van het systeem |
| SG90 Servomotor | Bediening van draaiknoppen |
| 28BYJ-48 Steppermotor | Positionering van de arm |
| ULN2003 Driver Board | Aansturing van de steppermotor |
| Potentiometers | Handmatige invoer voor de gebruiker |
| Breadboard | Prototype-opstelling |
| Jumper wires | Elektrische verbindingen |
| Externe 5V voeding | Voeding voor servo en steppermotor |

### Aansluitingen

#### Servo (SG90)

| Servo | Arduino |
|---------|---------|
| Signaal | Pin 3 |
| Voeding | Externe 5V |
| GND | Gemeenschappelijke GND |

#### Steppermotor (28BYJ-48)

| ULN2003 | Arduino |
|---------|---------|
| IN1 | Pin 8 |
| IN2 | Pin 9 |
| IN3 | Pin 10 |
| IN4 | Pin 11 |

De ULN2003-driver wordt gevoed door een externe 5V-voeding en is verbonden met de 28BYJ-48 steppermotor.

#### Potentiometers

| Potentiometer | Arduino |
|---------------|----------|
| Pot 1 | A0 |
| Pot 2 | A1 |
| VCC | 5V |
| GND | GND |

### Voeding

De servo en steppermotor worden gevoed via een **externe 5V-voeding**. Dit voorkomt spanningsvallen en instabiliteit die kunnen optreden wanneer de motoren rechtstreeks via de Arduino worden gevoed.

> **Belangrijk:** De GND van de externe voeding moet verbonden worden met de GND van de Arduino zodat alle componenten dezelfde referentiespanning delen.

### Werking

1. De Arduino leest de waarden van beide potentiometers via de analoge ingangen A0 en A1.
2. Op basis van deze input wordt de positie van de steppermotor bepaald.
3. De steppermotor wordt aangestuurd via de ULN2003-driver.
4. De servomotor wordt rechtstreeks bestuurd via een PWM-signaal op pin 3.
5. De externe voeding levert voldoende stroom voor beide motoren terwijl de Arduino de besturingslogica verzorgt.

### Ontwerpkeuze

Deze elektronica-opbouw werd gekozen omdat ze:

- Eenvoudig te prototypen is.
- Gebruikmaakt van goedkope en makkelijk verkrijgbare componenten.
- Modulair uitbreidbaar is.
- Betrouwbaar werkt voor zowel positionering als knopbediening.
- Een duidelijke scheiding maakt tussen logica (Arduino) en vermogen (motoren).

Hierdoor blijft het systeem stabiel, onderhoudsvriendelijk en eenvoudig reproduceerbaar.
## Constructie

AEOM is ontworpen als een volledig 3D-geprint prototype. Alle structurele onderdelen werden geproduceerd via FDM 3D-printing en zijn modulair opgebouwd zodat onderdelen eenvoudig vervangen of aangepast kunnen worden.

### Montage

- Alle geprinte onderdelen worden samengebouwd met standaard M3-bouten en M3-moeren.
- De Arduino, potentiometer en motoren worden bevestigd in de daarvoor voorziene houders.
- De steppermotor wordt gemonteerd in de motorhouder van het positioneringsmechanisme.
- Na montage wordt het aandrijftandwiel op de motoras geplaatst en uitgelijnd.
- Om speling te voorkomen wordt het tandwiel permanent bevestigd met secondelijm.
- De servomotor wordt gemonteerd in de armconstructie voor het bedienen van draaiknoppen.
- Na montage worden alle kabels aangesloten via een breadboard met jumper wires.

### Montagevolgorde

1. Print alle STL-bestanden.
2. Monteer het hoofdframe met M3-bouten en moeren.
3. Monteer de bewegende arm.
4. Bevestig de steppermotor in de motorhouder.
5. Plaats het tandwiel op de motoras.
6. Verlijm het tandwiel met secondelijm.
7. Monteer de servomotor.
8. Bevestig de Arduino UNO.
9. Sluit de potentiometer aan.
10. Verbind alle componenten met jumper wires via het breadboard.
11. Upload de software naar de Arduino.
12. Test en kalibreer het systeem.

### Opmerking

Het volledige prototype is ontworpen volgens een **Design for Assembly (DFA)** principe. Door uitsluitend gebruik te maken van 3D-geprinte onderdelen, standaard M3-bevestigingsmateriaal en een beperkt aantal elektronische componenten blijft het systeem eenvoudig te produceren, assembleren en onderhouden.
