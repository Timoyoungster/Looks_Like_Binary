## Looks_Like_Binary
… for when even plain binary would be too simple.

## Idea
When writing programs in this exquisit esolang everybody shall look at you in admiration for you are able to write in the computers mother-tounge. 
Thou only you shall know, that binary would have been the easy path…

## Specification
### Fundamentals
Programs in LLB (Looks_Like_Binary) are written purely with **1’s and 0’s**.
Every instruction consists of **exactly 8 chars** (either ‘1’ or ‘0’).
For clearer formatting any amount of spaces or line breaks are allowed in between the instructions.
In order to make at least the most useful symbols availiable, the language uses the standard ASCII table.
The operations LLB provides are defined above the ASCII values starting at 10000000.
For a detailed description of every instruction please refer to the [Looks_Like_A_Cheat_Sheet](./Looks_Like_A_Cheat_Sheet.md).

### Program Structure
LLB programs do not have something like a main function. Execution starts at the first instruction and ends at the last.
Global variables must be declared first.