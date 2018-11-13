 /* *****************************************************************************************************************************
 * Rollershutter Node Definition
 * 
 * Created by (2016) Pascal Moreau / Scalz
 * 
 * ******************************************************************************************************************************/

#ifndef MyNodeDefinition_h
#define MyNodeDefinition_h

/* *******************************************************************************************************************
 *                                          MYSENSORS 
 * ******************************************************************************************************************/
#define MY_BAUD_RATE      115200
#define MY_NODE_ID        12

#define MY_RADIO_NRF24
#define MY_RF24_CHANNEL 110
// En todos los nodos que van con line power activo repeater
#define MY_REPEATER_FEATURE

// Ver luego si se puede subir la potencia, cambiar de canal, etc.

//#define MY_NODE_LOCK_FEATURE //!< Enable lockdown of node if suspicious activity is detected

// Select soft/hardware signing method
//#define MY_SIGNING_ATSHA204 //!< Hardware signing using ATSHA204A

// Enable node whitelisting
//#define MY_SIGNING_NODE_WHITELISTING {{.nodeId = GATEWAY_ADDRESS,.serial = {0x09,0x08,0x07,0x06,0x05,0x04,0x03,0x02,0x01}}}
// Enable this if you want destination node to sign all messages sent to this node.
//#define MY_SIGNING_REQUEST_SIGNATURES

// Enable MY_OTA_FIRMWARE_FEATURE in sketch to allow safe over-the-air firmware updates.
// This feature requires external flash and the DualOptiBoot boot-loader.
// Note: You can still have OTA FW updates without external flash but it
// requires the MYSBootloader and disabled MY_OTA_FIRMWARE_FEATURE
//#define MY_OTA_FIRMWARE_FEATURE

// How many milli seconds should we wait for OTA?
//#define OTA_WAIT_PERIOD 300

#define MY_DEBUG // Enable Mysensors debug prints to serial monitor, comment it to save memory

/* *******************************************************************************************************************
 *                                          PIN MAPPING 
 * ******************************************************************************************************************/
#define MY_OTA_FLASH_SS   8     // EEprom CS pin
#define ATSHA204_PIN      17    // A3 Arduino Digital I/O pin number for ATSHA204A sot23 ic (for authentication)

#define RELAY_UPDOWN      A1    // Digital I/O pin number for relay SPDT
#define RELAY_POWER       A2    // Digital I/O pin number for relay SPST : Normally open, power off rollershutter motor, if A2==1 and A1==0 moveup, if A2==1 and A1==1 movedown, if A2==0 power off
#define DEBUG_LED         6     // Digital I/O pin number for onboard debug led
#define BUTTON_STOP       3     // Digital I/O pin number for button Stop
#define BUTTON_UP         18    // Digital I/O pin number for button Up
#define BUTTON_DOWN       19    // Digital I/O pin number for button Down

#define ACS712_SENSOR     A7    // ADC for ACS712 current sensor 
#define DS18B20_PIN       4     // One Wire Temperature sensor for onboard monitoring

/* *******************************************************************************************************************
 *                                          NODE 
 * ******************************************************************************************************************/
//#define MY_REPEATER_FEATURE   // Enable repeater functionality for this node

#define RELEASE           "1.0"
#define NODE_NAME         "RollerShutter"
#define MY_DEBUG_SKETCH                               // Enable specific sketch debug prints to serial monitor, comment it to save memory

#define CHILD_ID_ROLLERSHUTTER    1                   // Rollershutter UP/DOWN/STOP/PERCENT
#define CHILD_ID_AUTOCALIBRATION  2                   // start calibration
#define CHILD_ID_TEMPERATURE      3                   // onboard NTC temperature sensor, to monitor board temperature
#define CHILD_ID_ENDSTOP          4                   // endstop
#define CHILD_ID_PERCENT          5                   // Rollershutter PERCENT for jeedom controller (jeedom is not already updated to mysensors 2...
#define CHILD_ID_CURRENT          6                   // Current sensor id

// ********************* CURRENT SENSOR & ADC DEFINES ********************************
#define ACS712_NUMSAMPLES         5                   // how many acs712 samples
#define ACS712_LEVELDETECT        100                 // Current sensor value when motor is halted 
#define ACS712_OFFSET             100                 // Offset for current sensor

// ********************* TEMPERATURE DEFINES *****************************************
#define TEMPERATURE_NUMSAMPLES    5                   // how many samples

#define TEMPERATURE_ALARM         45                  // temperature threshold for alarm

#define TEMP_MEASURE_INTERVAL     10000                // How many milli seconds between each measurement

// no encuentro en ningun lado esto. O sea nunca manda toda la info cada 30 segundos.
#define FORCE_TRANSMIT_INTERVAL   30                  // number of seconds, the sensor is forced to report all values to the controller
#define TEMP_TRANSMIT_THRESHOLD   0.1                   // how much the temperature should have changed since last time it was transmitted. 

// ********************* BUTTONS STATES **********************************************
#define BT_PRESS_NONE             0                   // 
#define BT_PRESS_UP               1                   // 
#define BT_PRESS_DOWN             2                   // 
#define BT_PRESS_STOP             4                   // 

#endif
