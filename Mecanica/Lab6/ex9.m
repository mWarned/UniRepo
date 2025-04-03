clc; clear all;

aircraftSpeed = input('Viteza aeronavei = ');
altitude = input('Altitudinea = ');

speedByAltitude = 331.4 + 0.6 * altitude;
machNumber = aircraftSpeed / speedByAltitude;
if(machNumber == 1)
    display('transsonic');
elseif (machNumber < 1)
    display('subsonic');
else
    display('supersonic');
end