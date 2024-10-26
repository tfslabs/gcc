/* { dg-do run { target { riscv_v } } } */
/* { dg-options "-O3 -mrvv-vector-bits=zvl" } */

#include "merge-3.c"

int main(void)
{
    vnx64qi vnx64qi_x= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,\
                        17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,\
                        33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,\
                        49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64
                       };
    vnx64qi vnx64qi_y= {101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,\
                        117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,\
                        133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,\
                        149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164
                       };
    vnx64qi vnx64qi_expect= {1,102,3,104,5,106,7,108,9,110,11,112,13,114,15,116,\
                             17,118,19,120,21,122,23,124,25,126,27,128,29,130,31,132,\
                             33,134,35,136,37,138,39,140,41,142,43,144,45,146,47,148,\
                             49,150,51,152,53,154,55,156,57,158,59,160,61,162,63,164,
                            };
    vnx64qi vnx64qi_real;
    merge0(vnx64qi_x,vnx64qi_y,&vnx64qi_real);
    for(int i=0; i<64; i++)
        if(vnx64qi_real[i]!=vnx64qi_expect[i]) {
            __builtin_abort();
        }

    vnx64uqi vnx64uqi_x= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,\
                          17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,\
                          33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,\
                          49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64
                         };
    vnx64uqi vnx64uqi_y= {101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,\
                          117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,\
                          133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,\
                          149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164
                         };
    vnx64uqi vnx64uqi_expect= {1,102,3,104,5,106,7,108,9,110,11,112,13,114,15,116,\
                               17,118,19,120,21,122,23,124,25,126,27,128,29,130,31,132,\
                               33,134,35,136,37,138,39,140,41,142,43,144,45,146,47,148,\
                               49,150,51,152,53,154,55,156,57,158,59,160,61,162,63,164,
                              };
    vnx64uqi vnx64uqi_real;
    merge1(vnx64uqi_x,vnx64uqi_y,&vnx64uqi_real);
    for(int i=0; i<64; i++)
        if(vnx64uqi_real[i]!=vnx64uqi_expect[i]) {
            __builtin_abort();
        }

    vnx32hi vnx32hi_x= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32};
    vnx32hi vnx32hi_y= {101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132};
    vnx32hi vnx32hi_expect= {1,102,3,104,5,106,7,108,9,110,11,112,13,114,15,116,17,118,19,120,21,122,23,124,25,126,27,128,29,130,31,132};
    vnx32hi vnx32hi_real;
    merge2(vnx32hi_x,vnx32hi_y,&vnx32hi_real);
    for(int i=0; i<32; i++)
        if(vnx32hi_real[i]!=vnx32hi_expect[i]) {
            __builtin_abort();
        }

    vnx32uhi vnx32uhi_x= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32};
    vnx32uhi vnx32uhi_y= {101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132};
    vnx32uhi vnx32uhi_expect= {1,102,3,104,5,106,7,108,9,110,11,112,13,114,15,116,17,118,19,120,21,122,23,124,25,126,27,128,29,130,31,132};
    vnx32uhi vnx32uhi_real;
    merge3(vnx32uhi_x,vnx32uhi_y,&vnx32uhi_real);
    for(int i=0; i<32; i++)
        if(vnx32uhi_real[i]!=vnx32uhi_expect[i]) {
            __builtin_abort();
        }


    vnx16si vnx16si_x= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    vnx16si vnx16si_y= {101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116};
    vnx16si vnx16si_expect= {1,102,3,104,5,106,7,108,9,110,11,112,13,114,15,116};
    vnx16si vnx16si_real;
    merge4(vnx16si_x,vnx16si_y,&vnx16si_real);
    for(int i=0; i<16; i++)
        if(vnx16si_real[i]!=vnx16si_expect[i]) {
            __builtin_abort();
        }

    vnx16usi vnx16usi_x= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    vnx16usi vnx16usi_y= {101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116};
    vnx16usi vnx16usi_expect= {1,102,3,104,5,106,7,108,9,110,11,112,13,114,15,116};
    vnx16usi vnx16usi_real;
    merge5(vnx16usi_x,vnx16usi_y,&vnx16usi_real);
    for(int i=0; i<16; i++)
        if(vnx16usi_real[i]!=vnx16usi_expect[i]) {
            __builtin_abort();
        }

    vnx8di vnx8di_x= {1,2,3,4,5,6,7,8};
    vnx8di vnx8di_y= {101,102,103,104,105,106,107,108};
    vnx8di vnx8di_expect= {1,102,3,104,5,106,7,108};
    vnx8di vnx8di_real;
    merge6(vnx8di_x,vnx8di_y,&vnx8di_real);
    for(int i=0; i<8; i++)
        if(vnx8di_real[i]!=vnx8di_expect[i]) {
            __builtin_abort();
        }

    vnx8udi vnx8udi_x= {1,2,3,4,5,6,7,8};
    vnx8udi vnx8udi_y= {101,102,103,104,105,106,107,108};
    vnx8udi vnx8udi_expect= {1,102,3,104,5,106,7,108};
    vnx8udi vnx8udi_real;
    merge7(vnx8udi_x,vnx8udi_y,&vnx8udi_real);
    for(int i=0; i<8; i++)
        if(vnx8udi_real[i]!=vnx8udi_expect[i]) {
            __builtin_abort();
        }

    vnx32hf vnx32hf_x= {1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0,11.0,12.0,13.0,14.0,15.0,16.0,\
                        17.0,18.0,19.0,20.0,21.0,22.0,23.0,24.0,25.0,26.0,27.0,28.0,29.0,30.0,31.0,32.0
                       };
    vnx32hf vnx32hf_y= {1.1,2.1,3.1,4.1,5.1,6.1,7.1,8.1,9.1,10.1,11.1,12.1,13.1,14.1,15.1,16.1,\
                        17.1,18.1,19.1,20.1,21.1,22.1,23.1,24.1,25.1,26.1,27.1,28.1,29.1,30.1,31.1,32.1
                       };
    vnx32hf vnx32hf_expect= {1.0,2.1,3.0,4.1,5.0,6.1,7.0,8.1,9.0,10.1,11.0,12.1,13.0,14.1,15.0,16.1,\
                             17.0,18.1,19.0,20.1,21.0,22.1,23.0,24.1,25.0,26.1,27.0,28.1,29.0,30.1,31.0,32.1
                            };
    vnx32hf vnx32hf_real;
    merge8(vnx32hf_x,vnx32hf_y,&vnx32hf_real);
    for(int i=0; i<32; i++)
        if(vnx32hf_real[i]!=vnx32hf_expect[i]) {
            __builtin_abort();
        }

    vnx16sf vnx16sf_x= {1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0,11.0,12.0,13.0,14.0,15.0,16.0};
    vnx16sf vnx16sf_y= {1.1,2.1,3.1,4.1,5.1,6.1,7.1,8.1,9.1,10.1,11.1,12.1,13.1,14.1,15.1,16.1};
    vnx16sf vnx16sf_expect= {1.0,2.1,3.0,4.1,5.0,6.1,7.0,8.1,9.0,10.1,11.0,12.1,13.0,14.1,15.0,16.1};
    vnx16sf vnx16sf_real;
    merge9(vnx16sf_x,vnx16sf_y,&vnx16sf_real);
    for(int i=0; i<16; i++)
        if(vnx16sf_real[i]!=vnx16sf_expect[i]) {
            __builtin_abort();
        }

    vnx8df vnx8df_x= {1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0};
    vnx8df vnx8df_y= {1.1,2.1,3.1,4.1,5.1,6.1,7.1,8.1};
    vnx8df vnx8df_expect= {1.0,2.1,3.0,4.1,5.0,6.1,7.0,8.1};
    vnx8df vnx8df_real;
    merge10(vnx8df_x,vnx8df_y,&vnx8df_real);
    for(int i=0; i<8; i++)
        if(vnx8df_real[i]!=vnx8df_expect[i]) {
            __builtin_abort();
        }

    return 0;
}