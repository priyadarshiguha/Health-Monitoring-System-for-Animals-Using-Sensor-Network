# Health-Monitoring-System-for-Animals-Using-Sensor-Network
## Block Diagram
The prototype model proposed in this paper uses three sensors; the first is the ECG sensor which is responsible for recording electrical impulses through the heart muscles which is also called the electrocardiogram reading or simply as the ECG. The second sensor is the Pulse Oximeter and Heart Rate sensor which is an integrated sensor for recording the heart rate signals and the pulse oximetry which is used to monitor the oxygen saturation or put more simply, the amount of oxygen carried by the body. The third sensor is a simple temperature sensor to measure the body temperature of the bearer. The model is designed to use the sensors to
collect the various reading, convert them into appropriate format and then upload them to the ThingSpeak IOT Cloud Service.

## Simulink Model
In the figure, we can see the Simulink model for the prototype device and how the output from each of the sensors are taken as separate
inputs, and after undergoing some form of conversion are displayed to the user and at the same time are uploaded into the ThingSpeak IOT cloud service.

## Simulation Results
To test the model, a simulation was run using
some sample data for each of the signals acquired from the PhysioNet.org Archive website. The
results of the simulation are shown in the figure below which were displayed using the Dashboard blocks in Simulink.

## Circuit Diagram
Based on the model designed in Simulink, a prototype device can be built around an Arduino UNO board using the sensors
