 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_PBcfg.c
 *
 * Description: Post Build Configuration Source file for TM4C123GH6PM Microcontroller - Port Driver
 *
 * Author: Sarah Ashraf
 ******************************************************************************/
 
#ifndef PORT_CFG_H_
#define PORT_CFG_H_

/*
 * Module Version 1.0.0
 */
#define PORT_CFG_SW_MAJOR_VERSION           		   	            (1U)
#define PORT_CFG_SW_MINOR_VERSION           		   	            (0U)
#define PORT_CFG_SW_PATCH_VERSION            		  	            (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_CFG_AR_RELEASE_MAJOR_VERSION    		  	            (4U)
#define PORT_CFG_AR_RELEASE_MINOR_VERSION     		 	            (0U)
#define PORT_CFG_AR_RELEASE_PATCH_VERSION     			            (3U)

/* Pre-compile option for Development Error Detect */
#define PORT_DEV_ERROR_DETECT					        (STD_ON)
/* Pre-compile option for presence of Port_SetPinDirection API */
#define PORT_SET_PIN_DIRECTION_API					(STD_ON)

/* Pre-compile option for Version Info API */
#define	PORT_VERSION_INFO_API						(STD_ON)

#define PORT_CONFIGURED_PINS					           (44U) /*Excluded the 4 pins of JTAG*/

#define PORT_MODES_NUMBER                                                  (14U)
   
 /*Special Number For ADC Mode*/
#define PORT_MODE_ADC							   (10U)

/*******************************************************************************
 *                    PINS DIRECTION CONFIGURATIONS                            *
 *******************************************************************************/
#define PORTA_PIN0_DIRECTION					   (PORT_PIN_IN)
#define PORTA_PIN1_DIRECTION			               	   (PORT_PIN_IN)
#define PORTA_PIN2_DIRECTION					   (PORT_PIN_IN)
#define PORTA_PIN3_DIRECTION					   (PORT_PIN_IN)
#define PORTA_PIN4_DIRECTION					   (PORT_PIN_IN)
#define PORTA_PIN5_DIRECTION			      		   (PORT_PIN_IN)
#define PORTA_PIN6_DIRECTION					   (PORT_PIN_IN)
#define PORTA_PIN7_DIRECTION					   (PORT_PIN_IN)

#define PORTB_PIN0_DIRECTION			   		   (PORT_PIN_IN)
#define PORTB_PIN1_DIRECTION					   (PORT_PIN_IN)
#define PORTB_PIN2_DIRECTION					   (PORT_PIN_IN)
#define PORTB_PIN3_DIRECTION					   (PORT_PIN_IN)
#define PORTB_PIN4_DIRECTION					   (PORT_PIN_IN)
#define PORTB_PIN5_DIRECTION					   (PORT_PIN_IN)
#define PORTB_PIN6_DIRECTION					   (PORT_PIN_IN)
#define PORTB_PIN7_DIRECTION					   (PORT_PIN_IN)

#define PORTC_PIN4_DIRECTION					   (PORT_PIN_IN)
#define PORTC_PIN5_DIRECTION					   (PORT_PIN_IN)	
#define PORTC_PIN6_DIRECTION					   (PORT_PIN_IN)
#define PORTC_PIN7_DIRECTION					   (PORT_PIN_IN)

#define PORTD_PIN0_DIRECTION					   (PORT_PIN_IN)
#define PORTD_PIN1_DIRECTION					   (PORT_PIN_IN)
#define PORTD_PIN2_DIRECTION					   (PORT_PIN_IN)	
#define PORTD_PIN3_DIRECTION				           (PORT_PIN_IN)
#define PORTD_PIN4_DIRECTION					   (PORT_PIN_IN)
#define PORTD_PIN5_DIRECTION					   (PORT_PIN_IN)
#define PORTD_PIN6_DIRECTION					   (PORT_PIN_IN)
#define PORTD_PIN7_DIRECTION					   (PORT_PIN_IN)  /*LOCKED*/

