        module PointMod
        implicit none
        type Point
            real :: x, y
        end type Point
        
        contains
        real function distance(p, q)
            implicit none
            type(Point) :: p, q
            distance = SQRT((q%y - p%y)**2 + (q%x - p%x)**2)
        end function distance
        end module PointMod

        program inClassMod
        use PointMod
        implicit none
        type(Point) :: p, q
        print *, "Enter x and y for a point, separate by comma"
        read *, p%x, p%y
        print *, "Enter x and y for another point, separate by comma"
        read *, q%x, q%y
        print *, "The distance between p and q is ", distance(p, q)
        end program    
