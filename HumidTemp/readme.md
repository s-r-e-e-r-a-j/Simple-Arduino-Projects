## HumidTemp
HumidTemp is a humidity and temperature detector project using DHT11 sensor, 16x2 LCD and Arduino Uno MicroController Board

## Components Required
- DHT11 Sensor module
- Arduino Uno Board
- 16x2 LCD
- 200 ohm resistor
- 10k potentiometer

## How to Install the Adafruit DHT Library in Arduino IDE  

Follow these steps to install the Adafruit DHT library in your Arduino IDE:  

1. Download the library using this **Download Link**:  
   [**Adafruit DHT Library on GitHub**](https://github.com/adafruit/DHT-sensor-library/archive/refs/heads/master.zip)  
2. Open the **Arduino IDE** on your computer.  
3. Go to the top menu and click on **"Sketch"**.  
4. Select **"Include Library"** > **"Add .ZIP Library..."**.  
5. A file selection dialog will appear. Navigate to the location where you downloaded the ZIP file.  
6. Select the ZIP file and click **"Open"**.  
7. The Arduino IDE will automatically install the library and make it available in the **"Sketch > Include Library"** menu.  
8. Confirm the installation by including the library in a new sketch with:  

   ```cpp
   #include <DHT.h>
   
   ```

## DHT22 Sensor Pin Names

| Name | Description            |
|------|------------------------|
| VCC  | Positive voltage       |
| SDA  | Digital data pin (I/O) |
| GND  | Ground                 |

  ## Circuit Diagram
![circuit_image (3)](https://github.com/user-attachments/assets/b837ab35-e430-4862-a1e0-f4348c80cbae)

  

 

