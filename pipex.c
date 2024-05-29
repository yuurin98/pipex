/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 09:31:08 by codespace         #+#    #+#             */
/*   Updated: 2024/05/29 08:07:49 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	parent(char **argv, int *fd, char **env)
{
	
}

int	main(int argc, char **argv, char **env)
{
	int		fd[2];
	pid_t	pid;
	
	if (argc != 5)
		error_exit("./pipex infile cmd cmd outfile\n")；
	if (pipe(fd) == -1)
		exit(-1);
	pid = fork();
	if (pid == -1)
		exit(-1);
	if (!pid)
		child(argv, fd, env);
	parent(argv, fd, env);
	return (0);
}