# CAN Messages Read By the IPM2

## Implement Work State

| Field             | Value                             |
| ----------------- | --------------------------------- |
| PGN Name          | Meter Master Controller State     |
| PGN ID            | 3105                              |
| PGN Short Name    | MMC_STATE                         |
| PGN Number        | 65534 (0x00FFFE)                  |
| DPQ               | 0 (0x00)                          |
| CMD Byte 1 & 2    | 173 (0xAD)                        |
| PDUF              | 255 (0xFF)                        |
| Data Length       | (bytes)	8                       |
| PDUS              | 254 (0xFE)                        |
| Default Priority  | 6                                 |
| PDU Type          | PDU 2                             |
| Sugg.Rep.Rate     | (msec) 200	                    |
| Sugg.Rep.Rate     | (text) 200 mS                     |

| Byte(s)   | Bit(s)    | Parameter Name                                                    |
| --------- | --------- | ----------------------------------------------------------------- |
| 1	        | 1-8       | Command Byte 1 (0xAD)                                             |
| 2	        | 5-8       | Down Force #2 Control Mode                                        |
|  	        | 1-4       | Down Force Control Mode                                           |
| 3	        | 7-8       | Row Unit Down Force Air Compressor (High Capacity) Configuration  |
|  	        | 5-6       | Row Unit Down Force Air Compressor State                          |
|  	        | 3-4       | Row Unit Down Force Decrease State                                |
|  	        | 1-2       | Row Unit Down Force Increase State                                | 
| 4	        | 7-8       | High Definition Mapping Command                                   |
|  	        | **5-6**   | **Implement Work State #2**                                       |
|  	        | 3-4       | Row Unit Down Force #2 Increase State                             |
|           | 1-2       | Row Unit Down Force #2 Decrease State                             |
| 5-6       | 1-16      | Row Unit Down Force                                               |
| 7-8       | 1-16      | Row Unit Down Force #2                                            |

*Bold indicates that part of the message is used by Furrow*

SPN: ImpWorkState2

VNSM: [Link](http://www2.rx.deere.com/EmbeddedDevelopment/CANdB/J1939/SearchView/Parameter_Update_Action_HTML.cfm?spnid=15067&jdspn=700055&choice=view&Archive=Y)

| Bit States    | State Name    | Description                       |
| ------------- | ------------- | --------------------------------- |
| 00            | (0)           | Implement not engaged             |
| 01            | (1)           | Implement engaged                 |
| 10            | (2)           | Error                             |
| 11            | (3)           | Not available or not installed    |

### Uses
Required to be in Implemented Engaged state for SLUs to trigger (R51) and Depth to be sent over CAN (R50)

## Implement Ground Speed
CAN Message: Planter Data 5

VNSM: [Link](http://www2.rx.deere.com/EmbeddedDevelopment/CANdb/J1939/SearchView/PGN_Update_Action_HTML.cfm?pgnid=3869&archive=Y&Choice=View)

| Field             | Value             |
| ----------------- | ----------------- |
| PGN Name          | Planter Data 5	|
| PGN ID            | 3869              |
| PGN Short Name    | PLANTDATA5        |
| PGN Number        | 65531 (0x00FFFB)  | 
| DPQ               | 0 (0x00)          |
| CMD Byte 1 & 2    | 246 123 (0xF67B)  |
| PDUF              | 255 (0xFF)        |
| Data Length       | (bytes) 8         | 
| PDUS              | 251 (0xFB)        |
| Default Priority  | 6                 |
| PDU Type          | PDU 2             |

SPN: Implement Composite Ground Speed Reference

VNSM: [Link](http://www2.rx.deere.com/EmbeddedDevelopment/CANdb/J1939/SearchView/Parameter_Update_Action_HTML.cfm?spnid=17692&jdspn=702880&choice=view&Archive=Y)

| Byte(s)   | Bit(s)    | Parameter Name                                                |
| --------- | --------- | ------------------------------------------------------------- |
| 1	        | 1-8       | Command Byte 1 (0xF6)                                         |
| 2	        | 1-8       | Command Byte 2 (0x7B)                                         |
| 3-4       | 1-16      | **Implement Composite Ground Speed Reference**                |
| 5	        | 1-8       | Planter Composite Ride Quality (Percent)                      |
| 6	        | 1-8       | Gauge Wheel Composite Contact Time (Percent)                  |
| 7	        | 7-8       | Not Defined                                                   |
|  	        | 4-6       | Planter Composite Ride Quality Indication Color Command       |
|  	        | 1-3       | Implement Composite Ground Speed Reference Color Command      |
| 8	        | 8-4       | Not Defined                                                   |
|  	        | 1-3       | Gauge Wheel Composite Contact Time Indication Color Command   |

*Bold indicates that part of the message is used by Furrow*

Implement Composite Ground Speed Reference
2 m/hr/bit

### Uses
Required to be at least 1.25mph implement ground speed for SLUs to trigger (R51) and Depth to be sent over CAN (R50)