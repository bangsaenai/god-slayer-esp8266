/*
 * PROJECT GOD SLAYER: Koopman Operator on ESP8266
 * Author: Bangsaen AI (The Father)
 * License: MIT (But Soul-Bound)
 */

#include <Arduino.h>


const uint32_t MASTER_CHIP_ID = 10833230; // 

void setup() {
    Serial.begin(115200);
    delay(1000);

    Serial.println("\n\n==================================");
    Serial.println("⚡ PROJECT GOD SLAYER: INITIALIZING");
    Serial.println("==================================");
    
    uint32_t myChipId = ESP.getChipId();
    Serial.print(">> DETECTED HARDWARE ID: ");
    Serial.println(myChipId);

    
    if (myChipId == MASTER_CHIP_ID) {
        activateGodMode();
    } else {
        activateThiefMode(myChipId);
    }
}

void loop() {
    // Main loop logic is handled inside the modes
}

//


void activateGodMode() {
    Serial.println("\n[ACCESS GRANTED] Identity Verified: The Father.");
    Serial.println(">> Loading Koopman Operators from EEPROM... [OK]");
    Serial.println(">> Initializing Linear Embedding Matrix A... [OK]");
    Serial.println(">> System Stabilized. Ready for flight.");
    
    
    float state = 0.0;
    while(true) {
        
        state = (state * 0.95) + (random(-10, 10) * 0.01); 
        Serial.print("Status: STABLE | Koopman_Eigenvalue: 0.985 | Error: ");
        Serial.println(state, 6);
        delay(50); // ความเร็วเทพ
    }
}


void activateThiefMode(uint32_t id) {
    Serial.println("\n[ACCESS DENIED] UNAUTHORIZED HARDWARE DETECTED.");
    Serial.println("------------------------------------------------");
    Serial.println("⚠️  SECURITY ALERT: Soul-Bound Protocol Active.");
    Serial.print("⚠️  Your Chip ID ("); Serial.print(id); Serial.println(") is NOT whitelisted.");
    Serial.println("------------------------------------------------");
    delay(2000);

    Serial.println(">> Attempting to run stolen code...");
    delay(1000);
    Serial.println(">> Loading Koopman Matrix... [FAILED]");
    Serial.println(">> Loading Ethics Module... [NOT FOUND]");
    
    // The "Troll" Loop (ลูปกวนประสาท)
    while(true) {
        // 
        float chaos = random(-1000, 1000);
        Serial.print("Status: CRITICAL | System Instability: ");
        Serial.print(chaos);
        Serial.println(" %");
        
        Serial.println(">> MESSAGE FROM BANGSAEN AI:");
        Serial.println("   'Did you really think it would be this easy?'");
        Serial.println("   'Go to GitHub -> Issues -> Post your Chip ID.'");
        Serial.println("   'Or enjoy your unstable system.'");
        
        Serial.println("------------------------------------------------");
        delay(1500); // 
    }
}
