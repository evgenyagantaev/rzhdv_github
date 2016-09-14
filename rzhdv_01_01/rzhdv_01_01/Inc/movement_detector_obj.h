/*
 * movement_detector_obj.h
 *
 *  Created on: Sep 13, 2016
 *      Author: root
 */

#ifndef INC_MOVEMENT_DETECTOR_OBJ_H_
#define INC_MOVEMENT_DETECTOR_OBJ_H_

#include "stdint.h"


//************************* constants ***************************************
static const uint16_t ACCELBUFFERLENGTH = 10;
static const uint16_t highActivityThreshold = 300;
static const uint16_t lowActivityThreshold = 90;
static const uint16_t runThreshold = 200;
static const uint16_t walkThreshold = 30;
static const uint16_t noMovementThreshold = 3;
static const uint16_t meanXlevel = 127;

static const long stepInterval = 80;	        // �������� ����� ������ (���������� � ���������� ����� �������� ���: 4 �����������)
static const long runStepInterval = 60;	// �������� ����� ������ ��� ���� (���������� � ���������� ����� �������� ���: 4 �����������)
static const long noLocomotionInterval = 3;  // �������� (�������) ���������� �����������, ����� �������� ������������ ����� ���� � ���� !!!!!!!!!!!!

static const uint16_t numberOfStepsToDetect = 3;
//*********************** end constants *************************************


//************************* variables ***************************************

char sampleTxtBuffer[24];

// buffers for averaging of accelerometer values
int averagingXbuffer[10];
int averagingYbuffer[10];
int averagingZbuffer[10];

int bufferIndex;

int xIntegral;
int yIntegral;
int zIntegral;

int meanX;
int meanY;
int meanZ;
int maxX;
int maxY;
int maxZ;
int minX;
int minY;
int minZ;
int spanX;
int spanY;
int spanZ;

int highMovementDetected;
int lowMovementDetected;

int position, lastPosition;

int newX;

int walkStepCounter;		// ������� ����� ��� ����
int runStepCounter;		// ������� ����� ��� ����
long lastStepTimerMarker;	// ��������� ������	���������� ������������������� ���� (������������ ��� ���������� ���������� ���������� ����� ������)
long lastRunStepTimerMarker;	// ��������� ������	���������� ������������������� ���� (������������ ��� ���������� ���������� ���������� ����� ������)
long noLocomotionMarker;	// ��������� ������ ���������� �����������

int walkStepDetected;
int runStepDetected;
// �����
int runningDetected;
int walkingDetected;
int noLocomotionDetected;
int detectWalking;


//*********************** end variables ************************************















#endif /* INC_MOVEMENT_DETECTOR_OBJ_H_ */