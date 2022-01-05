# Higher-density-frame

This C program determines the frame with higher number of particles.

This program reads a simple ovito file with the following structure


NpF<sub>1</sub>

    coment_of_frame_1

E<sub>1</sub> X<sub>1</sub> Y<sub>1</sub> Z<sub>1</sub>

E<sub>2</sub> X<sub>2</sub> Y<sub>2</sub> Z<sub>2</sub>

E<sub>3</sub> X<sub>3</sub> Y<sub>3</sub> Z<sub>3</sub>

...

NpF<sub>2</sub>

    coment_of_frame_2

E<sub>1</sub> X<sub>1</sub> Y<sub>1</sub> Z<sub>1</sub>

E<sub>2</sub> X<sub>2</sub> Y<sub>2</sub> Z<sub>2</sub>

E<sub>3</sub> X<sub>3</sub> Y<sub>3</sub> Z<sub>3</sub>

...


Where NpF<sub>i</sub> is the number of particles in the frame i, E<sub>i</sub> is the "particle type" for the particle i, (X<sub>i</sub>,Y<sub>i</sub>,Z<sub>i</sub>) is the opsition for the particle i.

When executing it, you will have to pass the maximum number of particles in a frame (be sure this number is big enough or the code will crash, if you don't know the maximum number just set the maximum of int in C) and the name of the file with all the frames, in linux for example:

`
./a.out 5000 movie.xyz
`

When running, it will print the number of particles and the frame number as the number of particles is increasing (if they do).

The output file "frame" will have no extension and it will contain the positions of the frame with the highest density, with the id of the particles and their positions as follows


1 X<sub>1</sub> Y<sub>1</sub> Z<sub>1</sub>

2 X<sub>2</sub> Y<sub>2</sub> Z<sub>2</sub>

3 X<sub>3</sub> Y<sub>3</sub> Z<sub>3</sub>

...
