        program scratch
        
        implicit none
        real, dimension(5) :: A
        real, dimension(5) :: B = [1,2,3,4,5]
        real :: i

        do i = 1,5
            A(i) = i/2
        end do
        
        do i = 1,5
            print *, A(i)
        end do

        print *, A

        A = B
        
        print *, A

        end program scratch
