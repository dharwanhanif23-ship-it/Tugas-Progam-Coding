#define HIJAU  PB7
#define KUNING PB8
#define MERAH  PB9

void setup() {
  pinMode(HIJAU, OUTPUT);
  pinMode(KUNING, OUTPUT);
  pinMode(MERAH, OUTPUT);
}

void loop() {

  digitalWrite(HIJAU, HIGH);
  digitalWrite(KUNING, LOW);
  digitalWrite(MERAH, LOW);
  delay(5000);

  digitalWrite(HIJAU, LOW);
  digitalWrite(KUNING, HIGH);
  digitalWrite(MERAH, LOW);
  delay(2000);

  digitalWrite(HIJAU, LOW);
  digitalWrite(KUNING, LOW);
  digitalWrite(MERAH, HIGH);
  delay(5000);
}