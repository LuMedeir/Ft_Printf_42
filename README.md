# Ft_Printf

<p align="center">
<img src="./img/pipex.png">
</p>

<p align="center">
</p>

</br>

## Description  
The purpose of this project is quite simple. Recode printf(). I mostly learned about using a variable number of arguments.

### Discription of mandatory part
The printf function sends formatted output to stdout. A custom _printf() for learning purposes. _printf() function
format string is a character string, beginning and ending in its initial shift state, if any. These arguments are 
placed using the percentage '%' operator.

### Supported conversions

Specifier                |Output                      
|----------------|-------------------------------|
| `%c` | Character |
| `%i` |  Integer in base 10. |
| `%s` | String of characters |
| `%d` | Decimal (base 10) number |
| `%u` | Unsigned integer |
| `%x` | Unsigned hexadecimal integer |
| `%X` | Unsigned hexadecimal integer (uppercase) |
| `%p` | Pointer argument in hexadecimal format. |
| `%%` | Prints a percent sign. |


## Makefile rules

| Rule         |                 Description                             |
|:------------:|:-------------------------------------------------------:|
| `make`       | Compile the program.                                    |
| `make clean` | Remove every objects of compilation                     |
| `make fclean`| Do `clean` rule and remove the executable program       |
| `make re`    | Do `fclean` rule and compile the program mandatory      |
