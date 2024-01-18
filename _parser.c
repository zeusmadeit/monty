#include "monty.h"

/**
 * file_parser - reads content of file passed and generates instruction set
 * @file: file to be passed
 *
 * Description:Parses the file given to it and generates the instruction set. 
 */
void file_parser(FILE *file)
{
	instruction_t *instruction;
	char line[500];
	int line_number;

	line_number = 0;
	while (fgets(line, sizeof(line), file) != NULL)
	{
		instruction = line_parser(line, line_number);
		fprintf(stdout,"%s", line);
		line_number++;
	}
}

instruction_t line_parser(char *stream)
{
	instruction_t *temp;
	char *opp_type[10];
	int num,

	temp = malloc(sizeof(instruction_t));
	if(temp == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	tokenizer(stream, &opp_type, &num);
	temp->opcode = opp_type;
	//temp->f = switch_operator(opp_type, num);
	//temp->f(stack, line_number);

	return(temp);
}

void	tokenizer(char *str, char *opp_type, int num)
{
	char *token;
	int count;

	token = strtok(str, " ");
	count = 0;
	while (token[count] != NULL)
	{
		count++;
	}

	while (token != NULL)
	{
		if(token == "push" || token == "pal" || token == "pint")
		{
			opp_type = token;
		}
		if(token == "pop" || token == "swap" || token == "add" || token == "nop")
		{
			opp_type = token;
		}
		if(atoi(token) > 0)
		{
			num = atoi(token);
		}
		//printf("%s ", token);
		token = strtok(NULL, " ");
	}

}

void	switch_operator(char *opp_type, num)
{
	switch (opp_type)
​	{
    		case push:
      		//_push(num);
      		break;

    		case pall:
      		//_pall();
      		break;

    		default:
      		// default statements
	}
}
