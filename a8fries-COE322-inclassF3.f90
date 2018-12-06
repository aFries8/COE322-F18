        program FizzBuzz

        implicit none
        integer:: num, tNum, fNum
        real:: rtNum, rfNum

        print *, 'Enter an integer:'
        read *, num
        tNum = num/3
        rtNum = num/3.0
        fNum = num/5
        rfNum = num/5.0

        if (tNum == rtNum) then
            print *, 'Fizz'
                if (fNum == rfNum) then
                    print *, 'Buzz'
                end if
        else if (fNum == rfNum) then
            print *, 'Buzz'
        end if 

        end program
      
