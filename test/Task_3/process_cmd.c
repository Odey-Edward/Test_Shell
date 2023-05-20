#include "main.h"
char *process_cmd(char *pathname, path_t *head)
{
	DIR *dir;
	char *path, *result, *dir_path;
	struct dirent *entity;
	path_t *tmp = NULL;

	if (is_path(pathname) == 0)
		return (pathname);

	tmp = head;
	while (tmp)
	{
		path = pathname;
		dir = opendir(tmp->path_dir);
		if (dir != NULL)
		{
			entity = readdir(dir);

			dir_path = tmp->path_dir;
			while (entity != NULL)
			{
				if (_strcmp(entity->d_name, path) == 0)
				{
				
					result = _strcat(dir_path, path);
					return (result);
				}
				
				entity = readdir(dir);
			}
			closedir(dir);
		}
		tmp = tmp->next;
	}
	return (path);
}
