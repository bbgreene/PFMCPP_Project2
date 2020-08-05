#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 
 int
 float
 bool
 double
 char
 unsigned int
 void
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, pass each variable to a single call of the ignoreUnused function. see line 71 for an example
 
3) write out 10 functions
    a) each declaration should have a random number of parameters in the function parameter list.
        When naming your parameters, choose names that are relevant to the task implied by the function's name.
    b) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    c) pass each of your function parameters to the ignoreUnused function like you did in 2b)
    d) if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    
    int carrots = 4;
    int potatoes = 6;
    int onions = 2;

    float time = 1.3f;
    float bar = 4.6f;
    float loopLength = 9.2f;

    bool channelOn = true;
    bool panFullyLeft = true;
    bool channelLevelFull = true;
    
    double filterFrequency = 40.5669593;
    double filterResonance = 1.5552231;
    double filterBandwidth = 1.8999292;

    char sampleBank = 'A';
    char ampersand = '&';
    char question = '?';

    unsigned int tableLength = 3002;
    unsigned int tableHeight = 700;
    unsigned int tableWidth = 1002;
    
    ignoreUnused(number, carrots, potatoes, onions, time, bar, loopLength, channelOn, panFullyLeft, channelLevelFull, filterFrequency, filterResonance, filterBandwidth, sampleBank, ampersand, question, tableLength, tableHeight, tableWidth); //passing each variable declared to the ignoreUnused() function
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int numberOfBirds(int sparrows, int starlings = 5, bool darkOutside = false)  
{ 
    ignoreUnused(sparrows, starlings, darkOutside); 
    return {}; 
} 
/*
 2)
 */
float frequencyRange(float vocalLow, float vocalHigh, float hiHatHigh = 8000.2f)
{
    ignoreUnused(vocalLow, vocalHigh, hiHatHigh);
    return {};
}
/*
 3)
 */
bool eatBeforeLunch(float time, bool hungry, float timePast = 2.3f)
{
    ignoreUnused(time, hungry, timePast);
    return {};
}
/*
 4)
 */
double reverbTime(double impulseTime, double drySignal, bool convolve = true)
{
    ignoreUnused(impulseTime, drySignal, convolve);
    return {};
}
/*
 5)
 */
char boilAnEgg(float timeWaterBoil, bool cookerOn)
{
    ignoreUnused(timeWaterBoil, cookerOn);
    return {};
}
/*
 6)
 */
int spaceOnTrain(int ticketsSold, int seatsAvailable, bool moreThanOneStop = true)
{
    ignoreUnused(ticketsSold, seatsAvailable, moreThanOneStop);
    return {};
}
/*
 7)
 */
float bpm(bool keyPressed, float timesPerSec, int bars)
{
    ignoreUnused(keyPressed, timesPerSec, bars);
    return {};
}
/*
 8)
 */
bool waterPlants(bool tempHot, int hoursLastWatered)
{
    ignoreUnused(tempHot, hoursLastWatered);
    return {};
}
/*
 9)
 */
double modulation(float lfoRate, float lfoAmount, bool tremolo = true, bool vibrato = false)
{
    ignoreUnused(lfoRate, lfoAmount, tremolo, vibrato);
    return {};
}
/*
 10)
 */
void envShape(float attack, float release = 3.2f)
{
    ignoreUnused(attack, release);
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto birdsCounted = numberOfBirds(4, true);
    //2)
    auto bandWidth = frequencyRange(75.5f, 600.33f);
    //3)
    auto ShouldIeat = eatBeforeLunch(13.0f, true);
    //4)
    auto irPlusDry = reverbTime(3.4, 2.1);
    //5)
    auto eggCooked = boilAnEgg(504.3f, true);
    //6)
    auto peopleOnTrain = spaceOnTrain(40, 29);
    //7)
    auto performerInput = bpm(true, 112.3f, 4);
    //8)
    auto shouldIWater = waterPlants(false, 4);
    //9)
    auto modType = modulation(5.32f, 0.3232f);
    //10)
    envShape(1.2f);
    
    ignoreUnused(carRented, birdsCounted, bandWidth, ShouldIeat, irPlusDry, eggCooked, peopleOnTrain, performerInput, shouldIWater, modType);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
