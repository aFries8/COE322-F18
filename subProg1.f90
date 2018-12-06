program practice
implicit none
integer :: i = 2, j = 10

print *, i, j !original values
call swap(i,j)

print *, i, j

contains

subroutine swap(a,b)
implicit none
integer :: a, b, temp
    temp = a
    i = b
    j = temp  
    
end subroutine swap

end program
