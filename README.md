# IoTPlantHydration-
AutoPlantWateringSystem 
# Automatic Plant Watering System

This repository contains Arduino code for an automatic plant watering system based on Arduino and the QuadDisplay2 library.

## Description

This project is designed for automatic plant watering based on soil moisture levels. The code monitors the soil moisture level and activates a pump for irrigation when the moisture level drops below a set minimum.

## Requirements

To use this code, you will need the following components and libraries:

- Arduino board
- QuadDisplay2 library
- Soil moisture sensor connected to pin A0
- Water pump connected to pin 4
- Additional components (wires, power supply, etc.)

## Installation

1. Download and install the Arduino IDE if you don't already have it.
2. Install the QuadDisplay2 library.
3. Connect the soil moisture sensor and pump to the appropriate pins on your Arduino as indicated in the code.
4. Upload the code to your Arduino board.

## Usage

After uploading the code to your Arduino board, it will monitor the soil moisture level. If the moisture level falls below the set minimum (HUMIDITY_MIN), the code will activate the pump (connected to the PUMP_PIN) for irrigation. The humidity level will be displayed on the QuadDisplay.

## Configuration

You can adjust some parameters in the code, such as:

- `HUMIDITY_MIN` and `HUMIDITY_MAX` - minimum and maximum soil moisture levels that can be configured.
- `INTERVAL` - the time interval (in milliseconds) at which the code checks moisture and activates the pump.

## License

This project is distributed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Author

Author of this project: [Darya Loktev] ([daryalok@protonmail.com])

## Questions and Feedback

If you have any questions or suggestions, please feel free to create an issue in this repository.

Thank you for using my small project!
