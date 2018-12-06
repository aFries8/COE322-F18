        program F2

        implicit none
        real :: a, b, c, d
        integer :: i
        character(10) :: name
        real, parameter :: pi = 3.14159265

        print *, 'Please enter values for a, b, and c seperated by' , &
                        ' commas'
        read *, a, b, c
        print *, 'Enter your name: '
        read *, name
        print *, 'Hello, ' , name

        print *, 'Volume of a sphere with radius a: ' , &
                   (4/3) * pi * a**3
        print *, 'Volume of a rectangular prism: ' , &
                   a * b * c

        d = (a * b * c) / 7 

        print *, d
        i = int(d)
        print *, i

        end program F2
        
                
