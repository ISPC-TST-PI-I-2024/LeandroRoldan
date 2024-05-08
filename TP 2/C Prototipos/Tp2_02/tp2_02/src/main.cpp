#define DHTPIN 13 // Pin GPIO al que está conectado el sensor DHT11
#define DHTTYPE DHT11 // Tipo de sensor DHT

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600); // Iniciar comunicación serial a 9600 baudios
  dht.begin(); // Iniciar el sensor DHT11
}

void loop() {
  delay(2000); // Esperar 2 segundos entre lecturas

  int humedad = dht.readHumidity();
  int temperatura = dht.readTemperature();

  if (isnan(humedad) || isnan(temperatura)) {
    Serial.println("Error al leer el sensor");
    return;
  }

  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" °C");
  Serial.print("Humedad: ");
  Serial.print(humedad);
  Serial.println(" %");
}