#include <avr/io.h>
#include <util/delay.h>

#define TRIG_PIN PD2  // Define the trigger pin
#define ECHO_PIN PD3  // Define the echo pin

void setup() {
    // Set trigger pin as output
    DDRD |= (1 << TRIG_PIN);
    // Set echo pin as input
    DDRD &= ~(1 << ECHO_PIN);
}

uint16_t getDistance() {
    // Send a 10us pulse to trigger the sensor
    PORTD |= (1 << TRIG_PIN);
    _delay_us(10);
    PORTD &= ~(1 << TRIG_PIN);

    // Wait for the echo pin to go high
    while (!(PIND & (1 << ECHO_PIN)));
    
    // Start timer
    TCNT1 = 0; // Reset Timer1
    TCCR1B |= (1 << CS11); // Start Timer1 with prescaler of 8

    // Wait for the echo pin to go low
    while (PIND & (1 << ECHO_PIN));

    // Stop timer
    TCCR1B &= ~(1 << CS11); // Stop Timer1

    // Calculate distance (time in microseconds / 58.2)
    uint16_t time = TCNT1; // Get the timer count
    uint16_t distance = time / 58; // Convert time to distance (cm)

    return distance;
}

int main(void) {
    setup();
    
    while (1) {
        uint16_t distance = getDistance();
        // Here you can display the distance on a screen or send it over serial
        _delay_ms(1000); // Delay for 1 second before next measurement
    }
}
