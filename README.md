# Higher-density-frame

This C program determines the frame with higher number of particles.

This program reads a simple ovito file with the following structure


NpF1

  coment

E1 X1 Y1 Z1

E2 X2 Y2 Z2

E3 X3 Y3 Z3

...

NpF2

  coment

E1 X1 Y1 Z1

E2 X2 Y2 Z2

E3 X3 Y3 Z3

...


NpF1 is the number of particles in the frame 1 (and so on), E1 is the "particle type" for the first particle (and so on), (X1,Y1,Z1) is the opsition for the first particle (and so on).

When executing it, you will have to pass the maximum number of particles in a frame (be sure this number is big enough or the code will crash) and the name of the file with all the frames, in linux for example:

`
./a.out 5000 movie.xyz
`

When running, it will print the number of particles and the frame number as the number of particles is increasing (if they do).

The output file "frame" will have no extension and it will contain the id of the particle and its position as follows


1 X1 Y1 Z1

2 X2 Y2 Z2

3 X3 Y3 Z3

...
