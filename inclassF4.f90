        program divisors
        
        implicit none
        integer:: x, y, z
        real:: rx, ry, rz
        
        print *, 'Enter two integers:'
        read *, x, y

        rx = x
        ry = y

        z = y/x
        rz = ry/rx

        if (z == rz) then
                print *, x, 'is a divisor of',y
        else
                print *, x, 'is not a divisor of',y
        end if

        end program
