/*
There is an isolated sector of 1MB which has been infected by a virus. An antivirus program can clean the data of that sector at a rate of 5 kbits in 2^-7 seconds. The behavior of the virus is to replicate itself by 2.5 times per second. (i.e infection of 1KB in a sector will become 2.5KB in 2.5 seconds)

How long will it take the antivirus to clean the sector?





*/

function VirusGuard(sectorSize, cleaningRate, virusReplicationRate) 
{
    const infectedData = sectorSize / 1024; // convert sector size to KB
    
    const virusSpreadTime = 2.5 * Math.log2(infectedData) / Math.log2(2.5);
    
    const cleanedData = cleaningRate * virusSpreadTime;
    
    const timeToClean = sectorSize / cleanedData;
    
    return [timeToClean];
    
}
    
    
console.log(VirusGuard(8*1024*1024,5.12*1024*1000,2.5));