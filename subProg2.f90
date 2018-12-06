program practice
implicit none
integer :: i = 2, j = 10


print *, i, j !original values
call swap(i,j)

print *, i, j
print *, i_old, j_old

contains

subroutine swap(i, j, i_old, j_old)
implicit none
integer, intent(inout) :: i, j
integer, intent(out) :: i_old, j_old
        i_old = i
        j_old = j
        print *, i_old, j_old
        i = j_old
        j = i_old
end subroutine swap

end program