#define PORTE_PIN0_DIRECTION					   (PORT_PIN_IN)
#define PORTE_PIN1_DIRECTION					   (PORT_PIN_IN)
#define PORTE_PIN2_DIRECTION					   (PORT_PIN_IN)
#define PORTE_PIN3_DIRECTION					   (PORT_PIN_IN)
#define PORTE_PIN4_DIRECTION					   (PORT_PIN_IN)
#define PORTE_PIN5_DIRECTION					   (PORT_PIN_IN)	
#define PORTE_PIN6_DIRECTION					   (PORT_PIN_IN)
#define PORTE_PIN7_DIRECTION					   (PORT_PIN_IN)

#define PORTF_PIN0_DIRECTION					   (PORT_PIN_IN)  /*LOCKED*/
#define PORTF_PIN1_DIRECTION					   (PORT_PIN_OUT)
#define PORTF_PIN2_DIRECTION					   (PORT_PIN_IN)	
#define PORTF_PIN3_DIRECTION					   (PORT_PIN_IN)
#define PORTF_PIN4_DIRECTION					   (PORT_PIN_IN)
#define PORTF_PIN5_DIRECTION					   (PORT_PIN_IN)
#define PORTF_PIN6_DIRECTION					   (PORT_PIN_IN)
#define PORTF_PIN7_DIRECTION					   (PORT_PIN_IN)

/*******************************************************************************
 *                    PINS DIRECTION CHANGEABILITY CONFIGURATIONS                            *
 *******************************************************************************/
#define PORTA_PIN0_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTA_PIN1_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTA_PIN2_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTA_PIN3_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTA_PIN4_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTA_PIN5_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTA_PIN6_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTA_PIN7_DIRECTION_CHANGEABLE				       (STD_OFF)

#define PORTB_PIN0_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTB_PIN1_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTB_PIN2_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTB_PIN3_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTB_PIN4_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTB_PIN5_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTB_PIN6_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTB_PIN7_DIRECTION_CHANGEABLE				       (STD_OFF)

#define PORTC_PIN4_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTC_PIN5_DIRECTION_CHANGEABLE				       (STD_OFF)	
#define PORTC_PIN6_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTC_PIN7_DIRECTION_CHANGEABLE				       (STD_OFF)

#define PORTD_PIN0_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTD_PIN1_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTD_PIN2_DIRECTION_CHANGEABLE				       (STD_OFF)	
#define PORTD_PIN3_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTD_PIN4_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTD_PIN5_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTD_PIN6_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTD_PIN7_DIRECTION_CHANGEABLE				       (STD_OFF)  /*LOCKED*/

#define PORTE_PIN0_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTE_PIN1_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTE_PIN2_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTE_PIN3_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTE_PIN4_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTE_PIN5_DIRECTION_CHANGEABLE				       (STD_OFF)	
#define PORTE_PIN6_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTE_PIN7_DIRECTION_CHANGEABLE				       (STD_OFF)

#define PORTF_PIN0_DIRECTION_CHANGEABLE				       (STD_OFF)  /*LOCKED*/
#define PORTF_PIN1_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTF_PIN2_DIRECTION_CHANGEABLE				       (STD_OFF)	
#define PORTF_PIN3_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTF_PIN4_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTF_PIN5_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTF_PIN6_DIRECTION_CHANGEABLE				       (STD_OFF)
#define PORTF_PIN7_DIRECTION_CHANGEABLE				       (STD_OFF)

/*******************************************************************************
 *            PINS INTERNAL RESISTOR PULL UP CONFIGURATIONS                    *
 *******************************************************************************/
#define PORTA_PIN0_PULL_UP				       (DISABLE_PULL_UP)
#define PORTA_PIN1_PULL_UP				       (DISABLE_PULL_UP)
#define PORTA_PIN2_PULL_UP				       (DISABLE_PULL_UP)
#define PORTA_PIN3_PULL_UP				       (DISABLE_PULL_UP)
#define PORTA_PIN4_PULL_UP				       (DISABLE_PULL_UP)
#define PORTA_PIN5_PULL_UP				       (DISABLE_PULL_UP)
#define PORTA_PIN6_PULL_UP				       (DISABLE_PULL_UP)
#define PORTA_PIN7_PULL_UP				       (DISABLE_PULL_UP)

