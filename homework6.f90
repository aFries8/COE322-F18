program PrimeCheck

implicit none
integer :: x
logical :: isprime

print *, "Please input an integer"
read *, x
isprime = prime_test_function(x)
print *, x, "is prime: ", isprime

contains
    logical function prime_test_function(n)
        implicit none
        integer :: n, i, j
        logical :: A
        A = .true.
        do i = 2, n-1
            j = MOD(n,i)
                if (j == 0) then
                    prime_test_function = .false.
                    A = .false.
                    exit
                end if
        end do
        if (A == .true.) then
            prime_test_function = .true.
        end if
    end function prime_test_function

end program
