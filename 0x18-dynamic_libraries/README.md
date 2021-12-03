**THIS FOLDER CONTAINS INFO ABOUT DYNAMIC LIBRARIES
**SOME OF THE THINGS USED
***Creation of Dynamic Libraries
- The first thing is to have the functions that would be used in the dynamic library then converting them to object files using the command below
		gcc -c THEFILESTOBEADDED -fpic
		*fpic here is basically used to tell the linker to remove the absolute adresses and replace with relative adresses to make our code reusable to many programs
- Secondly you now create the dynamic library using the command below
		gcc *o(which are the object files) -shared NAMEOFTHEEXECUTABLE -o  libNAMEOFTHELIBRARY.so
		The flag -shared is what is used to create the static library
- Now we have created the static library,we can now use our dynamic library and before we use we should ensure that we have out dynamic library copied to the path where the linker searchesfor the dynamic libraries or set the linker to look at certain directories first before looking into standard paths
To do so we use the command below
		export LD_LIBRARY_PATH=: directories to be searched and are colon separated
