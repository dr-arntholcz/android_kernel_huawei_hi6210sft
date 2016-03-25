

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/

#ifndef __SOC_GPIO_INTERFACE_H__
#define __SOC_GPIO_INTERFACE_H__

#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif



/*****************************************************************************
  2 �궨��
*****************************************************************************/

/****************************************************************************
                     (1/1) register_define
 ****************************************************************************/
/* �Ĵ���˵����GPIO���ݼĴ��������ڶ������������ݽ��л��档
            ������GPIO_DIR�ж�ӦλΪ���ʱ��д��GPIO_DATA�Ĵ�����ֵ�����������Ӧ�Ĺܽţ�ע�⣺��Ҫ������ȷ�ĹܽŸ��ã����������Ϊ����ʱ�������ȡ��Ӧ����ܽŵ�ֵ��
            ��CH����GPIO_DIR��Ӧ�ı�������Ϊ����ʱ����Ч��ȡ�Ľ�������عܽŵ�ֵ��������Ϊ�����ʱ����Ч��ȡ�Ľ��������д���ֵ��
            GPIO_DATA�Ĵ�������PADDR[9:2]ʵ���˶�д�Ĵ������ص����β������üĴ�����Ӧ256����ַ�ռ䡣PADDR[9��2]�ֱ��ӦGPIO_DATA[7��0]������Ӧ��bitΪ��ʱ������Զ���Ӧ��λ���ж�д��������֮������ӦbitΪ�����ܽ��в��������磺
            ��I������ַΪ0x3FC��0b11_1111_1100��,���GPIO_DATA[7��0]��8bit����ȫ����Ч��
            ��I������ַΪ0x200��0b10_0000_0000��,�����GPIO_DATA[7]�Ĳ�����Ч��
   λ����UNION�ṹ:  SOC_GPIO_GPIODATA_0_UNION */
#define SOC_GPIO_GPIODATA_0_ADDR(base)                ((base) + (0x0004))

/* �Ĵ���˵����ͬGPIODATA_0
   λ����UNION�ṹ:  SOC_GPIO_GPIODATA_1_UNION */
#define SOC_GPIO_GPIODATA_1_ADDR(base)                ((base) + (0x0008))

/* �Ĵ���˵����ͬGPIODATA_0
   λ����UNION�ṹ:  SOC_GPIO_GPIODATA_2_UNION */
#define SOC_GPIO_GPIODATA_2_ADDR(base)                ((base) + (0x0010))

/* �Ĵ���˵����ͬGPIODATA_0
   λ����UNION�ṹ:  SOC_GPIO_GPIODATA_3_UNION */
#define SOC_GPIO_GPIODATA_3_ADDR(base)                ((base) + (0x0020))

/* �Ĵ���˵����ͬGPIODATA_0
   λ����UNION�ṹ:  SOC_GPIO_GPIODATA_4_UNION */
#define SOC_GPIO_GPIODATA_4_ADDR(base)                ((base) + (0x0040))

/* �Ĵ���˵����ͬGPIODATA_0
   λ����UNION�ṹ:  SOC_GPIO_GPIODATA_5_UNION */
#define SOC_GPIO_GPIODATA_5_ADDR(base)                ((base) + (0x0080))

/* �Ĵ���˵����ͬGPIODATA_0
   λ����UNION�ṹ:  SOC_GPIO_GPIODATA_6_UNION */
#define SOC_GPIO_GPIODATA_6_ADDR(base)                ((base) + (0x0100))

/* �Ĵ���˵����ͬGPIODATA_0
   λ����UNION�ṹ:  SOC_GPIO_GPIODATA_7_UNION */
#define SOC_GPIO_GPIODATA_7_ADDR(base)                ((base) + (0x0200))

/* �Ĵ���˵����������ƼĴ�����
   λ����UNION�ṹ:  SOC_GPIO_GPIODIR_UNION */
#define SOC_GPIO_GPIODIR_ADDR(base)                   ((base) + (0x400))

/* �Ĵ���˵�������ػ��ƽ������ʽѡ��Ĵ�����
   λ����UNION�ṹ:  SOC_GPIO_GPIOIS_UNION */
#define SOC_GPIO_GPIOIS_ADDR(base)                    ((base) + (0x404))

