# ft_printf
Project goal:
> acquaintance with the stdarg.h library and implementation of the original printf function from the stdio.h library

Not all of the print function toolkit should be implemented, but only some of its elements.
What needs to be implemented:
> handling integer data type(`%d`, `%i`), string(`%s`), character(`%c`), pointer(`%p`),
> unsigned integer(`%y`), hexadecimal element(`%x`, `%X`), as well as percent(`%%`).

In addition to data types, the following must be processed:
* width (example: %`5`d)
* accuracy (example: %5`.4`d)
* left alignment (example: %`-`5d)
* flag 0 (example: %`0`5d)
