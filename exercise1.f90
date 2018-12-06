        program FizzBuzz

        implicit none
        integer:: num, tNum, fNum

        print *, 'Enter an integer:'
        read *, num
        tNum = mod(num,3)
        fNum = mod(num,5)
        if (tNum == 0 .and. fNum == 0) then
                print *, 'FizzBuzz'
        else if (tNum == 0 .and. fNum /= 0) then
                print *, 'Fizz' 
        else if (fNum == 0 .and. tNum /= 0) then
                print *, 'Buzz'
        end if

        end program
      