/* �Ĵ���˵�������ػ�˫�ش�����ʽ�Ĵ�����
   λ����UNION�ṹ:  SOC_GPIO_GPIOIBE_UNION */
#define SOC_GPIO_GPIOIBE_ADDR(base)                   ((base) + (0x408))

/* �Ĵ���˵��������/���ػ�ߵ�ƽ/�͵�ƽѡ��Ĵ�����
   λ����UNION�ṹ:  SOC_GPIO_GPIOIEV_UNION */
#define SOC_GPIO_GPIOIEV_ADDR(base)                   ((base) + (0x40C))

/* �Ĵ���˵�����ж����μĴ�����
   λ����UNION�ṹ:  SOC_GPIO_GPIOIE_UNION */
#define SOC_GPIO_GPIOIE_ADDR(base)                    ((base) + (0x410))

/* �Ĵ���˵�����ж����μĴ�����
   λ����UNION�ṹ:  SOC_GPIO_GPIOIE2_UNION */
#define SOC_GPIO_GPIOIE2_ADDR(base)                   ((base) + (0x500))

/* �Ĵ���˵�����ж����μĴ�����
   λ����UNION�ṹ:  SOC_GPIO_GPIOIE3_UNION */
#define SOC_GPIO_GPIOIE3_ADDR(base)                   ((base) + (0x504))

/* �Ĵ���˵����ԭʼ�ж�״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_GPIO_GPIORIS_UNION */
#define SOC_GPIO_GPIORIS_ADDR(base)                   ((base) + (0x414))

/* �Ĵ���˵�������κ��ж�״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_GPIO_GPIOMIS_UNION */
#define SOC_GPIO_GPIOMIS_ADDR(base)                   ((base) + (0x418))

/* �Ĵ���˵�������κ��ж�״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_GPIO_GPIOMIS2_UNION */
#define SOC_GPIO_GPIOMIS2_ADDR(base)                  ((base) + (0x530))

/* �Ĵ���˵�������κ��ж�״̬�Ĵ�����
   λ����UNION�ṹ:  SOC_GPIO_GPIOMIS3_UNION */
#define SOC_GPIO_GPIOMIS3_ADDR(base)                  ((base) + (0x534))

/* �Ĵ���˵�����ж�����Ĵ�����
   λ����UNION�ṹ:  SOC_GPIO_GPIOIC_UNION */
#define SOC_GPIO_GPIOIC_ADDR(base)                    ((base) + (0x41C))

/* �Ĵ���˵����Ӳ/����ģʽ���ƼĴ�����
   λ����UNION�ṹ:  SOC_GPIO_GPIOAFSEL_UNION */
#define SOC_GPIO_GPIOAFSEL_ADDR(base)                 ((base) + (0x420))

/* �Ĵ���˵������ë�̵�·ʹ�ܼĴ���
   λ����UNION�ṹ:  SOC_GPIO_GPIODEBBYP_UNION */
#define SOC_GPIO_GPIODEBBYP_ADDR(base)                ((base) + (0x618))





/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/



/*****************************************************************************
  4 ��Ϣͷ����
*****************************************************************************/


/*****************************************************************************
  5 ��Ϣ����
*****************************************************************************/



/*****************************************************************************
  6 STRUCT����
*****************************************************************************/



/*****************************************************************************
  7 UNION����
*****************************************************************************/

/****************************************************************************
                     (1/1) register_define
 ****************************************************************************/
