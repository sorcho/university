#include <stdio.h>

#define ERRFILE -1
#define OK 0

struct Azienda;

void print_list(struct Azienda* p_head);
int length_list(struct  Azienda* p_head);
void free_list(struct  Azienda* p_head);
void append_in_list(struct  Azienda** pp_head, struct Azienda az);
int read_from_file(char filename[64],struct  Azienda** pp_head);
void remove_less_than(struct  Azienda** pp_head, int soglia_dip);
int write_sorted_on_file(char filename[64], struct  Azienda** pp_head);
void err_handler(int err);
