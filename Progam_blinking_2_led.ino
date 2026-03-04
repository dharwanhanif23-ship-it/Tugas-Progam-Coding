// Pin LED
const int led1 = 13;
const int led2 = A2;

// Variabel waktu
unsigned long previousMillis1 = 0;
unsigned long previousMillis2 = 0;

bool stateLed1 = LOW;
bool stateLed2 = LOW;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();

  // ---- LED 1 ----
  if (stateLed1 == HIGH) {
    if (currentMillis - previousMillis1 >= 4000) { // nyala 4 detik
      stateLed1 = LOW;
      previousMillis1 = currentMillis;
      digitalWrite(led1, stateLed1);
    }
  } else {
    if (currentMillis - previousMillis1 >= 2000) { // mati 2 detik
      stateLed1 = HIGH;
      previousMillis1 = currentMillis;
      digitalWrite(led1, stateLed1);
    }
  }

  // ---- LED 2 ----
  if (stateLed2 == HIGH) {
    if (currentMillis - previousMillis2 >= 2000) { // nyala 2 detik
      stateLed2 = LOW;
      previousMillis2 = currentMillis;
      digitalWrite(led2, stateLed2);
    }
  } else {
    if (currentMillis - previousMillis2 >= 2000) { // mati 2 detik
      stateLed2 = HIGH;
      previousMillis2 = currentMillis;
      digitalWrite(led2, stateLed2);
    }
  }
}