#define PORTB_PIN0_PULL_UP				       (DISABLE_PULL_UP)
#define PORTB_PIN1_PULL_UP				       (DISABLE_PULL_UP)
#define PORTB_PIN2_PULL_UP				       (DISABLE_PULL_UP)
#define PORTB_PIN3_PULL_UP				       (DISABLE_PULL_UP)
#define PORTB_PIN4_PULL_UP				       (DISABLE_PULL_UP)
#define PORTB_PIN5_PULL_UP				       (DISABLE_PULL_UP)
#define PORTB_PIN6_PULL_UP				       (DISABLE_PULL_UP)
#define PORTB_PIN7_PULL_UP		     		       (DISABLE_PULL_UP)

#define PORTC_PIN4_PULL_UP				       (DISABLE_PULL_UP)
#define PORTC_PIN5_PULL_UP				       (DISABLE_PULL_UP)
#define PORTC_PIN6_PULL_UP				       (DISABLE_PULL_UP)
#define PORTC_PIN7_PULL_UP				       (DISABLE_PULL_UP)

#define PORTD_PIN0_PULL_UP				       (DISABLE_PULL_UP)
#define PORTD_PIN1_PULL_UP				       (DISABLE_PULL_UP)
#define PORTD_PIN2_PULL_UP				       (DISABLE_PULL_UP)
#define PORTD_PIN3_PULL_UP				       (DISABLE_PULL_UP)
#define PORTD_PIN4_PULL_UP				       (DISABLE_PULL_UP)
#define PORTD_PIN5_PULL_UP				       (DISABLE_PULL_UP)
#define PORTD_PIN6_PULL_UP				       (DISABLE_PULL_UP)
#define PORTD_PIN7_PULL_UP				       (DISABLE_PULL_UP) /*LOCKED*/

#define PORTE_PIN0_PULL_UP				       (DISABLE_PULL_UP)
#define PORTE_PIN1_PULL_UP				       (DISABLE_PULL_UP)
#define PORTE_PIN2_PULL_UP				       (DISABLE_PULL_UP)
#define PORTE_PIN3_PULL_UP				       (DISABLE_PULL_UP)
#define PORTE_PIN4_PULL_UP				       (DISABLE_PULL_UP)
#define PORTE_PIN5_PULL_UP				       (DISABLE_PULL_UP)
#define PORTE_PIN6_PULL_UP			               (DISABLE_PULL_UP)
#define PORTE_PIN7_PULL_UP				       (DISABLE_PULL_UP)

#define PORTF_PIN0_PULL_UP				       (DISABLE_PULL_UP) /*LOCKED*/
#define PORTF_PIN1_PULL_UP				       (DISABLE_PULL_UP)
#define PORTF_PIN2_PULL_UP				       (DISABLE_PULL_UP)
#define PORTF_PIN3_PULL_UP				       (DISABLE_PULL_UP)
#define PORTF_PIN4_PULL_UP				       (ENABLE_PULL_UP)
#define PORTF_PIN5_PULL_UP				       (DISABLE_PULL_UP)
#define PORTF_PIN6_PULL_UP				       (DISABLE_PULL_UP)
#define PORTF_PIN7_PULL_UP				       (DISABLE_PULL_UP)

/*******************************************************************************
 *            PINS INTERNAL RESISTOR PULL DOWN CONFIGURATIONS                  *
 *******************************************************************************/
#define PORTA_PIN0_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTA_PIN1_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTA_PIN2_PULL_DOWN			             (DISABLE_PULL_DOWN)
#define PORTA_PIN3_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTA_PIN4_PULL_DOWN			             (DISABLE_PULL_DOWN)
#define PORTA_PIN5_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTA_PIN6_PULL_DOWN			             (DISABLE_PULL_DOWN)
#define PORTA_PIN7_PULL_DOWN				     (DISABLE_PULL_DOWN)

#define PORTB_PIN0_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTB_PIN1_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTB_PIN2_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTB_PIN3_PULL_DOWN			             (DISABLE_PULL_DOWN)
#define PORTB_PIN4_PULL_DOWN			             (DISABLE_PULL_DOWN)
#define PORTB_PIN5_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTB_PIN6_PULL_DOWN			             (DISABLE_PULL_DOWN)
#define PORTB_PIN7_PULL_DOWN		                     (DISABLE_PULL_DOWN)

