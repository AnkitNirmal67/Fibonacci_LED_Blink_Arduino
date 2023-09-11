// Fibonacci LED Blinking
int ledPin = 13; // Pin number for the built-in LED
int fibDelay = 500; // Delay between blinks in milliseconds

void setup() {
  pinMode(ledPin, OUTPUT); // Set the LED pin as an output
  Serial.begin(9600);
}

void loop() {
  int a = 0;
  int b = 1;
  int fib = 0;

  while (fib <= 13) { // Limit the Fibonacci sequence to 13 for visibility
    // Calculate the next Fibonacci number
    fib = a + b;

    // Blink the LED fib times
    for (int i = 0; i < fib; i++) {
      digitalWrite(ledPin, HIGH); // Turn on the LED
      delay(fibDelay);
      digitalWrite(ledPin, LOW); // Turn off the LED
      delay(fibDelay);
    }

    // Update Fibonacci sequence values
    a = b;
    b = fib;
  }
  
  // Blink the LED 5 times at the end
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledPin, HIGH); // Turn on the LED
    delay(fibDelay);
    digitalWrite(ledPin, LOW); // Turn off the LED
    delay(fibDelay);
  }

  delay(5000); // Wait for 5 seconds before starting again
}
