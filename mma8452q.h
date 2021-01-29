#include <stdint.h>
#include <math.h>

#define mma8452q_id             0x2A
#define mma8452q_who_am_i       0x0D

#define mma8452q_ctrl_reg1      0x2A
#define mma8452q_ctrl_reg2      0x2B
#define mma8452q_ctrl_reg3      0x2C
#define mma8452q_ctrl_reg4      0x2D
#define mma8452q_ctrl_reg5      0x2E

#define mma8452q_out_x_msb      0x01
#define mma8452q_out_x_lsb      0x02
#define mma8452q_out_y_msb      0x03
#define mma8452q_out_y_lsb      0x04
#define mma8452q_out_z_msb      0x05
#define mma8452q_out_z_lsb      0x06

int32_t mma8452q_read()