#define PORTC_PIN4_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTC_PIN5_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTC_PIN6_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTC_PIN7_PULL_DOWN			             (DISABLE_PULL_DOWN)

#define PORTD_PIN0_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTD_PIN1_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTD_PIN2_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTD_PIN3_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTD_PIN4_PULL_DOWN			             (DISABLE_PULL_DOWN)
#define PORTD_PIN5_PULL_DOWN			             (DISABLE_PULL_DOWN)
#define PORTD_PIN6_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTD_PIN7_PULL_DOWN				     (DISABLE_PULL_DOWN) /*LOCKED*/

#define PORTE_PIN0_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTE_PIN1_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTE_PIN2_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTE_PIN3_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTE_PIN4_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTE_PIN5_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTE_PIN6_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTE_PIN7_PULL_DOWN				     (DISABLE_PULL_DOWN)

#define PORTF_PIN0_PULL_DOWN				     (DISABLE_PULL_DOWN) /*LOCKED*/
#define PORTF_PIN1_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTF_PIN2_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTF_PIN3_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTF_PIN4_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTF_PIN5_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTF_PIN6_PULL_DOWN				     (DISABLE_PULL_DOWN)
#define PORTF_PIN7_PULL_DOWN				     (DISABLE_PULL_DOWN)

/*******************************************************************************
 *              PINS INTERNAL INITIAL LEVEL CONFIGURATIONS                     *
 *******************************************************************************/
#define PORTA_PIN0_INITIAL_LEVEL			               (STD_LOW)
#define PORTA_PIN1_INITIAL_LEVEL				       (STD_LOW)
#define PORTA_PIN2_INITIAL_LEVEL				       (STD_LOW)
#define PORTA_PIN3_INITIAL_LEVEL				       (STD_LOW)
#define PORTA_PIN4_INITIAL_LEVEL				       (STD_LOW)
#define PORTA_PIN5_INITIAL_LEVEL				       (STD_LOW)
#define PORTA_PIN6_INITIAL_LEVEL				       (STD_LOW)
#define PORTA_PIN7_INITIAL_LEVEL				       (STD_LOW)

#define PORTB_PIN0_INITIAL_LEVEL				       (STD_LOW)
#define PORTB_PIN1_INITIAL_LEVEL				       (STD_LOW)
#define PORTB_PIN2_INITIAL_LEVEL				       (STD_LOW)
#define PORTB_PIN3_INITIAL_LEVEL				       (STD_LOW)
#define PORTB_PIN4_INITIAL_LEVEL				       (STD_LOW)
#define PORTB_PIN5_INITIAL_LEVEL				       (STD_LOW)
#define PORTB_PIN6_INITIAL_LEVEL				       (STD_LOW)
#define PORTB_PIN7_INITIAL_LEVEL				       (STD_LOW)

#define PORTC_PIN4_INITIAL_LEVEL				       (STD_LOW)
#define PORTC_PIN5_INITIAL_LEVEL				       (STD_LOW)
#define PORTC_PIN6_INITIAL_LEVEL				       (STD_LOW)
#define PORTC_PIN7_INITIAL_LEVEL				       (STD_LOW)

#define PORTD_PIN0_INITIAL_LEVEL				       (STD_LOW)
#define PORTD_PIN1_INITIAL_LEVEL				       (STD_LOW)
#define PORTD_PIN2_INITIAL_LEVEL				       (STD_LOW)
#define PORTD_PIN3_INITIAL_LEVEL				       (STD_LOW)
#define PORTD_PIN4_INITIAL_LEVEL				       (STD_LOW)
#define PORTD_PIN5_INITIAL_LEVEL				       (STD_LOW)
#define PORTD_PIN6_INITIAL_LEVEL				       (STD_LOW)
#define PORTD_PIN7_INITIAL_LEVEL				       (STD_LOW) /*LOCKED*/

