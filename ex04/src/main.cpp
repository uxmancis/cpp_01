/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:12:25 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/17 13:34:15 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/main.hpp"

/* Function: ft_replace
*
*   Returns: std::string result of line already replaced.
*
*   About 'append' method of std::string
*       append receives as parameters(std::string line, int start, int end)
*/
std::string ft_replace (std::string str1_to_replace, std::string str2_new, std::string line, int index)
{
    std::string result;
    int i; //posición actual de la cadena. Empezamos de 0.
    
    i = 0;
	//std::cout << "> Before: " << line << std::endl;
    while (index != std::string::npos)
    {
		result.append(line, i, index - i);
        result.append(str2_new);
        i = index + str1_to_replace.length();
		index = line.find(str1_to_replace, i);
    }
	//std::cout << "> After: " << line << std::endl;
    return (result);
}

int str_was_found_in_line(std::string str_to_find, std::string line_where_to_find)
{
    std::size_t found;

    found = line_where_to_find.find(str_to_find);
    //if (found != std::string::npos)
        //std::cout << GREEN "str was found in index " RESET_COLOR << found << std::endl;
    //else
        //std::cout << RED "str was NOT found" RESET_COLOR << std::endl;
    //std::cout << "str_was_found_in_line, ------ found = " << found << std::endl;
    return (found);
}

void ft_putmessage_intro(void)
{
    std::cout << "\nIntroducing the program parameters in accordance with the following format is suggested:" << std::endl; 
    std::cout << "./cpp01_ex04 <" AQUAMARINE "filename" RESET_COLOR "> <"
                                    AQUAMARINE "str1" RESET_COLOR "> <"
                                    AQUAMARINE "str2" RESET_COLOR ">" << std::endl << std::endl;
    std::cout << AQUAMARINE "filename" RESET_COLOR ": name of the file we'll use as input for the exercise" << std::endl;
    std::cout << AQUAMARINE "str1" RESET_COLOR ": string we'll look for in specified file" << std::endl;
    std::cout << AQUAMARINE "str2" RESET_COLOR ": any time str1 is found along specified file, it'll be replaced by str2" << std::endl;
    
}

void ft_read_and_replace(std::string str1, std::string str2, std::ifstream& inFile)
{
    std::string line;
    std::size_t index;
	std::string filePath = "newfile.txt"; //Nombre del archivo a crear
	std::ofstream outFile(filePath.c_str()); //Abrir el archivo para escritura
    int i;
    
    //Verificar que el archivo se abrió correctamente
	if (!outFile)
	{
		std::cerr << "Error: Unable to open file for writing." << std::endl;
		return;
	}
	//Read and output the file content line by line
    i = 1;
    index = 0;
    while(std::getline(inFile, line)) //1 vuelta por cada línea
    {
        std::cout << "\n> Line " << i << " before: " << line << std::endl;
        while (1) //cada línea se recorre tantas veces hasta que ya no haya str1 en la línea
        {
            index = str_was_found_in_line(str1, line);
            if (index == std::string::npos)
				break;
            else
				line = ft_replace(str1, str2, line, index); //Escribimos en el archivo nuevo
        }
		outFile << line << std::endl;
        std::cout << "> Line " << i << " after: " << line << std::endl;
        std::cout << "---------------------------------------------------------------\n";
        i++;
    }
	//Cerramos el nuevo archivo
	outFile.close();
}

int ft_open_read_replace_lines(std::string str1, std::string str2, char **argv)
{
    std::string filePath;
    
    filePath = argv[1];
    //Create an ifstream object to open the file
    std::ifstream inFile(filePath); //Create an input file stream object for reading data from a file
    //Check if the file was opened successfully
    if(!inFile)
    {
        std::cerr << "Unable to open file: " << filePath << std::endl;
        return (-1); //Return an error code
    }
    ft_read_and_replace(str1, str2, inFile);
	//Close the fil
    inFile.close();
	return (0);
}

/*
*   Program receives: ./cpp01_ex04 <filename> <str1> <str2>
*
*   What? Copy content of <filename> in new file named <filename>.replace
*         Any time <str1> appears in content, it must be replaced by <str2>.
*
*   How? std::string class' functions must be used.
*
*   About std::ifstream inFile(filePath)
*       std::ifstream --> class provided by C++ Standard Library to handle input file streams. Used to read data from files.
*       inFile --> name of object being created. It could be any other name.
*       (filePath) --> constructor argument
*
*   About 'find', método de std::string. E.g.: std::string.find
*       Returns:
*           >= 0: Successful, str1 was found in str2. Returns index where it was found.
*           std::string::npos (value: 18446744073709551615): Error, str1 was NOT found in str2.
*/
int main(int argc, char **argv)
{
    std::string str1;
    std::string str2;
    int i;
    int index;
    
    if (argc != 4)
    {
        ft_putmessage_intro();
        return (0);
    }
    //std::cout << "let's run the program! :)";
    str1 = argv[2];
    //std::cout << AQUAMARINE << "str 1 = "  << str1 << RESET_COLOR<< std::endl;
    str2 = argv[3];
    //std::cout << AQUAMARINE << "str 2 = "  << str2 << RESET_COLOR<< std::endl;
    if (ft_open_read_replace_lines(str1, str2, argv) == -1)
        return (-1);
    
    return (0);
}