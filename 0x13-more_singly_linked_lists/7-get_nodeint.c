#include "lists.h"

/**
 * get_nodeint_at_index - Entry point of program function
 * @head: Pointer to node
 * @index: param on current count
 *
 * Return: returns the nth node of the list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *currentPos;
	size_t counter;

	counter = 0;

	if (head != NULL)
	{
		currentPos = head;
		while (currentPos->next != NULL)
		{
		  if (counter == index)
			{
				return (currentPos); 		
			}
		  counter++;
		  currentPos = currentPos->next;
		  
		}

	}

	return (0);

}
