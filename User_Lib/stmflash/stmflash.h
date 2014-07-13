
#ifndef __STMFLASH_H__
#define __STMFLASH_H__
#include "sys.h"  
/*
//STM32F40x_41x Flash Memory Organization (User Manual PM0081):
//	Sector [0:3]  Block Size = 16 KBytes
//	Sector [4]    Block Size = 64 KBytes
//	Sector [5:11] Block Size = 128 KBytes
//      ***Total: 1024 KBytes
//Reference from ALIENTEK Warship Dev. Board IAP example
//
*/ 

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












