task e_stop()
{
    while(true)
    {
        if(SensorValue (e_stopBtn) == 1)
        {
            stopAllTasks();
        }
    wait1Msec(10);
    }
}
task main()
{
    startTask(e_stop);
    while (true)
    {
        if(SensorValue(sonar) <= 10)
        {
            motor[rightMotor] = 32;
            motor[leftMotor] = -32;
        }
        else
        {
            motor[rightMotor] = 127;
            motor[leftMotor] = -127;
        }
        wait1Msec(10);
    }
    
}