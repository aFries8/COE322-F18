program primeGen

implicit none
integer :: n

print *, "Please input the amount of prime numbers you want: "
read *, n
call prime(n)

contains
    subroutine prime(x)
        implicit none
        integer :: x, i, j, k, b
        logical :: A
        k = 0
        i = 2
            do while (k < x .and. i < x*x)
                A = .true.
                    do j = 2, i-1
                        b = MOD(i,j)
                        if (b == 0) then
                            A = .false.
                            exit
                        end if
                    end do
                if (A == .true.) then
                    k = k + 1
                    print *, i
                end if
                i = i + 1
            end do
    end subroutine prime
end program
