#define LIGHT_LEVEL_THRESHOLD 400

void setup() {
 
} 

void loop() { 
    
   int darkness = random(1, 5) * 100;
   
   if (darkness >= LIGHT_LEVEL_THRESHOLD) 
   { 
       Particle.publish("light-level-changed", "dark"); 
       delay(5000);
   }
   else 
   { 
       Particle.publish("light-level-changed", "bright"); 
       delay(5000);
   } 
}