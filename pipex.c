/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuurin98 <yuurin98@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 09:31:08 by codespace         #+#    #+#             */
/*   Updated: 2024/10/01 22:36:41 by yuurin98         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	exec(char *cmd, char **env)
{
	char	**s_cmd;
	char	*path;

	s_cmd = ft_split(cmd, ' ');
	if (!s_cmd)
		error_exit("Failed to split command");
	path = get_path(s_cmd[0], env);
	if (execve(path, s_cmd, env) == -1)
	{
		ft_putstr_fd("pipex: command not found: ", 2);
		ft_putendl_fd(s_cmd[0], 2);
		ft_free_tab(s_cmd);
		exit(127); /*Command not found*/
	}
}

void	child(char **argv, int *p_fd, char **env)
{
	int	fd;
	
	fd = open_file(argv[1], 0);
	dup2(fd, 0);
	dup2(p_fd[1], 1);
	close(fd);
	close(p_fd[0]);
	close(p_fd[1]);
	exec(argv[2], env);
}

void	parent(char **argv, int *p_fd, char **env)
{
	int	fd;

	fd = open_file(argv[4], 1);
	dup2(fd, 1);
	dup2(p_fd[0], 0);
	close(fd);
	close(p_fd[0]);
	close(p_fd[1]);
	exec(argv[3], env);
}

int	main(int argc, char **argv, char **env)
{
	int		fd[2];
	pid_t	pid;

	if (argc != 5)
		error_exit("./pipex infile cmd cmd outfile\n");
	if (pipe(fd) == -1)
		error_exit("Pipe creation failed");
	pid = fork();
	if (pid == -1)
		error_exit("Fork failed");
	if (!pid)
		child(argv, fd, env);
	else
	{
		parent(argv, fd, env);
		close(fd[0]);
		close(fd[1]);
		wait(NULL);
	}
	return (EXIT_SUCCESS);
}