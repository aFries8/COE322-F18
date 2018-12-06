        program test
        
        implicit none
        integer: a=3, b=4, c=5

        if (a < b .and. b < c) then
                print *, "c is the biggest."
        else if (a < b .and. b > c) then
                print *, "b is the biggest."
        else if (a > b .and. b > c) then
                print *, "a is the biggest."
        end if

        end program
