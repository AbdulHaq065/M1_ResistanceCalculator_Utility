# Test Plan
* For every Feature, define a test case
    * How to run that test feature
    * Define expected behaviour
    * Capture the actual result
#Requirements and Test Plans
## High Level Requirements</br>
 
 |Sl.NO|ID|Description|Test Plan|
 |:---|:---|:---|:---|
 |1.|HLR1| Entering input regarding the colour code as present on the resistor by user.|Checking for the correct input.|  
 |2.|HLR2| Performing certain operations for calculating the value of resistor.|Storing and verifying the Results manually|
 |3.|HLR3| Printing the value of resistor.|Printing the output variable| 

## Low Level Requirements</br>
 How each feature is implemented </br>
  
|Sl.NO| ID |      Description    |     Test Plane    |
|:---|:---|:---|:---|
|1. | LLR1 | Asking for the input regarding the   type of colour code of resistor.| Display of statmente|
|2. | LLR2 | Entering input about the type of colour code present on the resistor by user (4 colour code band / 5 colour code band ).|Store and display for manual verification|
|3. | LLR3 | Printing the instruction about how to enter the colour code as an input.| Display of statment|
|4. | LLR4 | Printing the statment to the user, asking for the input regarding the colour code of resistor.| Display of instruction and verification|
|5. | LLR5 | Entering of input by the user regarding the colour code of resistor.| Store and verification |
|6. | LLR6 | Saving the received input.| Verification through computation |
|7. | LLR7 | Deciding upon the different operations to be performed based on the input received.| Computation and verification of results |
|8. | LLR8 | Performing different calculation based on the operations to be performed.| Computation and verification of results|
|9. | LLR9 | Storing the result of operation. | Storing and display|
|10.| LLR10| Printing the result of the operation i.e. the value of resistor.| Display and verification of results|

## Test Plane for Output

### Test Run 1 
|Sl.NO| Description | Status | Input | Expected Output | Actual Output |
|:---|:---|:---|:---|:----|:----|
|1. | Output for 1st color of the color coding | Implemented and tested | r or R | 2 | 2 |
|2. | Output for 2nd color of the color coding | Implemented and tested | g or G | 5 | 5 |
|3. | Output for 3nd color of the color coding | Implemented and tested | y or Y | 4 | 4 |
|4. | Output for 4nd color of the color coding | Implemented and tested | o or O | 1000 | 1000 |
|5. | Output for 5nd color of the color coding | Further planing  | n or N | +- 0.5% | - |

### Test Run 2 
|Sl.NO| Description | Status | Input | Expected Output | Actual Output |
|:---|:---|:---|:---|:----|:----|
|1. | Output for 1st color of the color coding | Implemented and tested | n or N | 1 | 1 |
|2. | Output for 2nd color of the color coding | Implemented and tested | b or B | 0 | 0 |
|3. | Output for 3nd color of the color coding | Implemented and tested | g or G | 5 | 5 |
|4. | Output for 4nd color of the color coding | Implemented and tested | r or R | 100 | 100 |
|5. | Output for 5nd color of the color coding | Further planing  | n or N | +- 0.5% | - |


# Output

* Testcases output 
![Capture4](https://user-images.githubusercontent.com/98849909/156753127-df1cff17-16bd-480f-9978-f6f5cf4c74ed.PNG)

![Capture3](https://user-images.githubusercontent.com/98849909/156753153-f61759b2-d9e0-4164-a597-0246267a6c2b.PNG)
![OUTPUTUSING MAKE](https://user-images.githubusercontent.com/98849909/156753173-732b30d3-e071-45c5-8c28-7eb11ea22fc7.PNG)
![Capture1](https://user-images.githubusercontent.com/98849909/156753200-a37095bb-6419-4377-8968-e48c9e112c7a.PNG)
![Capture](https://user-images.githubusercontent.com/98849909/156753219-3d2735b8-3d1d-49a4-977b-dcdb5bca69b3.PNG)