#define PORTE_PIN0_INITIAL_LEVEL				       (STD_LOW)
#define PORTE_PIN1_INITIAL_LEVEL				       (STD_LOW)
#define PORTE_PIN2_INITIAL_LEVEL				       (STD_LOW)
#define PORTE_PIN3_INITIAL_LEVEL				       (STD_LOW)
#define PORTE_PIN4_INITIAL_LEVEL				       (STD_LOW)
#define PORTE_PIN5_INITIAL_LEVEL				       (STD_LOW)
#define PORTE_PIN6_INITIAL_LEVEL				       (STD_LOW)
#define PORTE_PIN7_INITIAL_LEVEL				       (STD_LOW)

#define PORTF_PIN0_INITIAL_LEVEL				       (STD_LOW) /*LOCKED*/
#define PORTF_PIN1_INITIAL_LEVEL				       (STD_LOW)
#define PORTF_PIN2_INITIAL_LEVEL				       (STD_LOW)
#define PORTF_PIN3_INITIAL_LEVEL				       (STD_LOW)
#define PORTF_PIN4_INITIAL_LEVEL				       (STD_LOW)
#define PORTF_PIN5_INITIAL_LEVEL				       (STD_LOW)
#define PORTF_PIN6_INITIAL_LEVEL				       (STD_LOW)
#define PORTF_PIN7_INITIAL_LEVEL				       (STD_LOW)

/*******************************************************************************
 *                        PINS MODE CONFIGURATIONS                             *
 *******************************************************************************/
#define PORTA_PIN0_MODE				             (Port_PinModeType)0 /*GPIO*/
#define PORTA_PIN1_MODE					     (Port_PinModeType)0
#define PORTA_PIN2_MODE				             (Port_PinModeType)0
#define PORTA_PIN3_MODE				             (Port_PinModeType)0
#define PORTA_PIN4_MODE					     (Port_PinModeType)0
#define PORTA_PIN5_MODE					     (Port_PinModeType)0
#define PORTA_PIN6_MODE					     (Port_PinModeType)0
#define PORTA_PIN7_MODE					     (Port_PinModeType)0

#define PORTB_PIN0_MODE				             (Port_PinModeType)0
#define PORTB_PIN1_MODE					     (Port_PinModeType)0
#define PORTB_PIN2_MODE					     (Port_PinModeType)0
#define PORTB_PIN3_MODE					     (Port_PinModeType)0
#define PORTB_PIN4_MODE					     (Port_PinModeType)0
#define PORTB_PIN5_MODE					     (Port_PinModeType)0
#define PORTB_PIN6_MODE					     (Port_PinModeType)0
#define PORTB_PIN7_MODE				             (Port_PinModeType)0

#define PORTC_PIN4_MODE					     (Port_PinModeType)0
#define PORTC_PIN5_MODE					     (Port_PinModeType)0
#define PORTC_PIN6_MODE					     (Port_PinModeType)0
#define PORTC_PIN7_MODE					     (Port_PinModeType)0

#define PORTD_PIN0_MODE					     (Port_PinModeType)0
#define PORTD_PIN1_MODE					     (Port_PinModeType)0
#define PORTD_PIN2_MODE					     (Port_PinModeType)0
#define PORTD_PIN3_MODE					     (Port_PinModeType)0
#define PORTD_PIN4_MODE					     (Port_PinModeType)0
#define PORTD_PIN5_MODE				             (Port_PinModeType)0
#define PORTD_PIN6_MODE					     (Port_PinModeType)0
#define PORTD_PIN7_MODE				             (Port_PinModeType)0 /*LOCKED*/

#define PORTE_PIN0_MODE				             (Port_PinModeType)0
#define PORTE_PIN1_MODE				             (Port_PinModeType)0
#define PORTE_PIN2_MODE					     (Port_PinModeType)0
#define PORTE_PIN3_MODE					     (Port_PinModeType)0
#define PORTE_PIN4_MODE			          	     (Port_PinModeType)0
#define PORTE_PIN5_MODE					     (Port_PinModeType)0
#define PORTE_PIN6_MODE					     (Port_PinModeType)0
#define PORTE_PIN7_MODE					     (Port_PinModeType)0

