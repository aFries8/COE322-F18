program inclassF5
implicit none
integer :: u, v, w, c
real :: x, w2


do u = 1, 99
    do v = 1, 99
        w2 = u**2 + v**2
        x = SQRT(w2)
        w = int(x) 
        if (w == x .and. w <= 99) then
            print '(3(a,i2,x))', 'u =', u, 'v =', v, 'and w =', w
        end if
    end do
end do 

end program
