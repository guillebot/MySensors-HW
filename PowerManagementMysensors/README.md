# PowerManagementMysensors

I mixed Anticimex(Patrick Fallberg) SensorsNode (in dev) with functionalities of ulpnode, to fit my needs. All credits to them for concepts and idea (links below). Here is my version still in dev.

- Arduino pro mini connector

- C1 : Storage capacitor if using Ultra Low power Node 
- JP1, JP2 : Power by VIN, Bypass DC Boost 3v and capa c1 
- JP3 : enable/disable DC Booster +5V 
- JP4 : enable/disable 2v supervisor and its interrupt 
- JP5 : choose INT2 Mode : INT2 or Interrupt on 2V supervisor (if 2v, wake up arduino, enable dc booster to charge C1) 
- JP6 : Radio CSN Pin NRF or RFM69 
- JP7 : choose INT1 mode : INT1 or INT NRF connection

- A0 PIN : ADC Input used for reading C1 voltage 
- A1 PIN : Output : Enable/disable RF VCC 
- A2 PIN : ADC Input used for reading battery voltage 
- D4 PIN : Output : Enable/disable Sensors 3V Rail 
- D5 PIN : Output : enable/disable DC Boost 3v

Connectors : 
- +3V Sensors 
- +5V GND 
- J1 : free. connected to TX 
- J2 : free. connected to RX 
- J3 : free. connected to D3 INT1 (jumper config) 
- J4 : free. connected to D6. PWM 
- J5 : free. connected to A6. ADC1 
- J6 : free. connected to A7. ADC2 
- J7 : free. SPI CSN. connected to D7. 
- J8 : free. connected to D3. INT2 (jumper config) 
- J9 : I2C1 
- J10 : I2C2

- FLASH for OTA
- ATSHA204A authentication
- NRF24 or RFM69 footprint 
- AVRSPI connector
- I2C pull ups on board


TODO : 
- add pin description
- add Bill of Materials
- add gerbers for Seeed, Itead, and OSH fabhouses.
- custom bootloader


Links, reference and license : 
https://github.com/fallberg/MySensorsNode
https://hallard.me/category/ulpnode/

All designs are released under the CERN Open Hardware Licence v1.2.