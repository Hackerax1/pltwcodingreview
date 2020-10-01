taskmain()
{
    int count = 0;
    while(count < 20)
    {
        startMotor(leftMotor, 127);
        wait(0.5);
        count = count + 1;
    }
}