/*****************************************************************************
 �ṹ��    : SOC_GPIO_GPIODATA_0_UNION
 �ṹ˵��  : GPIODATA_0 �Ĵ����ṹ���塣��ַƫ����:0x0004����ֵ:0x00000000������:32
 �Ĵ���˵��: GPIO���ݼĴ��������ڶ������������ݽ��л��档
            ������GPIO_DIR�ж�ӦλΪ���ʱ��д��GPIO_DATA�Ĵ�����ֵ�����������Ӧ�Ĺܽţ�ע�⣺��Ҫ������ȷ�ĹܽŸ��ã����������Ϊ����ʱ�������ȡ��Ӧ����ܽŵ�ֵ��
            ��CH����GPIO_DIR��Ӧ�ı�������Ϊ����ʱ����Ч��ȡ�Ľ�������عܽŵ�ֵ��������Ϊ�����ʱ����Ч��ȡ�Ľ��������д���ֵ��
            GPIO_DATA�Ĵ�������PADDR[9:2]ʵ���˶�д�Ĵ������ص����β������üĴ�����Ӧ256����ַ�ռ䡣PADDR[9��2]�ֱ��ӦGPIO_DATA[7��0]������Ӧ��bitΪ��ʱ������Զ���Ӧ��λ���ж�д��������֮������ӦbitΪ�����ܽ��в��������磺
            ��I������ַΪ0x3FC��0b11_1111_1100��,���GPIO_DATA[7��0]��8bit����ȫ����Ч��
            ��I������ַΪ0x200��0b10_0000_0000��,�����GPIO_DATA[7]�Ĳ�����Ч��
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  data_register : 8;  /* bit[0-7] :  */
        unsigned int  reserved      : 24; /* bit[8-31]:  */
    } reg;
} SOC_GPIO_GPIODATA_0_UNION;
#endif
#define SOC_GPIO_GPIODATA_0_data_register_START  (0)
#define SOC_GPIO_GPIODATA_0_data_register_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_GPIO_GPIODATA_1_UNION
 �ṹ˵��  : GPIODATA_1 �Ĵ����ṹ���塣��ַƫ����:0x0008����ֵ:0x00000000������:32
 �Ĵ���˵��: ͬGPIODATA_0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  data_register : 2;  /* bit[0-1] :  */
        unsigned int  reserved      : 30; /* bit[2-31]:  */
    } reg;
} SOC_GPIO_GPIODATA_1_UNION;
#endif
#define SOC_GPIO_GPIODATA_1_data_register_START  (0)
#define SOC_GPIO_GPIODATA_1_data_register_END    (1)


