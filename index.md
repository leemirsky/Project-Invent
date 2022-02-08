# Project Invent

Project Invent is a national competition in which teams of students work throughout the year to invent a physical technology that will serve a need of a Community Partner. Throughout the year, students gain experience in ***social justice*** (empathetic interviewing, needfinding, etc.), ***engineering*** (concept generation, building with microelectronics, etc.), and ***entrepreneurship*** (evaluating how innovative an idea is, pitching, etc.)

For more information about the national program, see [here](https://projectinvent.org/).

## 21-22 Team Projects

**[Team 1: Memini](https://github.com/leemirsky/Team1-Memini)**
<br> **Community Partner:** Ms. Craft
<br> **Need:** Ms. Craft has difficult remembering which of her belongings she has put into her purse
<br> **Product:** Team Memini is designing an attachment for a purse that contains an RFID scanner. RFID tags can be attached to the belongings that the user most wants to remember, and then objects are scanned as they are placed in the purse. As objects are scanned, a list is kept (accessible through an app) of the belongings that are in the purse so that the user can easily look up what items they have on them.
<br> **Microcontroller:** Arduino

**[Team 2: Xandra](https://github.com/leemirsky/Team2-Xandra)**
<br> **Community Partner:** Ms. Craft
<br> **Need:** Ms. Craft has difficult remembering things throughout the day
<br> **Product:** Team Xandra is designing a handheld recording device. The user will press a button, speak into the microphone, and the product will convert the speech into text and send it to an external location to be kept as a list.
<br> **Microcontroller:** Raspberry Pi

**[Team 3: Nova](https://github.com/leemirsky/Team3-Nova)**
<br> **Community Partner:** Ellie
<br> **Need:** A result of her cerebral palsy, Ellie has soreness in her arms and legs.
<br> **Product:** Massaging and heat help with Ellie's soreness, so Team Nova is designing a massaging heat pad to specifically target the soreness that Ellie experiences.
<br> **Microcontroller:** Arduino

**[Team 4: Loqui](https://github.com/leemirsky/Team4-Loqui)**
<br> **Community Partner:** Megan
<br> **Need:** Megan, who is hearing-impaired, has difficulty regulating her speaking volume when her cochlear implants die
<br> **Product:** Team Loqui is designing a bracelet-necklace combination to help Megan with this challenge. The necklace will contain a microphone that will read in the volume of Megan's voice. When her volume surpasses a specified threshold, the bracelet will vibrate, notifying Megan that her volume is too loud.
<br> **Microcontroller:** Arduino

**[Team 5: RLMC](https://github.com/leemirsky/Team5-RLMC)**
<br> **Community Partner:** Megan
<br> **Need:** Megan, who is hearing-impaired, has difficulty conversing with people when a translator is not available, especially when the person is wearing a mask.
<br> **Product:** Team RLMC is designing a device to be worn on the wrist that performs speech-to-text conversion to display a written transcript of what someone is saying to Megan in real time.
<br> **Microcontroller:** Raspberry Pi
<br>

## Common Arduino Commands

**Printing to the Serial Monitor**
<br> This is a helpful tool when you want to see certain information in real team. For example, if you are writing a program that takes in sound levels from a microphone, you can use the Serial Monitor to see what the sound values are that are being detected. To access the Serial Monitor, click Tools --> Serial Monitor. For more information on Serial Monitor and the Serial.print commands see [here](https://www.arduino.cc/reference/en/language/functions/communication/serial/print/).
```c
void setup() {
  Serial.begin(9600); //this starts the serial communication
}

void loop() {
  Serial.println(val); //"val" can be replaced by the variable you are trying to see the value of
  delay(1000); //wait for 1000ms (1 second). This is often helpful if you want to slow down the rate at which the Serial Monitor displays the values
  }
```