#define PORTF_PIN0_MODE					     (Port_PinModeType)0 /*LOCKED*/
#define PORTF_PIN1_MODE					     (Port_PinModeType)0
#define PORTF_PIN2_MODE					     (Port_PinModeType)0
#define PORTF_PIN3_MODE					     (Port_PinModeType)0
#define PORTF_PIN4_MODE					     (Port_PinModeType)0
#define PORTF_PIN5_MODE					     (Port_PinModeType)0
#define PORTF_PIN6_MODE					     (Port_PinModeType)0
#define PORTF_PIN7_MODE					     (Port_PinModeType)0

/*******************************************************************************
 *                  PINS MODE CHANGEABILITY CONFIGURATIONS                     *
 *******************************************************************************/
#define PORTA_PIN0_MODE_CHANGEABLE				       (STD_OFF)
#define PORTA_PIN1_MODE_CHANGEABLE				       (STD_OFF)
#define PORTA_PIN2_MODE_CHANGEABLE				       (STD_OFF)
#define PORTA_PIN3_MODE_CHANGEABLE				       (STD_OFF)
#define PORTA_PIN4_MODE_CHANGEABLE		 		       (STD_OFF)
#define PORTA_PIN5_MODE_CHANGEABLE				       (STD_OFF)
#define PORTA_PIN6_MODE_CHANGEABLE				       (STD_OFF)
#define PORTA_PIN7_MODE_CHANGEABLE				       (STD_OFF)

#define PORTB_PIN0_MODE_CHANGEABLE				       (STD_OFF)
#define PORTB_PIN1_MODE_CHANGEABLE				       (STD_OFF)
#define PORTB_PIN2_MODE_CHANGEABLE				       (STD_OFF)
#define PORTB_PIN3_MODE_CHANGEABLE				       (STD_OFF)
#define PORTB_PIN4_MODE_CHANGEABLE				       (STD_OFF)
#define PORTB_PIN5_MODE_CHANGEABLE				       (STD_OFF)
#define PORTB_PIN6_MODE_CHANGEABLE				       (STD_OFF)
#define PORTB_PIN7_MODE_CHANGEABLE				       (STD_OFF)

#define PORTC_PIN4_MODE_CHANGEABLE				       (STD_OFF)
#define PORTC_PIN5_MODE_CHANGEABLE				       (STD_OFF)
#define PORTC_PIN6_MODE_CHANGEABLE				       (STD_OFF)
#define PORTC_PIN7_MODE_CHANGEABLE				       (STD_OFF)

#define PORTD_PIN0_MODE_CHANGEABLE				       (STD_OFF)
#define PORTD_PIN1_MODE_CHANGEABLE			               (STD_OFF)
#define PORTD_PIN2_MODE_CHANGEABLE				       (STD_OFF)
#define PORTD_PIN3_MODE_CHANGEABLE				       (STD_OFF)
#define PORTD_PIN4_MODE_CHANGEABLE				       (STD_OFF)
#define PORTD_PIN5_MODE_CHANGEABLE				       (STD_OFF)
#define PORTD_PIN6_MODE_CHANGEABLE				       (STD_OFF)
#define PORTD_PIN7_MODE_CHANGEABLE				       (STD_OFF) /*LOCKED*/

#define PORTE_PIN0_MODE_CHANGEABLE				       (STD_OFF)
#define PORTE_PIN1_MODE_CHANGEABLE				       (STD_OFF)
#define PORTE_PIN2_MODE_CHANGEABLE				       (STD_OFF)
#define PORTE_PIN3_MODE_CHANGEABLE				       (STD_OFF)
#define PORTE_PIN4_MODE_CHANGEABLE				       (STD_OFF)
#define PORTE_PIN5_MODE_CHANGEABLE				       (STD_OFF)
#define PORTE_PIN6_MODE_CHANGEABLE				       (STD_OFF)
#define PORTE_PIN7_MODE_CHANGEABLE				       (STD_OFF)

