#ifndef TBKHEADER_FILE
#define TBKHEADER_FILE

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <libserialport.h>
#include "message.h"
#include "responses.h"

enum TbkReturn
{
    TBK_OK = 0,
    TBK_NOK = -1
};

extern enum TbkReturn open_port(char *portName, int baudrate);
extern char *sale(int amount, char* ticket, bool send_messages);
extern char *last_sale();
extern BaseResponse do_close();
extern BaseResponse load_keys();
extern TotalsCResponse get_totals();
//extern enum TbkReturn poll();
extern enum TbkReturn do_poll();
extern enum TbkReturn set_normal_mode();
extern enum TbkReturn close_port();
extern RefundCResponse refund(int transactionID);
extern char *sales_detail(bool print_on_pos);

#endif