/*****************************************************************************
 �ṹ��    : SOC_GPIO_GPIODATA_2_UNION
 �ṹ˵��  : GPIODATA_2 �Ĵ����ṹ���塣��ַƫ����:0x0010����ֵ:0x00000000������:32
 �Ĵ���˵��: ͬGPIODATA_0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  data_register : 8;  /* bit[0-7] :  */
        unsigned int  reserved      : 24; /* bit[8-31]:  */
    } reg;
} SOC_GPIO_GPIODATA_2_UNION;
#endif
#define SOC_GPIO_GPIODATA_2_data_register_START  (0)
#define SOC_GPIO_GPIODATA_2_data_register_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_GPIO_GPIODATA_3_UNION
 �ṹ˵��  : GPIODATA_3 �Ĵ����ṹ���塣��ַƫ����:0x0020����ֵ:0x00000000������:32
 �Ĵ���˵��: ͬGPIODATA_0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  data_register : 8;  /* bit[0-7] :  */
        unsigned int  reserved      : 24; /* bit[8-31]:  */
    } reg;
} SOC_GPIO_GPIODATA_3_UNION;
#endif
#define SOC_GPIO_GPIODATA_3_data_register_START  (0)
#define SOC_GPIO_GPIODATA_3_data_register_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_GPIO_GPIODATA_4_UNION
 �ṹ˵��  : GPIODATA_4 �Ĵ����ṹ���塣��ַƫ����:0x0040����ֵ:0x00000000������:32
 �Ĵ���˵��: ͬGPIODATA_0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  data_register : 8;  /* bit[0-7] :  */
        unsigned int  reserved      : 24; /* bit[8-31]:  */
    } reg;
} SOC_GPIO_GPIODATA_4_UNION;
#endif
#define SOC_GPIO_GPIODATA_4_data_register_START  (0)
#define SOC_GPIO_GPIODATA_4_data_register_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_GPIO_GPIODATA_5_UNION
 �ṹ˵��  : GPIODATA_5 �Ĵ����ṹ���塣��ַƫ����:0x0080����ֵ:0x00000000������:32
 �Ĵ���˵��: ͬGPIODATA_0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  data_register : 8;  /* bit[0-7] :  */
        unsigned int  reserved      : 24; /* bit[8-31]:  */
    } reg;
} SOC_GPIO_GPIODATA_5_UNION;
#endif
#define SOC_GPIO_GPIODATA_5_data_register_START  (0)
#define SOC_GPIO_GPIODATA_5_data_register_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_GPIO_GPIODATA_6_UNION
 �ṹ˵��  : GPIODATA_6 �Ĵ����ṹ���塣��ַƫ����:0x0100����ֵ:0x00000000������:32
 �Ĵ���˵��: ͬGPIODATA_0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  data_register : 8;  /* bit[0-7] :  */
        unsigned int  reserved      : 24; /* bit[8-31]:  */
    } reg;
} SOC_GPIO_GPIODATA_6_UNION;
#endif
#define SOC_GPIO_GPIODATA_6_data_register_START  (0)
#define SOC_GPIO_GPIODATA_6_data_register_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_GPIO_GPIODATA_7_UNION
 �ṹ˵��  : GPIODATA_7 �Ĵ����ṹ���塣��ַƫ����:0x0200����ֵ:0x00000000������:32
 �Ĵ���˵��: ͬGPIODATA_0
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  data_register : 8;  /* bit[0-7] :  */
        unsigned int  reserved      : 24; /* bit[8-31]:  */
    } reg;
} SOC_GPIO_GPIODATA_7_UNION;
#endif
#define SOC_GPIO_GPIODATA_7_data_register_START  (0)
#define SOC_GPIO_GPIODATA_7_data_register_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_GPIO_GPIODIR_UNION
 �ṹ˵��  : GPIODIR �Ĵ����ṹ���塣��ַƫ����:0x400����ֵ:0x00000000������:32
 �Ĵ���˵��: ������ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  data_direct : 8;  /* bit[0-7] : ���ݷ���
                                                      0�����룻
                                                      1������� */
        unsigned int  reserved    : 24; /* bit[8-31]: ������ */
    } reg;
} SOC_GPIO_GPIODIR_UNION;
#endif
#define SOC_GPIO_GPIODIR_data_direct_START  (0)
#define SOC_GPIO_GPIODIR_data_direct_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_GPIO_GPIOIS_UNION
 �ṹ˵��  : GPIOIS �Ĵ����ṹ���塣��ַƫ����:0x404����ֵ:0x00000000������:32
 �Ĵ���˵��: ���ػ��ƽ������ʽѡ��Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  interrupt_sense : 8;  /* bit[0-7] : ���ػ����������ʽѡ��
                                                          0�����ش����жϣ�
                                                          1����ƽ�����жϡ� */
        unsigned int  reserved        : 24; /* bit[8-31]: ������ */
    } reg;
} SOC_GPIO_GPIOIS_UNION;
#endif
#define SOC_GPIO_GPIOIS_interrupt_sense_START  (0)
#define SOC_GPIO_GPIOIS_interrupt_sense_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_GPIO_GPIOIBE_UNION
 �ṹ˵��  : GPIOIBE �Ĵ����ṹ���塣��ַƫ����:0x408����ֵ:0x00000000������:32
 �Ĵ���˵��: ���ػ�˫�ش�����ʽ�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  interrupt_sense : 8;  /* bit[0-7] : ���ػ�˫�ش�����ʽѡ��
                                                          0�����ش����������ش��������½��ش����ɼĴ���GPIOIEV������
                                                          1���������½��ض����Դ����жϡ� */
        unsigned int  reserved        : 24; /* bit[8-31]: ������ */
    } reg;
} SOC_GPIO_GPIOIBE_UNION;
#endif
#define SOC_GPIO_GPIOIBE_interrupt_sense_START  (0)
#define SOC_GPIO_GPIOIBE_interrupt_sense_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_GPIO_GPIOIEV_UNION
 �ṹ˵��  : GPIOIEV �Ĵ����ṹ���塣��ַƫ����:0x40C����ֵ:0x00000000������:32
 �Ĵ���˵��: ����/���ػ�ߵ�ƽ/�͵�ƽѡ��Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  interrupt_event : 8;  /* bit[0-7] : ����/���ػ�ߵ�ƽ/�͵�ƽѡ��
                                                          0���½��ػ�͵�ƽ�����жϣ�
                                                          1�������ػ�ߵ�ƽ�����жϡ� */
        unsigned int  reserved        : 24; /* bit[8-31]: ������ */
    } reg;
} SOC_GPIO_GPIOIEV_UNION;
#endif
#define SOC_GPIO_GPIOIEV_interrupt_event_START  (0)
#define SOC_GPIO_GPIOIEV_interrupt_event_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_GPIO_GPIOIE_UNION
 �ṹ˵��  : GPIOIE �Ĵ����ṹ���塣��ַƫ����:0x410����ֵ:0x00000000������:32
 �Ĵ���˵��: �ж����μĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  interrupt_mask : 8;  /* bit[0-7] : �ж����Ρ�
                                                         0��������Ӧ�ܽŵ��жϣ�
                                                         1��ʹ����Ӧ�ܽŵ��жϡ� */
        unsigned int  reserved       : 24; /* bit[8-31]: ������ */
    } reg;
} SOC_GPIO_GPIOIE_UNION;
#endif
#define SOC_GPIO_GPIOIE_interrupt_mask_START  (0)
#define SOC_GPIO_GPIOIE_interrupt_mask_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_GPIO_GPIOIE2_UNION
 �ṹ˵��  : GPIOIE2 �Ĵ����ṹ���塣��ַƫ����:0x500����ֵ:0x00000000������:32
 �Ĵ���˵��: �ж����μĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  interrupt2_mask : 8;  /* bit[0-7] : �ж����Ρ�
                                                          0��������Ӧ�ܽŵ��жϣ�
                                                          1��ʹ����Ӧ�ܽŵ��жϡ� */
        unsigned int  reserved        : 24; /* bit[8-31]: ������ */
    } reg;
} SOC_GPIO_GPIOIE2_UNION;
#endif
#define SOC_GPIO_GPIOIE2_interrupt2_mask_START  (0)
#define SOC_GPIO_GPIOIE2_interrupt2_mask_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_GPIO_GPIOIE3_UNION
 �ṹ˵��  : GPIOIE3 �Ĵ����ṹ���塣��ַƫ����:0x504����ֵ:0x00000000������:32
 �Ĵ���˵��: �ж����μĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  interrupt3_mask : 8;  /* bit[0-7] : �ж����Ρ�
                                                          0��������Ӧ�ܽŵ��жϣ�
                                                          1��ʹ����Ӧ�ܽŵ��жϡ� */
        unsigned int  reserved        : 24; /* bit[8-31]: ������ */
    } reg;
} SOC_GPIO_GPIOIE3_UNION;
#endif
#define SOC_GPIO_GPIOIE3_interrupt3_mask_START  (0)
#define SOC_GPIO_GPIOIE3_interrupt3_mask_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_GPIO_GPIORIS_UNION
 �ṹ˵��  : GPIORIS �Ĵ����ṹ���塣��ַƫ����:0x414����ֵ:0x00000000������:32
 �Ĵ���˵��: ԭʼ�ж�״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  raw_interrupt_status : 8;  /* bit[0-7] : ԭʼ�ж�״̬��
                                                               0����λ��Ӧ�Ĺܽ�û�д����жϣ�
                                                               1����λ��Ӧ�Ĺܽ��Ѿ������жϡ� */
        unsigned int  reserved             : 24; /* bit[8-31]: ������ */
    } reg;
} SOC_GPIO_GPIORIS_UNION;
#endif
#define SOC_GPIO_GPIORIS_raw_interrupt_status_START  (0)
#define SOC_GPIO_GPIORIS_raw_interrupt_status_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_GPIO_GPIOMIS_UNION
 �ṹ˵��  : GPIOMIS �Ĵ����ṹ���塣��ַƫ����:0x418����ֵ:0x00000000������:32
 �Ĵ���˵��: ���κ��ж�״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  masked_interrupt_status : 8;  /* bit[0-7] : ���κ��ж�״̬��
                                                                  0����λ��Ӧ�Ĺܽ�û�д����жϣ�
                                                                  1����λ��Ӧ�Ĺܽ��Ѿ������жϡ� */
        unsigned int  reserved                : 24; /* bit[8-31]: ������ */
    } reg;
} SOC_GPIO_GPIOMIS_UNION;
#endif
#define SOC_GPIO_GPIOMIS_masked_interrupt_status_START  (0)
#define SOC_GPIO_GPIOMIS_masked_interrupt_status_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_GPIO_GPIOMIS2_UNION
 �ṹ˵��  : GPIOMIS2 �Ĵ����ṹ���塣��ַƫ����:0x530����ֵ:0x00000000������:32
 �Ĵ���˵��: ���κ��ж�״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  masked_interrupt2_status : 8;  /* bit[0-7] : ���κ��ж�״̬��
                                                                   0����λ��Ӧ�Ĺܽ�û�д����жϣ�
                                                                   1����λ��Ӧ�Ĺܽ��Ѿ������жϡ� */
        unsigned int  reserved                 : 24; /* bit[8-31]: ������ */
    } reg;
} SOC_GPIO_GPIOMIS2_UNION;
#endif
#define SOC_GPIO_GPIOMIS2_masked_interrupt2_status_START  (0)
#define SOC_GPIO_GPIOMIS2_masked_interrupt2_status_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_GPIO_GPIOMIS3_UNION
 �ṹ˵��  : GPIOMIS3 �Ĵ����ṹ���塣��ַƫ����:0x534����ֵ:0x00000000������:32
 �Ĵ���˵��: ���κ��ж�״̬�Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  masked_interrupt3_status : 8;  /* bit[0-7] : ���κ��ж�״̬��
                                                                   0����λ��Ӧ�Ĺܽ�û�д����жϣ�
                                                                   1����λ��Ӧ�Ĺܽ��Ѿ������жϡ� */
        unsigned int  reserved                 : 24; /* bit[8-31]: ������ */
    } reg;
} SOC_GPIO_GPIOMIS3_UNION;
#endif
#define SOC_GPIO_GPIOMIS3_masked_interrupt3_status_START  (0)
#define SOC_GPIO_GPIOMIS3_masked_interrupt3_status_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_GPIO_GPIOIC_UNION
 �ṹ˵��  : GPIOIC �Ĵ����ṹ���塣��ַƫ����:0x41C����ֵ:0x00000000������:32
 �Ĵ���˵��: �ж�����Ĵ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  interrupt_status_clear : 8;  /* bit[0-7] : �ж������
                                                                 0�����ж���Ӱ�죻
                                                                 1�������Ӧ�жϡ� */
        unsigned int  reserved               : 24; /* bit[8-31]: ������ */
    } reg;
} SOC_GPIO_GPIOIC_UNION;
#endif
#define SOC_GPIO_GPIOIC_interrupt_status_clear_START  (0)
#define SOC_GPIO_GPIOIC_interrupt_status_clear_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_GPIO_GPIOAFSEL_UNION
 �ṹ˵��  : GPIOAFSEL �Ĵ����ṹ���塣��ַƫ����:0x420����ֵ:0x00000000������:32
 �Ĵ���˵��: Ӳ/����ģʽ���ƼĴ�����
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  mode_control_select_register : 8;  /* bit[0-7] : ����ģʽѡ��
                                                                       0����������ģʽ��
                                                                       1��Ӳ������ģʽ�� */
        unsigned int  reserved                     : 24; /* bit[8-31]: ������ */
    } reg;
} SOC_GPIO_GPIOAFSEL_UNION;
#endif
#define SOC_GPIO_GPIOAFSEL_mode_control_select_register_START  (0)
#define SOC_GPIO_GPIOAFSEL_mode_control_select_register_END    (7)


/*****************************************************************************
 �ṹ��    : SOC_GPIO_GPIODEBBYP_UNION
 �ṹ˵��  : GPIODEBBYP �Ĵ����ṹ���塣��ַƫ����:0x618����ֵ:0x000000FF������:32
 �Ĵ���˵��: ��ë�̵�·ʹ�ܼĴ���
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  input_filter : 8;  /* bit[0-7] : ��ë�̵�·ʹ�ܣ�(�����طֱ���Ƹ�����Ӧͨ·)
                                                       0��ʹ�ܣ�
                                                       1����ʹ�ܡ� */
        unsigned int  reserved     : 24; /* bit[8-31]: ������ */
    } reg;
} SOC_GPIO_GPIODEBBYP_UNION;
#endif
#define SOC_GPIO_GPIODEBBYP_input_filter_START  (0)
#define SOC_GPIO_GPIODEBBYP_input_filter_END    (7)






/*****************************************************************************
  8 OTHERS����
*****************************************************************************/



/*****************************************************************************
  9 ȫ�ֱ�������
*****************************************************************************/


/*****************************************************************************
  10 ��������
*****************************************************************************/


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of soc_gpio_interface.h */