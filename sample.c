#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct keyword_count
{
    char *keyword;
    long int count;
};

int main(int argc, char *argv[])
{
    struct keyword_count *arr_keywords = malloc(argc * sizeof(struct keyword_count));
    //struct keyword_count arr_keywords[argc];
    for (int i = 0; i < argc - 1; i++)
    {
        arr_keywords[i].keyword = argv[i + 1];
        arr_keywords[i].count = 0;
    }
    char *line = NULL;
    size_t maxlen = 0;
    ssize_t n;

    while ((n = getline(&line, &maxlen, stdin)) > 0)
    {
        char *first, *second;
        first = strtok(line, " ");
        // second = strtok(line,",");
        // printf("%s \n", first);
        while (first != NULL)
        {
            //    printf("%s\n",first);
            for (int i = 0; i < argc - 1; i++)
            {
                // printf("%s\n",first);
                if (strstr(first, "\n"))
                {
                    first[strlen(first) - 1] = '\0';  
                }
                if (strcmp(first, arr_keywords[i].keyword) == 0)
                {
                    arr_keywords[i].count++;
                }
            }
            first = strtok(NULL, " ");
        }
    }

    for (long int i = 0; i < argc - 1; i++)
    {
        printf("%s %ld\n", arr_keywords[i].keyword, arr_keywords[i].count);
    }

    free(line);
    free(arr_keywords);
}

/*
bool isNotPresent(int argc, struct keyword_count arr_keywords[argc], char keyword[])
{
    for(int i=0;i<argc;i++)
    {
        if( strcmp(keyword, arr_keywords[i].keyword))
        {
            return true;
        }
    } 
    return false;
}
void addCount(int argc, struct keyword_count arr_keywords[argc], char keyword[20])
{
    for(int i=0;i<argc;i++)
    {
        if(strcmp(keyword,arr_keywords[i].keyword))
        {
            arr_keywords->count++;
        }
        
    }
}*/