#define PORTF_PIN0_MODE_CHANGEABLE				       (STD_OFF) /*LOCKED*/
#define PORTF_PIN1_MODE_CHANGEABLE				       (STD_OFF)
#define PORTF_PIN2_MODE_CHANGEABLE				       (STD_OFF)
#define PORTF_PIN3_MODE_CHANGEABLE				       (STD_OFF)
#define PORTF_PIN4_MODE_CHANGEABLE				       (STD_OFF)
#define PORTF_PIN5_MODE_CHANGEABLE				       (STD_OFF)
#define PORTF_PIN6_MODE_CHANGEABLE				       (STD_OFF)
#define PORTF_PIN7_MODE_CHANGEABLE				       (STD_OFF)

/*******************************************************************************
 *                PINS Analog Mode CONFIGURATIONS                       *
 *******************************************************************************/
#define PORTA_PIN0_ANALOG_MODE  				       (STD_OFF)
#define PORTA_PIN1_ANALOG_MODE  				       (STD_OFF)
#define PORTA_PIN2_ANALOG_MODE  				       (STD_OFF)
#define PORTA_PIN3_ANALOG_MODE  				       (STD_OFF)
#define PORTA_PIN4_ANALOG_MODE   		 	               (STD_OFF)
#define PORTA_PIN5_ANALOG_MODE  				       (STD_OFF)
#define PORTA_PIN6_ANALOG_MODE  				       (STD_OFF)
#define PORTA_PIN7_ANALOG_MODE  			               (STD_OFF)

#define PORTB_PIN0_ANALOG_MODE  				       (STD_OFF)
#define PORTB_PIN1_ANALOG_MODE  				       (STD_OFF)
#define PORTB_PIN2_ANALOG_MODE  				       (STD_OFF)
#define PORTB_PIN3_ANALOG_MODE  				       (STD_OFF)
#define PORTB_PIN4_ANALOG_MODE  				       (STD_OFF)
#define PORTB_PIN5_ANALOG_MODE  				       (STD_OFF)
#define PORTB_PIN6_ANALOG_MODE  				       (STD_OFF)
#define PORTB_PIN7_ANALOG_MODE  				       (STD_OFF)

#define PORTC_PIN4_ANALOG_MODE  				       (STD_OFF)
#define PORTC_PIN5_ANALOG_MODE  				       (STD_OFF)
#define PORTC_PIN6_ANALOG_MODE  				       (STD_OFF)
#define PORTC_PIN7_ANALOG_MODE  				       (STD_OFF)

#define PORTD_PIN0_ANALOG_MODE  				       (STD_OFF)
#define PORTD_PIN1_ANALOG_MODE  				       (STD_OFF)
#define PORTD_PIN2_ANALOG_MODE  				       (STD_OFF)
#define PORTD_PIN3_ANALOG_MODE  				       (STD_OFF)
#define PORTD_PIN4_ANALOG_MODE  				       (STD_OFF)
#define PORTD_PIN5_ANALOG_MODE  				       (STD_OFF)
#define PORTD_PIN6_ANALOG_MODE  				       (STD_OFF)
#define PORTD_PIN7_ANALOG_MODE  				       (STD_OFF) /*LOCKED*/

#define PORTE_PIN0_ANALOG_MODE  				       (STD_OFF)
#define PORTE_PIN1_ANALOG_MODE  			               (STD_OFF)
#define PORTE_PIN2_ANALOG_MODE  			               (STD_OFF)
#define PORTE_PIN3_ANALOG_MODE  				       (STD_OFF)
#define PORTE_PIN4_ANALOG_MODE  				       (STD_OFF)
#define PORTE_PIN5_ANALOG_MODE  				       (STD_OFF)
#define PORTE_PIN6_ANALOG_MODE  				       (STD_OFF)
#define PORTE_PIN7_ANALOG_MODE  				       (STD_OFF)

#define PORTF_PIN0_ANALOG_MODE  				       (STD_OFF) /*LOCKED*/
#define PORTF_PIN1_ANALOG_MODE  				       (STD_OFF)
#define PORTF_PIN2_ANALOG_MODE  				       (STD_OFF)
#define PORTF_PIN3_ANALOG_MODE  				       (STD_OFF)
#define PORTF_PIN4_ANALOG_MODE  				       (STD_OFF)
#define PORTF_PIN5_ANALOG_MODE  				       (STD_OFF)
#define PORTF_PIN6_ANALOG_MODE  				       (STD_OFF)
#define PORTF_PIN7_ANALOG_MODE  				       (STD_OFF)

   /************************************************************************/
 #define PORTA_ID					(0U)
