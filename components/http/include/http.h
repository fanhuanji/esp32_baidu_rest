#ifndef _HTTP_H_
#define _HTTP_H_

#include "http_parser.h"



int http_client_get(char *uri, http_parser_settings *callbacks, void *user_data);


#endif