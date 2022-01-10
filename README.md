# ft_printf
Project goal:
> acquaintance with the stdarg.h library and implementation of the original printf function from the stdio.h library

Not all of the print function toolkit should be implemented, but only some of its elements.
What needs to be implemented:
> handling integer data type(`%d`, `%i`), string(`%s`), character(`%c`), pointer(`%p`),
> unsigned integer(`%y`), hexadecimal element(`%x`, `%X`), as well as percent(`%%`).
> The resulting program must be archived and placed in the libftprintf.a library.

In addition to data types, the following must be processed:
* width (example: `%5d`)
* accuracy (example: `%5.4d`)
* left alignment (example: `%-5d`)
* flag 0 (example: `%05d`)
***
The program should return the length of the string that turned out after all data types have been processed
***
An example of the original function printf and ft_printf:
`main:`

<img src="https://i.ibb.co/JCtz9BJ/2022-01-10-17-24-15.png" alt="2022-01-10-17-24-15" border="0">

`result:`

<img src="https://i.ibb.co/Dggdvz6/2022-01-10-17-30-01.png" alt="2022-01-10-17-30-01" border="0">

