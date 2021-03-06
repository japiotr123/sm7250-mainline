/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2022 AngeloGioacchino Del Regno <angelogioacchino.delregno@collabora.com>
 */

#ifndef __MFD_MT6332_REGISTERS_H__
#define __MFD_MT6332_REGISTERS_H__

/* PMIC Registers */
#define MT6332_HWCID              0x8000
#define MT6332_SWCID              0x8002
#define MT6332_TOP_CON            0x8004
#define MT6332_DDR_VREF_AP_CON    0x8006
#define MT6332_DDR_VREF_DQ_CON    0x8008
#define MT6332_DDR_VREF_CA_CON    0x800A
#define MT6332_TEST_OUT           0x800C
#define MT6332_TEST_CON0          0x800E
#define MT6332_TEST_CON1          0x8010
#define MT6332_TESTMODE_SW        0x8012
#define MT6332_TESTMODE_ANA       0x8014
#define MT6332_TDSEL_CON          0x8016
#define MT6332_RDSEL_CON          0x8018
#define MT6332_SMT_CON0           0x801A
#define MT6332_SMT_CON1           0x801C
#define MT6332_DRV_CON0           0x801E
#define MT6332_DRV_CON1           0x8020
#define MT6332_DRV_CON2           0x8022
#define MT6332_EN_STATUS0         0x8024
#define MT6332_OCSTATUS0          0x8026
#define MT6332_TOP_STATUS         0x8028
#define MT6332_TOP_STATUS_SET     0x802A
#define MT6332_TOP_STATUS_CLR     0x802C
#define MT6332_FLASH_CON0         0x802E
#define MT6332_FLASH_CON1         0x8030
#define MT6332_FLASH_CON2         0x8032
#define MT6332_CORE_CON0          0x8034
#define MT6332_CORE_CON1          0x8036
#define MT6332_CORE_CON2          0x8038
#define MT6332_CORE_CON3          0x803A
#define MT6332_CORE_CON4          0x803C
#define MT6332_CORE_CON5          0x803E
#define MT6332_CORE_CON6          0x8040
#define MT6332_CORE_CON7          0x8042
#define MT6332_CORE_CON8          0x8044
#define MT6332_CORE_CON9          0x8046
#define MT6332_CORE_CON10         0x8048
#define MT6332_CORE_CON11         0x804A
#define MT6332_CORE_CON12         0x804C
#define MT6332_CORE_CON13         0x804E
#define MT6332_CORE_CON14         0x8050
#define MT6332_CORE_CON15         0x8052
#define MT6332_STA_CON0           0x8054
#define MT6332_STA_CON1           0x8056
#define MT6332_STA_CON2           0x8058
#define MT6332_STA_CON3           0x805A
#define MT6332_STA_CON4           0x805C
#define MT6332_STA_CON5           0x805E
#define MT6332_STA_CON6           0x8060
#define MT6332_STA_CON7           0x8062
#define MT6332_CHR_CON0           0x8064
#define MT6332_CHR_CON1           0x8066
#define MT6332_CHR_CON2           0x8068
#define MT6332_CHR_CON3           0x806A
#define MT6332_CHR_CON4           0x806C
#define MT6332_CHR_CON5           0x806E
#define MT6332_CHR_CON6           0x8070
#define MT6332_CHR_CON7           0x8072
#define MT6332_CHR_CON8           0x8074
#define MT6332_CHR_CON9           0x8076
#define MT6332_CHR_CON10          0x8078
#define MT6332_CHR_CON11          0x807A
#define MT6332_CHR_CON12          0x807C
#define MT6332_CHR_CON13          0x807E
#define MT6332_CHR_CON14          0x8080
#define MT6332_CHR_CON15          0x8082
#define MT6332_BOOST_CON0         0x8084
#define MT6332_BOOST_CON1         0x8086
#define MT6332_BOOST_CON2         0x8088
#define MT6332_BOOST_CON3         0x808A
#define MT6332_BOOST_CON4         0x808C
#define MT6332_BOOST_CON5         0x808E
#define MT6332_BOOST_CON6         0x8090
#define MT6332_BOOST_CON7         0x8092
#define MT6332_TOP_CKPDN_CON0     0x8094
#define MT6332_TOP_CKPDN_CON0_SET 0x8096
#define MT6332_TOP_CKPDN_CON0_CLR 0x8098
#define MT6332_TOP_CKPDN_CON1     0x809A
#define MT6332_TOP_CKPDN_CON1_SET 0x809C
#define MT6332_TOP_CKPDN_CON1_CLR 0x809E
#define MT6332_TOP_CKPDN_CON2     0x80A0
#define MT6332_TOP_CKPDN_CON2_SET 0x80A2
#define MT6332_TOP_CKPDN_CON2_CLR 0x80A4
#define MT6332_TOP_CKSEL_CON0     0x80A6
#define MT6332_TOP_CKSEL_CON0_SET 0x80A8
#define MT6332_TOP_CKSEL_CON0_CLR 0x80AA
#define MT6332_TOP_CKSEL_CON1     0x80AC
#define MT6332_TOP_CKSEL_CON1_SET 0x80AE
#define MT6332_TOP_CKSEL_CON1_CLR 0x80B0
#define MT6332_TOP_CKHWEN_CON     0x80B2
#define MT6332_TOP_CKHWEN_CON_SET 0x80B4
#define MT6332_TOP_CKHWEN_CON_CLR 0x80B6
#define MT6332_TOP_CKTST_CON0     0x80B8
#define MT6332_TOP_CKTST_CON1     0x80BA
#define MT6332_TOP_RST_CON        0x80BC
#define MT6332_TOP_RST_CON_SET    0x80BE
#define MT6332_TOP_RST_CON_CLR    0x80C0
#define MT6332_TOP_RST_MISC       0x80C2
#define MT6332_TOP_RST_MISC_SET   0x80C4
#define MT6332_TOP_RST_MISC_CLR   0x80C6
#define MT6332_INT_CON0           0x80C8
#define MT6332_INT_CON0_SET       0x80CA
#define MT6332_INT_CON0_CLR       0x80CC
#define MT6332_INT_CON1           0x80CE
#define MT6332_INT_CON1_SET       0x80D0
#define MT6332_INT_CON1_CLR       0x80D2
#define MT6332_INT_CON2           0x80D4
#define MT6332_INT_CON2_SET       0x80D6
#define MT6332_INT_CON2_CLR       0x80D8
#define MT6332_INT_CON3           0x80DA
#define MT6332_INT_CON3_SET       0x80DC
#define MT6332_INT_CON3_CLR       0x80DE
#define MT6332_CHRWDT_CON0        0x80E0
#define MT6332_CHRWDT_STATUS0     0x80E2
#define MT6332_INT_STATUS0        0x80E4
#define MT6332_INT_STATUS1        0x80E6
#define MT6332_INT_STATUS2        0x80E8
#define MT6332_INT_STATUS3        0x80EA
#define MT6332_OC_GEAR_0          0x80EC
#define MT6332_OC_GEAR_1          0x80EE
#define MT6332_OC_GEAR_2          0x80F0
#define MT6332_INT_MISC_CON       0x80F2
#define MT6332_RG_SPI_CON         0x80F4
#define MT6332_DEW_DIO_EN         0x80F6
#define MT6332_DEW_READ_TEST      0x80F8
#define MT6332_DEW_WRITE_TEST     0x80FA
#define MT6332_DEW_CRC_SWRST      0x80FC
#define MT6332_DEW_CRC_EN         0x80FE
#define MT6332_DEW_CRC_VAL        0x8100
#define MT6332_DEW_DBG_MON_SEL    0x8102
#define MT6332_DEW_CIPHER_KEY_SEL 0x8104
#define MT6332_DEW_CIPHER_IV_SEL  0x8106
#define MT6332_DEW_CIPHER_EN      0x8108
#define MT6332_DEW_CIPHER_RDY     0x810A
#define MT6332_DEW_CIPHER_MODE    0x810C
#define MT6332_DEW_CIPHER_SWRST   0x810E
#define MT6332_DEW_RDDMY_NO       0x8110
#define MT6332_INT_STA            0x8112
#define MT6332_BIF_CON0           0x8114
#define MT6332_BIF_CON1           0x8116
#define MT6332_BIF_CON2           0x8118
#define MT6332_BIF_CON3           0x811A
#define MT6332_BIF_CON4           0x811C
#define MT6332_BIF_CON5           0x811E
#define MT6332_BIF_CON6           0x8120
#define MT6332_BIF_CON7           0x8122
#define MT6332_BIF_CON8           0x8124
#define MT6332_BIF_CON9           0x8126
#define MT6332_BIF_CON10          0x8128
#define MT6332_BIF_CON11          0x812A
#define MT6332_BIF_CON12          0x812C
#define MT6332_BIF_CON13          0x812E
#define MT6332_BIF_CON14          0x8130
#define MT6332_BIF_CON15          0x8132
#define MT6332_BIF_CON16          0x8134
#define MT6332_BIF_CON17          0x8136
#define MT6332_BIF_CON18          0x8138
#define MT6332_BIF_CON19          0x813A
#define MT6332_BIF_CON20          0x813C
#define MT6332_BIF_CON21          0x813E
#define MT6332_BIF_CON22          0x8140
#define MT6332_BIF_CON23          0x8142
#define MT6332_BIF_CON24          0x8144
#define MT6332_BIF_CON25          0x8146
#define MT6332_BIF_CON26          0x8148
#define MT6332_BIF_CON27          0x814A
#define MT6332_BIF_CON28          0x814C
#define MT6332_BIF_CON29          0x814E
#define MT6332_BIF_CON30          0x8150
#define MT6332_BIF_CON31          0x8152
#define MT6332_BIF_CON32          0x8154
#define MT6332_BIF_CON33          0x8156
#define MT6332_BIF_CON34          0x8158
#define MT6332_BIF_CON35          0x815A
#define MT6332_BIF_CON36          0x815C
#define MT6332_BATON_CON0         0x815E
#define MT6332_BIF_CON37          0x8160
#define MT6332_BIF_CON38          0x8162
#define MT6332_CHR_CON16          0x8164
#define MT6332_CHR_CON17          0x8166
#define MT6332_CHR_CON18          0x8168
#define MT6332_CHR_CON19          0x816A
#define MT6332_CHR_CON20          0x816C
#define MT6332_CHR_CON21          0x816E
#define MT6332_CHR_CON22          0x8170
#define MT6332_CHR_CON23          0x8172
#define MT6332_CHR_CON24          0x8174
#define MT6332_CHR_CON25          0x8176
#define MT6332_STA_CON8           0x8178
#define MT6332_BUCK_ALL_CON0      0x8400
#define MT6332_BUCK_ALL_CON1      0x8402
#define MT6332_BUCK_ALL_CON2      0x8404
#define MT6332_BUCK_ALL_CON3      0x8406
#define MT6332_BUCK_ALL_CON4      0x8408
#define MT6332_BUCK_ALL_CON5      0x840A
#define MT6332_BUCK_ALL_CON6      0x840C
#define MT6332_BUCK_ALL_CON7      0x840E
#define MT6332_BUCK_ALL_CON8      0x8410
#define MT6332_BUCK_ALL_CON9      0x8412
#define MT6332_BUCK_ALL_CON10     0x8414
#define MT6332_BUCK_ALL_CON11     0x8416
#define MT6332_BUCK_ALL_CON12     0x8418
#define MT6332_BUCK_ALL_CON13     0x841A
#define MT6332_BUCK_ALL_CON14     0x841C
#define MT6332_BUCK_ALL_CON15     0x841E
#define MT6332_BUCK_ALL_CON16     0x8420
#define MT6332_BUCK_ALL_CON17     0x8422
#define MT6332_BUCK_ALL_CON18     0x8424
#define MT6332_BUCK_ALL_CON19     0x8426
#define MT6332_BUCK_ALL_CON20     0x8428
#define MT6332_BUCK_ALL_CON21     0x842A
#define MT6332_BUCK_ALL_CON22     0x842C
#define MT6332_BUCK_ALL_CON23     0x842E
#define MT6332_BUCK_ALL_CON24     0x8430
#define MT6332_BUCK_ALL_CON25     0x8432
#define MT6332_BUCK_ALL_CON26     0x8434
#define MT6332_BUCK_ALL_CON27     0x8436
#define MT6332_VDRAM_CON0         0x8438
#define MT6332_VDRAM_CON1         0x843A
#define MT6332_VDRAM_CON2         0x843C
#define MT6332_VDRAM_CON3         0x843E
#define MT6332_VDRAM_CON4         0x8440
#define MT6332_VDRAM_CON5         0x8442
#define MT6332_VDRAM_CON6         0x8444
#define MT6332_VDRAM_CON7         0x8446
#define MT6332_VDRAM_CON8         0x8448
#define MT6332_VDRAM_CON9         0x844A
#define MT6332_VDRAM_CON10        0x844C
#define MT6332_VDRAM_CON11        0x844E
#define MT6332_VDRAM_CON12        0x8450
#define MT6332_VDRAM_CON13        0x8452
#define MT6332_VDRAM_CON14        0x8454
#define MT6332_VDRAM_CON15        0x8456
#define MT6332_VDRAM_CON16        0x8458
#define MT6332_VDRAM_CON17        0x845A
#define MT6332_VDRAM_CON18        0x845C
#define MT6332_VDRAM_CON19        0x845E
#define MT6332_VDRAM_CON20        0x8460
#define MT6332_VDRAM_CON21        0x8462
#define MT6332_VDVFS2_CON0        0x8464
#define MT6332_VDVFS2_CON1        0x8466
#define MT6332_VDVFS2_CON2        0x8468
#define MT6332_VDVFS2_CON3        0x846A
#define MT6332_VDVFS2_CON4        0x846C
#define MT6332_VDVFS2_CON5        0x846E
#define MT6332_VDVFS2_CON6        0x8470
#define MT6332_VDVFS2_CON7        0x8472
#define MT6332_VDVFS2_CON8        0x8474
#define MT6332_VDVFS2_CON9        0x8476
#define MT6332_VDVFS2_CON10       0x8478
#define MT6332_VDVFS2_CON11       0x847A
#define MT6332_VDVFS2_CON12       0x847C
#define MT6332_VDVFS2_CON13       0x847E
#define MT6332_VDVFS2_CON14       0x8480
#define MT6332_VDVFS2_CON15       0x8482
#define MT6332_VDVFS2_CON16       0x8484
#define MT6332_VDVFS2_CON17       0x8486
#define MT6332_VDVFS2_CON18       0x8488
#define MT6332_VDVFS2_CON19       0x848A
#define MT6332_VDVFS2_CON20       0x848C
#define MT6332_VDVFS2_CON21       0x848E
#define MT6332_VDVFS2_CON22       0x8490
#define MT6332_VDVFS2_CON23       0x8492
#define MT6332_VDVFS2_CON24       0x8494
#define MT6332_VDVFS2_CON25       0x8496
#define MT6332_VDVFS2_CON26       0x8498
#define MT6332_VDVFS2_CON27       0x849A
#define MT6332_VRF1_CON0          0x849C
#define MT6332_VRF1_CON1          0x849E
#define MT6332_VRF1_CON2          0x84A0
#define MT6332_VRF1_CON3          0x84A2
#define MT6332_VRF1_CON4          0x84A4
#define MT6332_VRF1_CON5          0x84A6
#define MT6332_VRF1_CON6          0x84A8
#define MT6332_VRF1_CON7          0x84AA
#define MT6332_VRF1_CON8          0x84AC
#define MT6332_VRF1_CON9          0x84AE
#define MT6332_VRF1_CON10         0x84B0
#define MT6332_VRF1_CON11         0x84B2
#define MT6332_VRF1_CON12         0x84B4
#define MT6332_VRF1_CON13         0x84B6
#define MT6332_VRF1_CON14         0x84B8
#define MT6332_VRF1_CON15         0x84BA
#define MT6332_VRF1_CON16         0x84BC
#define MT6332_VRF1_CON17         0x84BE
#define MT6332_VRF1_CON18         0x84C0
#define MT6332_VRF1_CON19         0x84C2
#define MT6332_VRF1_CON20         0x84C4
#define MT6332_VRF1_CON21         0x84C6
#define MT6332_VRF2_CON0          0x84C8
#define MT6332_VRF2_CON1          0x84CA
#define MT6332_VRF2_CON2          0x84CC
#define MT6332_VRF2_CON3          0x84CE
#define MT6332_VRF2_CON4          0x84D0
#define MT6332_VRF2_CON5          0x84D2
#define MT6332_VRF2_CON6          0x84D4
#define MT6332_VRF2_CON7          0x84D6
#define MT6332_VRF2_CON8          0x84D8
#define MT6332_VRF2_CON9          0x84DA
#define MT6332_VRF2_CON10         0x84DC
#define MT6332_VRF2_CON11         0x84DE
#define MT6332_VRF2_CON12         0x84E0
#define MT6332_VRF2_CON13         0x84E2
#define MT6332_VRF2_CON14         0x84E4
#define MT6332_VRF2_CON15         0x84E6
#define MT6332_VRF2_CON16         0x84E8
#define MT6332_VRF2_CON17         0x84EA
#define MT6332_VRF2_CON18         0x84EC
#define MT6332_VRF2_CON19         0x84EE
#define MT6332_VRF2_CON20         0x84F0
#define MT6332_VRF2_CON21         0x84F2
#define MT6332_VPA_CON0           0x84F4
#define MT6332_VPA_CON1           0x84F6
#define MT6332_VPA_CON2           0x84F8
#define MT6332_VPA_CON3           0x84FC
#define MT6332_VPA_CON4           0x84FE
#define MT6332_VPA_CON5           0x8500
#define MT6332_VPA_CON6           0x8502
#define MT6332_VPA_CON7           0x8504
#define MT6332_VPA_CON8           0x8506
#define MT6332_VPA_CON9           0x8508
#define MT6332_VPA_CON10          0x850A
#define MT6332_VPA_CON11          0x850C
#define MT6332_VPA_CON12          0x850E
#define MT6332_VPA_CON13          0x8510
#define MT6332_VPA_CON14          0x8512
#define MT6332_VPA_CON15          0x8514
#define MT6332_VPA_CON16          0x8516
#define MT6332_VPA_CON17          0x8518
#define MT6332_VPA_CON18          0x851A
#define MT6332_VPA_CON19          0x851C
#define MT6332_VPA_CON20          0x851E
#define MT6332_VPA_CON21          0x8520
#define MT6332_VPA_CON22          0x8522
#define MT6332_VPA_CON23          0x8524
#define MT6332_VPA_CON24          0x8526
#define MT6332_VPA_CON25          0x8528
#define MT6332_VSBST_CON0         0x852A
#define MT6332_VSBST_CON1         0x852C
#define MT6332_VSBST_CON2         0x852E
#define MT6332_VSBST_CON3         0x8530
#define MT6332_VSBST_CON4         0x8532
#define MT6332_VSBST_CON5         0x8534
#define MT6332_VSBST_CON6         0x8536
#define MT6332_VSBST_CON7         0x8538
#define MT6332_VSBST_CON8         0x853A
#define MT6332_VSBST_CON9         0x853C
#define MT6332_VSBST_CON10        0x853E
#define MT6332_VSBST_CON11        0x8540
#define MT6332_VSBST_CON12        0x8542
#define MT6332_VSBST_CON13        0x8544
#define MT6332_VSBST_CON14        0x8546
#define MT6332_VSBST_CON15        0x8548
#define MT6332_VSBST_CON16        0x854A
#define MT6332_VSBST_CON17        0x854C
#define MT6332_VSBST_CON18        0x854E
#define MT6332_VSBST_CON19        0x8550
#define MT6332_VSBST_CON20        0x8552
#define MT6332_VSBST_CON21        0x8554
#define MT6332_BUCK_K_CON0        0x8556
#define MT6332_BUCK_K_CON1        0x8558
#define MT6332_BUCK_K_CON2        0x855A
#define MT6332_BUCK_K_CON3        0x855C
#define MT6332_BUCK_K_CON4        0x855E
#define MT6332_BUCK_K_CON5        0x8560
#define MT6332_AUXADC_ADC0        0x8800
#define MT6332_AUXADC_ADC1        0x8802
#define MT6332_AUXADC_ADC2        0x8804
#define MT6332_AUXADC_ADC3        0x8806
#define MT6332_AUXADC_ADC4        0x8808
#define MT6332_AUXADC_ADC5        0x880A
#define MT6332_AUXADC_ADC6        0x880C
#define MT6332_AUXADC_ADC7        0x880E
#define MT6332_AUXADC_ADC8        0x8810
#define MT6332_AUXADC_ADC9        0x8812
#define MT6332_AUXADC_ADC10       0x8814
#define MT6332_AUXADC_ADC11       0x8816
#define MT6332_AUXADC_ADC12       0x8818
#define MT6332_AUXADC_ADC13       0x881A
#define MT6332_AUXADC_ADC14       0x881C
#define MT6332_AUXADC_ADC15       0x881E
#define MT6332_AUXADC_ADC16       0x8820
#define MT6332_AUXADC_ADC17       0x8822
#define MT6332_AUXADC_ADC18       0x8824
#define MT6332_AUXADC_ADC19       0x8826
#define MT6332_AUXADC_ADC20       0x8828
#define MT6332_AUXADC_ADC21       0x882A
#define MT6332_AUXADC_ADC22       0x882C
#define MT6332_AUXADC_ADC23       0x882E
#define MT6332_AUXADC_ADC24       0x8830
#define MT6332_AUXADC_ADC25       0x8832
#define MT6332_AUXADC_ADC26       0x8834
#define MT6332_AUXADC_ADC27       0x8836
#define MT6332_AUXADC_ADC28       0x8838
#define MT6332_AUXADC_ADC29       0x883A
#define MT6332_AUXADC_ADC30       0x883C
#define MT6332_AUXADC_ADC31       0x883E
#define MT6332_AUXADC_ADC32       0x8840
#define MT6332_AUXADC_ADC33       0x8842
#define MT6332_AUXADC_ADC34       0x8844
#define MT6332_AUXADC_ADC35       0x8846
#define MT6332_AUXADC_ADC36       0x8848
#define MT6332_AUXADC_ADC37       0x884A
#define MT6332_AUXADC_ADC38       0x884C
#define MT6332_AUXADC_ADC39       0x884E
#define MT6332_AUXADC_ADC40       0x8850
#define MT6332_AUXADC_ADC41       0x8852
#define MT6332_AUXADC_ADC42       0x8854
#define MT6332_AUXADC_ADC43       0x8856
#define MT6332_AUXADC_STA0        0x8858
#define MT6332_AUXADC_STA1        0x885A
#define MT6332_AUXADC_RQST0       0x885C
#define MT6332_AUXADC_RQST0_SET   0x885E
#define MT6332_AUXADC_RQST0_CLR   0x8860
#define MT6332_AUXADC_RQST1       0x8862
#define MT6332_AUXADC_RQST1_SET   0x8864
#define MT6332_AUXADC_RQST1_CLR   0x8866
#define MT6332_AUXADC_CON0        0x8868
#define MT6332_AUXADC_CON1        0x886A
#define MT6332_AUXADC_CON2        0x886C
#define MT6332_AUXADC_CON3        0x886E
#define MT6332_AUXADC_CON4        0x8870
#define MT6332_AUXADC_CON5        0x8872
#define MT6332_AUXADC_CON6        0x8874
#define MT6332_AUXADC_CON7        0x8876
#define MT6332_AUXADC_CON8        0x8878
#define MT6332_AUXADC_CON9        0x887A
#define MT6332_AUXADC_CON10       0x887C
#define MT6332_AUXADC_CON11       0x887E
#define MT6332_AUXADC_CON12       0x8880
#define MT6332_AUXADC_CON13       0x8882
#define MT6332_AUXADC_CON14       0x8884
#define MT6332_AUXADC_CON15       0x8886
#define MT6332_AUXADC_CON16       0x8888
#define MT6332_AUXADC_CON17       0x888A
#define MT6332_AUXADC_CON18       0x888C
#define MT6332_AUXADC_CON19       0x888E
#define MT6332_AUXADC_CON20       0x8890
#define MT6332_AUXADC_CON21       0x8892
#define MT6332_AUXADC_CON22       0x8894
#define MT6332_AUXADC_CON23       0x8896
#define MT6332_AUXADC_CON24       0x8898
#define MT6332_AUXADC_CON25       0x889A
#define MT6332_AUXADC_CON26       0x889C
#define MT6332_AUXADC_CON27       0x889E
#define MT6332_AUXADC_CON28       0x88A0
#define MT6332_AUXADC_CON29       0x88A2
#define MT6332_AUXADC_CON30       0x88A4
#define MT6332_AUXADC_CON31       0x88A6
#define MT6332_AUXADC_CON32       0x88A8
#define MT6332_AUXADC_CON33       0x88AA
#define MT6332_AUXADC_CON34       0x88AC
#define MT6332_AUXADC_CON35       0x88AE
#define MT6332_AUXADC_CON36       0x88B0
#define MT6332_AUXADC_CON37       0x88B2
#define MT6332_AUXADC_CON38       0x88B4
#define MT6332_AUXADC_CON39       0x88B6
#define MT6332_AUXADC_CON40       0x88B8
#define MT6332_AUXADC_CON41       0x88BA
#define MT6332_AUXADC_CON42       0x88BC
#define MT6332_AUXADC_CON43       0x88BE
#define MT6332_AUXADC_CON44       0x88C0
#define MT6332_AUXADC_CON45       0x88C2
#define MT6332_AUXADC_CON46       0x88C4
#define MT6332_AUXADC_CON47       0x88C6
#define MT6332_STRUP_CONA0        0x8C00
#define MT6332_STRUP_CONA1        0x8C02
#define MT6332_STRUP_CONA2        0x8C04
#define MT6332_STRUP_CON0         0x8C06
#define MT6332_STRUP_CON2         0x8C08
#define MT6332_STRUP_CON3         0x8C0A
#define MT6332_STRUP_CON4         0x8C0C
#define MT6332_STRUP_CON5         0x8C0E
#define MT6332_STRUP_CON6         0x8C10
#define MT6332_STRUP_CON7         0x8C12
#define MT6332_STRUP_CON8         0x8C14
#define MT6332_STRUP_CON9         0x8C16
#define MT6332_STRUP_CON10        0x8C18
#define MT6332_STRUP_CON11        0x8C1A
#define MT6332_STRUP_CON12        0x8C1C
#define MT6332_STRUP_CON13        0x8C1E
#define MT6332_STRUP_CON14        0x8C20
#define MT6332_STRUP_CON15        0x8C22
#define MT6332_STRUP_CON16        0x8C24
#define MT6332_STRUP_CON17        0x8C26
#define MT6332_FGADC_CON0         0x8C28
#define MT6332_FGADC_CON1         0x8C2A
#define MT6332_FGADC_CON2         0x8C2C
#define MT6332_FGADC_CON3         0x8C2E
#define MT6332_FGADC_CON4         0x8C30
#define MT6332_FGADC_CON5         0x8C32
#define MT6332_FGADC_CON6         0x8C34
#define MT6332_FGADC_CON7         0x8C36
#define MT6332_FGADC_CON8         0x8C38
#define MT6332_FGADC_CON9         0x8C3A
#define MT6332_FGADC_CON10        0x8C3C
#define MT6332_FGADC_CON11        0x8C3E
#define MT6332_FGADC_CON12        0x8C40
#define MT6332_FGADC_CON13        0x8C42
#define MT6332_FGADC_CON14        0x8C44
#define MT6332_FGADC_CON15        0x8C46
#define MT6332_FGADC_CON16        0x8C48
#define MT6332_FGADC_CON17        0x8C4A
#define MT6332_FGADC_CON18        0x8C4C
#define MT6332_FGADC_CON19        0x8C4E
#define MT6332_FGADC_CON20        0x8C50
#define MT6332_FGADC_CON21        0x8C52
#define MT6332_FGADC_CON22        0x8C54
#define MT6332_OTP_CON0           0x8C56
#define MT6332_OTP_CON1           0x8C58
#define MT6332_OTP_CON2           0x8C5A
#define MT6332_OTP_CON3           0x8C5C
#define MT6332_OTP_CON4           0x8C5E
#define MT6332_OTP_CON5           0x8C60
#define MT6332_OTP_CON6           0x8C62
#define MT6332_OTP_CON7           0x8C64
#define MT6332_OTP_CON8           0x8C66
#define MT6332_OTP_CON9           0x8C68
#define MT6332_OTP_CON10          0x8C6A
#define MT6332_OTP_CON11          0x8C6C
#define MT6332_OTP_CON12          0x8C6E
#define MT6332_OTP_CON13          0x8C70
#define MT6332_OTP_CON14          0x8C72
#define MT6332_OTP_DOUT_0_15      0x8C74
#define MT6332_OTP_DOUT_16_31     0x8C76
#define MT6332_OTP_DOUT_32_47     0x8C78
#define MT6332_OTP_DOUT_48_63     0x8C7A
#define MT6332_OTP_DOUT_64_79     0x8C7C
#define MT6332_OTP_DOUT_80_95     0x8C7E
#define MT6332_OTP_DOUT_96_111    0x8C80
#define MT6332_OTP_DOUT_112_127   0x8C82
#define MT6332_OTP_DOUT_128_143   0x8C84
#define MT6332_OTP_DOUT_144_159   0x8C86
#define MT6332_OTP_DOUT_160_175   0x8C88
#define MT6332_OTP_DOUT_176_191   0x8C8A
#define MT6332_OTP_DOUT_192_207   0x8C8C
#define MT6332_OTP_DOUT_208_223   0x8C8E
#define MT6332_OTP_DOUT_224_239   0x8C90
#define MT6332_OTP_DOUT_240_255   0x8C92
#define MT6332_OTP_VAL_0_15       0x8C94
#define MT6332_OTP_VAL_16_31      0x8C96
#define MT6332_OTP_VAL_32_47      0x8C98
#define MT6332_OTP_VAL_48_63      0x8C9A
#define MT6332_OTP_VAL_64_79      0x8C9C
#define MT6332_OTP_VAL_80_95      0x8C9E
#define MT6332_OTP_VAL_96_111     0x8CA0
#define MT6332_OTP_VAL_112_127    0x8CA2
#define MT6332_OTP_VAL_128_143    0x8CA4
#define MT6332_OTP_VAL_144_159    0x8CA6
#define MT6332_OTP_VAL_160_175    0x8CA8
#define MT6332_OTP_VAL_176_191    0x8CAA
#define MT6332_OTP_VAL_192_207    0x8CAC
#define MT6332_OTP_VAL_208_223    0x8CAE
#define MT6332_OTP_VAL_224_239    0x8CB0
#define MT6332_OTP_VAL_240_255    0x8CB2
#define MT6332_LDO_CON0           0x8CB4
#define MT6332_LDO_CON1           0x8CB6
#define MT6332_LDO_CON2           0x8CB8
#define MT6332_LDO_CON3           0x8CBA
#define MT6332_LDO_CON5           0x8CBC
#define MT6332_LDO_CON6           0x8CBE
#define MT6332_LDO_CON7           0x8CC0
#define MT6332_LDO_CON8           0x8CC2
#define MT6332_LDO_CON9           0x8CC4
#define MT6332_LDO_CON10          0x8CC6
#define MT6332_LDO_CON11          0x8CC8
#define MT6332_LDO_CON12          0x8CCA
#define MT6332_LDO_CON13          0x8CCC
#define MT6332_FQMTR_CON0         0x8CCE
#define MT6332_FQMTR_CON1         0x8CD0
#define MT6332_FQMTR_CON2         0x8CD2
#define MT6332_IWLED_CON0         0x8CD4
#define MT6332_IWLED_DEG          0x8CD6
#define MT6332_IWLED_STATUS       0x8CD8
#define MT6332_IWLED_EN_CTRL      0x8CDA
#define MT6332_IWLED_CON1         0x8CDC
#define MT6332_IWLED_CON2         0x8CDE
#define MT6332_IWLED_TRIM0        0x8CE0
#define MT6332_IWLED_TRIM1        0x8CE2
#define MT6332_IWLED_CON3         0x8CE4
#define MT6332_IWLED_CON4         0x8CE6
#define MT6332_IWLED_CON5         0x8CE8
#define MT6332_IWLED_CON6         0x8CEA
#define MT6332_IWLED_CON7         0x8CEC
#define MT6332_IWLED_CON8         0x8CEE
#define MT6332_IWLED_CON9         0x8CF0
#define MT6332_SPK_CON0           0x8CF2
#define MT6332_SPK_CON1           0x8CF4
#define MT6332_SPK_CON2           0x8CF6
#define MT6332_SPK_CON3           0x8CF8
#define MT6332_SPK_CON4           0x8CFA
#define MT6332_SPK_CON5           0x8CFC
#define MT6332_SPK_CON6           0x8CFE
#define MT6332_SPK_CON7           0x8D00
#define MT6332_SPK_CON8           0x8D02
#define MT6332_SPK_CON9           0x8D04
#define MT6332_SPK_CON10          0x8D06
#define MT6332_SPK_CON11          0x8D08
#define MT6332_SPK_CON12          0x8D0A
#define MT6332_SPK_CON13          0x8D0C
#define MT6332_SPK_CON14          0x8D0E
#define MT6332_SPK_CON15          0x8D10
#define MT6332_SPK_CON16          0x8D12
#define MT6332_TESTI_CON0         0x8D14
#define MT6332_TESTI_CON1         0x8D16
#define MT6332_TESTI_CON2         0x8D18
#define MT6332_TESTI_CON3         0x8D1A
#define MT6332_TESTI_CON4         0x8D1C
#define MT6332_TESTI_CON5         0x8D1E
#define MT6332_TESTI_CON6         0x8D20
#define MT6332_TESTI_MUX_CON0     0x8D22
#define MT6332_TESTI_MUX_CON1     0x8D24
#define MT6332_TESTI_MUX_CON2     0x8D26
#define MT6332_TESTI_MUX_CON3     0x8D28
#define MT6332_TESTI_MUX_CON4     0x8D2A
#define MT6332_TESTI_MUX_CON5     0x8D2C
#define MT6332_TESTI_MUX_CON6     0x8D2E
#define MT6332_TESTO_CON0         0x8D30
#define MT6332_TESTO_CON1         0x8D32
#define MT6332_TEST_OMUX_CON0     0x8D34
#define MT6332_TEST_OMUX_CON1     0x8D36
#define MT6332_DEBUG_CON0         0x8D38
#define MT6332_DEBUG_CON1         0x8D3A
#define MT6332_DEBUG_CON2         0x8D3C
#define MT6332_FGADC_CON23        0x8D3E
#define MT6332_FGADC_CON24        0x8D40
#define MT6332_FGADC_CON25        0x8D42
#define MT6332_TOP_RST_STATUS     0x8D44
#define MT6332_TOP_RST_STATUS_SET 0x8D46
#define MT6332_TOP_RST_STATUS_CLR 0x8D48
#define MT6332_VDVFS2_CON28       0x8D4A

#endif /* __MFD_MT6332_REGISTERS_H__ */
