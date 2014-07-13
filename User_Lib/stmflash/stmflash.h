#ifndef __STMFLASH_H__
#define __STMFLASH_H__
#include "sys.h"  
//////////////////////////////////////////////////////////////////////////////////	 
//���{�ǥu�ѾǲߨϥΡA���g�@�̳\�i�A���o�Ω�䥦����γ~
//ALIENTEK��ĥSTM32�}�o�O
//STM32 FLASH �X�ʥN�X	   
//���I��l@ALIENTEK
//�޳N�׾�:www.openedv.com
//�ק���:2012/9/13
//�����GV1.0
//���v�Ҧ��A�s�����s�C
//Copyright(C) �s�{���P�l�q�l��ަ������q 2009-2019
//All rights reserved									  
//////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////
//�Τ�ھڦۤv���ݭn�]�m
#define STM32_FLASH_SIZE 512 	 		//�ҿ�STM32��FLASH�e�q�j�p(��쬰K)
#define STM32_FLASH_WREN 1              //�ϯ�FLASH�g�J(0�A���O��;1�A�ϯ�)
//////////////////////////////////////////////////////////////////////////////////////////////////////

//FLASH�_�l�a�}
#define STM32_FLASH_BASE 0x08000000 	//STM32 FLASH���_�l�a�}
//FLASH�������
 

u16 STMFLASH_ReadHalfWord(u32 faddr);		  //Ū�X�b�r  
void STMFLASH_WriteLenByte(u32 WriteAddr,u32 DataToWrite,u16 Len);	//���w�a�}�}�l�g�J���w���ת��ƾ�
u32 STMFLASH_ReadLenByte(u32 ReadAddr,u16 Len);						//���w�a�}�}�lŪ�����w���׼ƾ�
void STMFLASH_Write(u32 WriteAddr,u16 *pBuffer,u16 NumToWrite);		//�q���w�a�}�}�l�g�J���w���ת��ƾ�
void STMFLASH_Read(u32 ReadAddr,u16 *pBuffer,u16 NumToRead);   		//�q���w�a�}�}�lŪ�X���w���ת��ƾ�

//���ռg�J
void Test_Write(u32 WriteAddr,u16 WriteData);								   
#endif