#define PORTB_ID					(1U)
#define PORTC_ID					(2U)
#define PORTD_ID					(3U)
   /********************************************************************/
#define PORT_PIN_00                     (0U)                    //A0
#define PORT_PIN_01                     (1U)                    //A1
#define PORT_PIN_02                     (2U)                    //A2
#define PORT_PIN_03                     (3U)                    //A3
#define PORT_PIN_04                     (4U)                    //A4
#define PORT_PIN_05                     (5U)                    //A5
#define PORT_PIN_06                     (6U)                    //A6
#define PORT_PIN_07                     (7U)                    //A7
   
#define PORT_PIN_08                     (8U)                    //B1
#define PORT_PIN_09                     (9U)                    //B2
#define PORT_PIN_10                     (10U)                   //B3
#define PORT_PIN_11                     (11U)                   //B4
#define PORT_PIN_12                     (12U)                   //B5
#define PORT_PIN_13                     (13U)                   //B6
#define PORT_PIN_14                     (14U)                   //B7
#define PORT_PIN_15                     (15U)                   //B7
   
#define PORT_PIN_16                     (16U)                   //C0
#define PORT_PIN_17                     (17U)                   //C1
#define PORT_PIN_18                     (18U)                   //C2
#define PORT_PIN_19                     (19U)                   //C3
#define PORT_PIN_20                     (20U)                   //C4
#define PORT_PIN_21                     (21U)                   //C5
#define PORT_PIN_22                     (22U)                   //C6
#define PORT_PIN_23                     (23U)                   //C7        
   
#define PORT_PIN_24                     (24U)                   //D0
#define PORT_PIN_25                     (25U)                   //D1
#define PORT_PIN_26                     (26U)                   //D2  
#define PORT_PIN_27                     (27U)                   //D3
#define PORT_PIN_28                     (28U)                   //D4
#define PORT_PIN_29                     (29U)                   //D5
#define PORT_PIN_30                     (30U)                   //D6
#define PORT_PIN_31                     (31U)                   //D7
   
#define PORT_PIN_32                     (32U)                   //E0
#define PORT_PIN_33                     (33U)                   //E1
#define PORT_PIN_34                     (34U)                   //E2
#define PORT_PIN_35                     (35U)                   //E3
#define PORT_PIN_36                     (36U)                   //E4
#define PORT_PIN_37                     (37U)                   //E5
   
#define PORT_PIN_38                     (38U)                   //F0
#define PORT_PIN_39                     (39U)                   //F1
#define PORT_PIN_40                     (40U)                   //F2
#define PORT_PIN_41                     (41U)                   //F3
#define PORT_PIN_42                     (42U)                   //F4

   /**********************************************************************/
   /**********************************************************************/
 /*Changeable configuration related to the upper layer RTE / Application*/
   /**********************************************************************/
   /**********************************************************************/

#define portConf_LED_CHANNEL_ID_INDEX 				               (uint8)0x00
#define portConf_LED_PORT_NUM			  				PORTC_ID
#define portConf_LED_CHANNEL_NUM			 			PORT_PIN_21
#define portConf_LED_CHANNEL_CHANNEL_DIRECTION 			                 PORT_PIN_OUT
#define portConf_LED_CHANNEL_INPUT_PIN_MODE				         STD_LOW


#define portConf_BUTTON_CHANNEL_ID_INDEX 				        (uint8)0x01
#define portConf_BUTTON_PORT_NUM		  				PORTD_ID
#define portoConf_BUTTON_CHANNEL_NUM		 			         PORT_PIN_26
#define portConf_BUTTON_CHANNEL_CHANNEL_DIRECTION 		                PORT_PIN_IN
#define portConf_BUTTON_CHANNEL_INPUT_PIN_MODE			               ENABLE_PULL_UP

#endif