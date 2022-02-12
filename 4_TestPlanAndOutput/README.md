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
|1. | Output for 1st color of the color coding | Implemented and tested | n or N | 1 | 1 |
|2. | Output for 2nd color of the color coding | Implemented and tested | n or N | 1 | 1 |
|3. | Output for 3nd color of the color coding | Implemented and tested | n or N | 1 | 1 |
|4. | Output for 4nd color of the color coding | Implemented and tested | n or N | 10 | 392247 |
|5. | Output for 5nd color of the color coding | Further planing  | n or N | +- 0.5% | - |

### Test Run 2 
|Sl.NO| Description | Status | Input | Expected Output | Actual Output |
|:---|:---|:---|:---|:----|:----|
|1. | Output for 1st color of the color coding | Implemented and tested | v or V | 7 | 7 |
|2. | Output for 2nd color of the color coding | Implemented and tested | b or B | 0 | 0 |
|3. | Output for 3nd color of the color coding | Implemented and tested | n or N | 1 | 1 |
|4. | Output for 4nd color of the color coding | Implemented and tested | l or L | 10000 | 392345 |
|5. | Output for 5nd color of the color coding | Further planing  | n or N | +- 0.5% | - |


# Output
*Test case 1 Output
![Output_with_makefile](https://user-images.githubusercontent.com/98849909/153707567-40e3726b-454f-410e-bb62-83ea9396ad1d.PNG)
![output6](https://user-images.githubusercontent.com/98849909/153707568-5e20666f-6f6f-4de4-8859-2c4f62a37cf2.PNG)
*Test Case 2 Output 
![output5](https://user-images.githubusercontent.com/98849909/153707569-6fdcae30-720b-40b6-8f8a-892216a5856e.PNG)

## Output using Makefile
![Output_with_makefile](https://user-images.githubusercontent.com/98849909/153707567-40e3726b-454f-410e-bb62-83ea9396ad1d.PNG)

*Other Sample output while logic building and debugging 
![output4](https://user-images.githubusercontent.com/98849909/153707570-dc78b23b-64ee-4c94-a640-00e7224671b8.PNG)
![output3](https://user-images.githubusercontent.com/98849909/153707571-ea9e72d5-05bb-4954-90c9-f43e38e82183.PNG)
![Output 1](https://user-images.githubusercontent.com/98849909/153707556-25ad2288-c2dd-48b5-9746-4dbec66a88dc.PNG)
![outpt 2](https://user-images.githubusercontent.com/98849909/153707564-0a120620-230b-4191-b65f-78ae62b7d5e3.PNG)



