## HumidTemp
HumidTemp is a humidity and temperature detector project using DHT22 sensor and Arduino Uno MicroController Board

## Components Required
- DHT22 Sensor
- Arduino Uno Board
## How to Install the Adafruit DHT Library in Arduino IDE  

Follow these steps to install the Adafruit DHT library in your Arduino IDE:  

1. Download the **Adafruit DHT library** ZIP file from its official GitHub repository:  
   [Click This to Download The Adafruit DHT Library on GitHub](https://github.com/adafruit/DHT-sensor-library/archive/refs/heads/master.zip)  
2. Open the **Arduino IDE** on your computer.
    
3. Go to the top menu and click on **"Sketch"**.
   
4. Select **"Include Library"** > **"Add .ZIP Library..."**.
   
5. A file selection dialog will appear. Navigate to the location where you downloaded the **Adafruit_DHT.zip** file.
   
6. Select the ZIP file and click **"Open"**.
   
7. The Arduino IDE will automatically install the library and make it available in the **"Sketch > Include Library"** menu.
   
8. Confirm the installation by including the library in a new sketch with: 
   

## DHT22 Sensor Pin Names

| Name | Description            |
|------|------------------------|
| VCC  | Positive voltage       |
| SDA  | Digital data pin (I/O) |
| NC   | Not connected          |
| GND  | Ground                 |

  ## Circuit Diagram

  ![Screenshot 2024-12-31 150052](https://github.com/user-attachments/assets/196a3be9-cb4f-4f6e-83f5-34a41c156905)

  ## Match the Baud Rate in the Serial Monitor

- Open the Arduino IDE.
- After uploading your code, click the Serial Monitor icon (or press Ctrl + Shift + M).
- Set the baud rate in the Serial Monitor dropdown (bottom-right) to `115200`
- then you can see the temperature and humidity on the serial monitor
