        program prime1

        implicit none 
        integer :: k, j, i
        logical :: A

        do i = 0,100
            A = .false.
            do j = 2, i-1
                k = MOD(i,j)
                if (k == 0) then
         print *, i, " is not prime: it is divisible by ", j
                    ! I moved the previous line back because I was
                    ! having issues with it not fitting
                    A = .true.      
                    exit
                end if
            end do
            if (A == .false.) then
                print *, i, " is prime"
            end if
        end do

        end program
                
                
                
        
