#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// Yeh function check karta hai ke road par vehicle mojood hai ya nahi
bool detectVehiclePresence()
{
int signal = rand() % 2;
// Agar signal 1 aaye to vehicle present hai
if (signal == 1)
return true;
else
return false;
}
// Yeh function traffic ko analyze karta hai
void analyzeTraffic(bool north, bool south, bool east, bool west)
{
cout << "\nTraffic Analysis..." << endl;
// Active roads count kar rahe hain
int activeRoads = north + south + east + west;
// Agar 4 roads active hain to heavy traffic
if (activeRoads == 4)
{
cout << "Traffic Status: HEAVY TRAFFIC" << endl;
}
// Agar 2 ya 3 roads active hain to medium traffic
else if (activeRoads >= 2)
{
cout << "Traffic Status: MEDIUM TRAFFIC" << endl;
}

// Warna low traffic
else
{
cout << "Traffic Status: LOW TRAFFIC" << endl;
}
}
// Yeh function signal timing decide karta hai
int calculateSignalTime(bool north, bool south, bool east, bool west)
{
int activeRoads = north + south + east + west;
// Heavy traffic ke liye zyada green time
if (activeRoads == 4)
return 60;
// Medium traffic ke liye medium time
else if (activeRoads >= 2)
return 40;
// Low traffic ke liye kam time
else
return 20;
}
// Yeh function traffic lights control karta hai
void controlTrafficLights(int greenTime)
{
cout << "\nTraffic Lights Control" << endl;
cout << "North Signal = GREEN (" << greenTime << " sec)" << endl;
cout << "South Signal = RED" << endl;
cout << "East Signal = RED" << endl;
cout << "West Signal = RED" << endl;
}
// Yeh function emergency vehicle detect karta hai
bool detectEmergencyVehicle()
{
int emergency = rand() % 10;
// 10% chance ambulance ki
if (emergency == 1)
return true;
else
return false;
}
// Yeh function emergency ko priority deta hai
void emergencyControl(bool emergency)

{
if (emergency)
{
cout << "\nEMERGENCY VEHICLE DETECTED!" << endl;
cout << "All signals RED" << endl;
cout << "Emergency route GREEN" << endl;
}
else
{
cout << "\nNo Emergency Vehicle" << endl;
}
}
// Yeh function current system status show karta hai
void displayStatus(bool north, bool south, bool east, bool west)
{
cout << "\n----- SYSTEM STATUS -----" << endl;
cout << "North Road: ";
if (north)
cout << "Vehicle Present" << endl;
else
cout << "Empty" << endl;
cout << "South Road: ";
if (south)
cout << "Vehicle Present" << endl;
else
cout << "Empty" << endl;
cout << "East Road: ";
if (east)
cout << "Vehicle Present" << endl;
else
cout << "Empty" << endl;
cout << "West Road: ";
if (west)
cout << "Vehicle Present" << endl;
else
cout << "Empty" << endl;
}
// Main function jahan se pura program start hota hai
int main()
{
// Random values generate karne ke liye
srand(time(0));
cout << "===== SMART TRAFFIC CONTROL SYSTEM =====" << endl;

// Har road par vehicle detect kar rahe hain
bool north = detectVehiclePresence();
bool south = detectVehiclePresence();
bool east = detectVehiclePresence();
bool west = detectVehiclePresence();
// Current status show karna
displayStatus(north, south, east, west);
// Traffic analyze karna
analyzeTraffic(north, south, east, west);
// Signal timing calculate karna
int greenTime = calculateSignalTime(north, south, east, west);
cout << "\nGreen Signal Time: " << greenTime << " seconds" << endl;
// Traffic lights control karna
controlTrafficLights(greenTime);
// Emergency vehicle check karna
bool emergency = detectEmergencyVehicle();
// Emergency handling
emergencyControl(emergency);
cout << "\n===== SYSTEM END =====" << endl;
return 0;
}
