## Develop 2

1. draaien van knoppen
2. machine interface onderzoek
3. bevestigingsmechanismen


### Doelstellingen
In de vorige de develop 1 fase werd een schema met human-product-interactie's opgesteld. Daar werd ook voor elke subfunctie oplossingen bedacht.

In deze fase moet verder onderzoek en tests gedaan worden om de beste deeloplossingen te selecteren.

Er wordt ingegaan op volgende deelfuncties:
- Draaien van knoppen
- Machine interface =  instellen van de interactie-locatie
- Bevestigingsmechanismen

### Methoden
#### 1. Draaien van knoppen
Bij het besturen van een draaiknop komen er twee hoofdzaken naar boven:
•	Welke actuator zullen we gebruiken?
•	Hoe gaan we de draaiknop manipuleren?
<br>

##### Actuator
<p align="left">
  <img src="../img/ideation-draaien.png" width="62%">
</p>

1.	Ideeën generatie actuatoren
2.	De resultaten van vorig onderzoek, die nuttig zijn, worden gebruikt om actuatoren te elimineren
3.	Kracht servo apart uittesten op de knop*
4.	Er wordt één finale actuator gekozen


> [!NOTE]
>*Een servo is eigenlijk opgebouwd uit een geborstelde DC motor en tandwielkast met toevoeging van één of andere sensor.
>Omdat die feedback van een sensor in deze toepassing belangrijk is, zou het makkelijker zijn, om de servo te gebruiken. Daarvoor moet de servo echter sterk genoeg zijn om de knop te kunnen draaien. Voor die reden wordt de servo nog eens apart uitgetest op de knop.

<br>

##### Manipulatie draaiknop
<p>
  <img align="left" src="../img/ideation-draaiknop bedienen.png" width="28%" style="margin-right: 15px"><br>1.	Ideeën generatie om de knop te kunnen manipuleren<br>
  2.	Er worden prototypes gemaakt voor de verschillende ideeën<br>
  3.	De prototypes worden uitgetest op de draaiknop van een wasmachine (beiden worden aangestuurd met hetzelfde handvat)<br>
  4.	De voordelen en nadelen van elk idee worden opgesomd<br>
  5.	De ideeën worden vergeleken en er wordt één idee uitgekozen<br>
  <br>
  Voor meer detail over dit onderzoek of een blik op de gebruikte prototypes, zie <a href="../reports and protocols/2. Draaien van knoppen protocol.pdf">Draaien van knoppen protocol</a>.
</p>
<br clear="left" />


#### 2. machine interface onderzoek
#TODO
#### 3. bevestigingsmechanismen
<p align="left">
  <img src="../img/ideation-bevestigingsmechanismen.png" width="80%"></p>
  
##### Deel 1: eerste intuïtieve eliminatie.

##### Deel 2: prototyping + vergelijkend testen.
1.	Modulair prototypen
2.	Op wasmachine hangen
3.	Met weegschaal aan het prototype trekken tot het los komt
4.	Filmen bij hoeveel kg kracht het bevestigingsmechanisme lost
5.	Maximale kracht opmeten voor trek en moment voor elke oplossing
6.	Per oplossing 4 tests uitvoeren: 2x trek & 2x moment
7.	Tabel opstellen en gemiddeldes van trek en moment per oplossing berekenen
8.	Grafiek opstellen

Voor meer detail over dit onderzoek of een blik op de gebruikte prototypes, zie <a href="../reports and protocols/4. Bevestigingsmechanismen protocol.pdf">Bevestigignsmechanismen protocol</a>.

 
<br clear="left" />

### Resultaten
#### 1. Draaien van knoppen

##### a. Vergelijking actuatoren
||Kracht|Gewicht|Gemak aansturing|Feedbackloop|
|--:|:--:|:--:|:--:|:--|
|**Servo**|Matig|Matig|Matig|Ja => hoge precisie + herhaalbaarheid|
|**Stepper**|Matig|Zwaar|Moeilijk|Nee (Maar hoge precisie + herhaalbaarheid, bij geen slip)|
|**Brushed + gearbox**|Zeer hoog|Zwaar|Makkelijk|Nee|


> [!NOTE] 
>stepper niet uitgetest op machine #TODO

<br>

##### b. Extra servo test

><a href="../reports and protocols/4. Bevestigingsmechanismen protocol.pdf"><b>Servo_draaien knoppen.mp4</b></a>
>De servo had niet genoeg kracht om zelfstandig te knop te draaien, maar er was niet veel extra kracht vereist. Er werd niet getest met een sterkere servo-motor, maar er kan vanuit gegaan worden dat grotere servo-motoren wel de knop zouden kunnen draaien.

<br>

##### c. Pros & Cons manipulatie draaiknop
###### Knijper rond draaiknop
<p >
  <img align="left" src="../img/Knijper rond draaiknop.png" width="40%" style="margin-right: 60px">

✅ Er is veel grip door de instelbare klemkracht
✅ Geen perfect ronde vorm nodig
✅ Uitstekende vormen zijn geen probleem
✅ Eenvoudige constructie

❌ Er is meer kracht nodig dan de andere concepten omdat er geen overbrenging aanwezig is (as motor = as knijper, zonder overbrenging)</p>
<br clear="left" />
<br>

###### Wieltje tegen draaiknop
<p >
  <img align="right" src="../img/Wieltje tegen draaiknop.png" width="40%" style="margin-left: 60px">

✅ Voordelige overbrenging, die de nodige kracht van de motor verminderd: door het verschil in diameter tussen het kleine wieltje en de grotere draaknop verminderd de aandrijfkracht.
✅ Het is een zeer compacte oplossing
✅ Eenvoudige constructie en montage

❌ Weinig grip, waardoor er slip aanwezig is en de draaiknop **onbetrouwbaar of niet zal roteren**
❌ **Werkt enkel** goed **met één vorm**: een perfect ronde cirkel, zonder uitstekende delen

</p>
<br clear="right" />
<br>

###### Vertanding op draaiknop met een tandwiel
<p>
  <img align="left" src="../img/Vertanding op draaiknop met tandwiel.png" width="40%" style="margin-right: 60px">
</p>

✅ Er is een overbrenging aanwezig wat de nodige kracht van de motor verminderd.
✅ Het is een compacte oplossing

❌ Kans op slip tussen tandwielring en draaiknop
❌	Niet zo universeel:
-→ ❌ Werkt enkel goed met één vorm: een perfect ronde cirkel
-→ ❌ Uitstekende delen van de draaiknop zorgen voor problemen
-→ ❌ Verschil in knopdiameter tussen toestellen zorgt voor compatibiliteitsproblemen
<br clear="left" />
<br>

#### 2. machine interface onderzoek
#TODO
#### 3. bevestigingsmechanismen

### Conclusies & implicaties

#### Key insights