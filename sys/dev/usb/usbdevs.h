/*	$OpenBSD: usbdevs.h,v 1.29 2001/01/27 04:02:16 deraadt Exp $	*/

/*
 * THIS FILE IS AUTOMATICALLY GENERATED.  DO NOT EDIT.
 *
 * generated from:
 *	OpenBSD: usbdevs,v 1.30 2001/01/27 04:01:53 deraadt Exp 
 */
/* $NetBSD: usbdevs,v 1.127 2000/11/15 14:36:09 augustss Exp $ */

/*
 * Copyright (c) 1998, 1999, 2000 The NetBSD Foundation, Inc.
 * All rights reserved.
 *
 * This code is derived from software contributed to The NetBSD Foundation
 * by Lennart Augustsson (lennart@augustsson.net) at
 * Carlstedt Research & Technology.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *        This product includes software developed by the NetBSD
 *        Foundation, Inc. and its contributors.
 * 4. Neither the name of The NetBSD Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE NETBSD FOUNDATION, INC. AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE FOUNDATION OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/*
 * List of known USB vendors
 */

#define	USB_VENDOR_AOX	0x03e8		/* AOX */
#define	USB_VENDOR_ATMEL	0x03eb		/* Atmel */
#define	USB_VENDOR_HP	0x03f0		/* Hewlett Packard */
#define	USB_VENDOR_ADAPTEC	0x03f3		/* Adaptec */
#define	USB_VENDOR_NATIONAL	0x0400		/* National Semiconductor */
#define	USB_VENDOR_ACERLABS	0x0402		/* Acer Labs */
#define	USB_VENDOR_FTDI	0x0403		/* Future Technology Devices */
#define	USB_VENDOR_NEC	0x0409		/* NEC */
#define	USB_VENDOR_KODAK	0x040a		/* Eastman Kodak */
#define	USB_VENDOR_MELCO	0x0411		/* Melco */
#define	USB_VENDOR_CREATIVELABS	0x041e		/* Creative Labs */
#define	USB_VENDOR_ADI	0x0422		/* ADI Systems */
#define	USB_VENDOR_CATC	0x0423		/* Computer Access Technology */
#define	USB_VENDOR_GRAVIS	0x0428		/* Advanced Gravis Computer */
#define	USB_VENDOR_SUN	0x0430		/* Sun Microsystems */
#define	USB_VENDOR_AMD	0x0438		/* Advanced Micro Devices */
#define	USB_VENDOR_LEXMARK	0x043d		/* Lexmark International */
#define	USB_VENDOR_NANAO	0x0440		/* NANAO */
#define	USB_VENDOR_ALPS	0x044e		/* Alps Electric */
#define	USB_VENDOR_THRUST	0x044f		/* Thrustmaster */
#define	USB_VENDOR_TI	0x0451		/* Texas Instruments */
#define	USB_VENDOR_ANALOGDEVICES	0x0456		/* Analog Devices */
#define	USB_VENDOR_KYE	0x0458		/* KYE Systems */
#define	USB_VENDOR_DIAMOND2	0x045a		/* Diamond (Supra) */
#define	USB_VENDOR_MICROSOFT	0x045e		/* Microsoft */
#define	USB_VENDOR_PRIMAX	0x0461		/* Primax Electronics */
#define	USB_VENDOR_AMP	0x0464		/* AMP */
#define	USB_VENDOR_CHERRY	0x046a		/* Cherry Mikroschalter */
#define	USB_VENDOR_MEGATRENDS	0x046b		/* American Megatrends */
#define	USB_VENDOR_LOGITECH	0x046d		/* Logitech */
#define	USB_VENDOR_BTC	0x046e		/* Behavior Tech. Computer */
#define	USB_VENDOR_PHILIPS	0x0471		/* Philips */
#define	USB_VENDOR_CONNECTIX	0x0478		/* Connectix */
#define	USB_VENDOR_KENSINGTON	0x047d		/* Kensington */
#define	USB_VENDOR_LUCENT	0x047e		/* Lucent */
#define	USB_VENDOR_STMICRO	0x0483		/* STMicroelectronics */
#define	USB_VENDOR_COMPAQ	0x049f		/* Compaq */
#define	USB_VENDOR_ACERP	0x04a5		/* Acer Peripherals */
#define	USB_VENDOR_VISIONEER	0x04a7		/* Visioneer */
#define	USB_VENDOR_CANON	0x04a9		/* Canon */
#define	USB_VENDOR_IBM	0x04b3		/* IBM */
#define	USB_VENDOR_CYPRESS	0x04b4		/* Cypress Semiconductor */
#define	USB_VENDOR_EPSON	0x04b8		/* Seiko Epson */
#define	USB_VENDOR_RAINBOW	0x04b9		/* Rainbow Technologies */
#define	USB_VENDOR_IODATA	0x04bb		/* I/O Data */
#define	USB_VENDOR_3COMUSR	0x04c1		/* U.S. Robotics */
#define	USB_VENDOR_METHODE	0x04c2		/* Methode Electronics Far East */
#define	USB_VENDOR_MAXISWITCH	0x04c3		/* Maxi Switch */
#define	USB_VENDOR_LOCKHEEDMER	0x04c4		/* Lockheed Martin Energy Research */
#define	USB_VENDOR_FUJITSU	0x04c5		/* Fujitsu */
#define	USB_VENDOR_TOSHIBAAM	0x04c6		/* Toshiba America Electronic Components */
#define	USB_VENDOR_MICROMACRO	0x04c7		/* Micro Macro Technologies */
#define	USB_VENDOR_KONICA	0x04c8		/* Konica */
#define	USB_VENDOR_LITEON	0x04ca		/* Lite-On Technology */
#define	USB_VENDOR_FUJIPHOTO	0x04cb		/* Fuji Photo Film */
#define	USB_VENDOR_PHILIPSSEMI	0x04cc		/* Philips Semiconductors */
#define	USB_VENDOR_TATUNG	0x04cd		/* Tatung Co. Of America */
#define	USB_VENDOR_SCANLOGIC	0x04ce		/* ScanLogic */
#define	USB_VENDOR_MYSON	0x04cf		/* Myson Technology */
#define	USB_VENDOR_DIGI2	0x04d0		/* Digi */
#define	USB_VENDOR_ITTCANON	0x04d1		/* ITT Canon */
#define	USB_VENDOR_ALTEC	0x04d2		/* Altec Lansing */
#define	USB_VENDOR_SHUTTLE	0x04e6		/* Shuttle Technology */
#define	USB_VENDOR_ANNABOOKS	0x04ed		/* Annabooks */
#define	USB_VENDOR_CHICONY	0x04f2		/* Chicony Electronics */
#define	USB_VENDOR_BROTHER	0x04f9		/* Brother Industries */
#define	USB_VENDOR_DALLAS	0x04fa		/* Dallas Semiconductor */
#define	USB_VENDOR_ACER	0x0502		/* Acer */
#define	USB_VENDOR_3COM	0x0506		/* 3Com */
#define	USB_VENDOR_AZTECH	0x0509		/* Aztech Systems */
#define	USB_VENDOR_BELKIN	0x050d		/* Belkin Components */
#define	USB_VENDOR_KAWATSU	0x050f		/* Kawatsu Semiconductor */
#define	USB_VENDOR_APC	0x051d		/* American Power Conversion */
#define	USB_VENDOR_CONNECTEK	0x0522		/* Advanced Connectek USA */
#define	USB_VENDOR_NETCHIP	0x0525		/* NetChip Technology */
#define	USB_VENDOR_ALTRA	0x0527		/* ALTRA */
#define	USB_VENDOR_ATI	0x0528		/* ATI Technologies */
#define	USB_VENDOR_AKS	0x0529		/* Aladdin Knowledge Systems */
#define	USB_VENDOR_UNIACCESS	0x0540		/* Universal Access */
#define	USB_VENDOR_ANCHOR	0x0547		/* Anchor Chips */
#define	USB_VENDOR_SONY	0x054c		/* Sony */
#define	USB_VENDOR_VISION	0x0553		/* VLSI Vision */
#define	USB_VENDOR_ASAHIKASEI	0x0556		/* Asahi Kasei Microsystems */
#define	USB_VENDOR_ATEN	0x0557		/* ATEN International */
#define	USB_VENDOR_MUSTEK	0x055f		/* Mustek Systems */
#define	USB_VENDOR_TELEX	0x0562		/* Telex Communications */
#define	USB_VENDOR_PERACOM	0x0565		/* Peracom Networks */
#define	USB_VENDOR_ALCOR2	0x0566		/* Alcor Micro */
#define	USB_VENDOR_WACOM	0x056a		/* WACOM */
#define	USB_VENDOR_ETEK	0x056c		/* e-TEK Labs */
#define	USB_VENDOR_EIZO	0x056d		/* EIZO */
#define	USB_VENDOR_ELECOM	0x056e		/* Elecom */
#define	USB_VENDOR_BAFO	0x0576		/* BAFO/Quality Computer Accessories */
#define	USB_VENDOR_YEDATA	0x057b		/* Y-E Data */
#define	USB_VENDOR_AVM	0x057c		/* AVM */
#define	USB_VENDOR_QUICKSHOT	0x057f		/* Quickshot */
#define	USB_VENDOR_ROCKFIRE	0x0583		/* Rockfire */
#define	USB_VENDOR_ZYXEL	0x0586		/* ZyXEL Communication */
#define	USB_VENDOR_ALCOR	0x058f		/* Alcor Micro */
#define	USB_VENDOR_IOMEGA	0x059b		/* Iomega */
#define	USB_VENDOR_ATREND	0x059c		/* A-Trend Technology */
#define	USB_VENDOR_AID	0x059d		/* Advanced Input Devices */
#define	USB_VENDOR_LACIE	0x059f		/* LaCie */
#define	USB_VENDOR_OMNIVISION	0x05a9		/* OmniVision */
#define	USB_VENDOR_INSYSTEM	0x05ab		/* In-System Design */
#define	USB_VENDOR_APPLE	0x05ac		/* Apple Computer */
#define	USB_VENDOR_DIGI	0x05c5		/* Digi International */
#define	USB_VENDOR_QTRONIX	0x05c7		/* Qtronix */
#define	USB_VENDOR_ELSA	0x05cc		/* ELSA */
#define	USB_VENDOR_BRAINBOXES	0x05d1		/* Brainboxes Limited */
#define	USB_VENDOR_AXIOHM	0x05d9		/* Axiohm Transaction Solutions */
#define	USB_VENDOR_MICROTEK	0x05da		/* Microtek */
#define	USB_VENDOR_SYMBOL	0x05e0		/* Symbol Technologies */
#define	USB_VENDOR_GENESYS	0x05e3		/* Genesys Logic */
#define	USB_VENDOR_FUJI	0x05e5		/* Fuji Electric */
#define	USB_VENDOR_KEITHLEY	0x05e6		/* Keithley Instruments */
#define	USB_VENDOR_EIZONANAO	0x05e7		/* EIZO Nanao */
#define	USB_VENDOR_KLSI	0x05e9		/* Kawasaki LSI */
#define	USB_VENDOR_FFC	0x05eb		/* FFC Limited */
#define	USB_VENDOR_ANKO	0x05ef		/* Anko Electronic */
#define	USB_VENDOR_PIENGINEERING	0x05f3		/* P.I. Engineering */
#define	USB_VENDOR_AOC	0x05f6		/* AOC International */
#define	USB_VENDOR_CHIC	0x05fe		/* Chic Technology */
#define	USB_VENDOR_BARCO	0x0600		/* Barco Display Systems */
#define	USB_VENDOR_BRIDGE	0x0607		/* Bridge Information */
#define	USB_VENDOR_SOLIDYEAR	0x060b		/* Solid Year */
#define	USB_VENDOR_BIORAD	0x0614		/* Bio-Rad Laboratories */
#define	USB_VENDOR_MACALLY	0x0618		/* Macally */
#define	USB_VENDOR_ACTLABS	0x061c		/* Act Labs */
#define	USB_VENDOR_ALARIS	0x0620		/* Alaris */
#define	USB_VENDOR_APEX	0x0624		/* Apex */
#define	USB_VENDOR_AVISION	0x0638		/* Avision */
#define	USB_VENDOR_TEAC	0x0644		/* TEAC */
#define	USB_VENDOR_LINKSYS	0x066b		/* Linksys */
#define	USB_VENDOR_ACERSA	0x066e		/* Acer Semiconductor America */
#define	USB_VENDOR_AIWA	0x0677		/* Aiwa */
#define	USB_VENDOR_ACARD	0x0678		/* ACARD Technology */
#define	USB_VENDOR_PROLIFIC	0x067b		/* Prolific Technology */
#define	USB_VENDOR_ADVANCELOGIC	0x0680		/* Avance Logic */
#define	USB_VENDOR_CTX	0x0698		/* Chuntex */
#define	USB_VENDOR_ASKEY	0x069a		/* Askey Computer */
#define	USB_VENDOR_ALCATELT	0x06b9		/* Alcatel Telecom */
#define	USB_VENDOR_AGFA	0x06bd		/* AGFA-Gevaert NV */
#define	USB_VENDOR_ASIAMD	0x06be		/* Asia Microelectronic Development */
#define	USB_VENDOR_BIZLINK	0x06c4		/* Bizlink International */
#define	USB_VENDOR_AASHIMA	0x06d6		/* Aashima Technology B.V. */
#define	USB_VENDOR_MULTITECH	0x06e0		/* MultiTech */
#define	USB_VENDOR_ADS	0x06e1		/* ADS Technologies */
#define	USB_VENDOR_ALCATELM	0x06e4		/* Alcatel Microelectronics */
#define	USB_VENDOR_SIRIUS	0x06ea		/* Sirius Technologies */
#define	USB_VENDOR_BOSTON	0x06fd		/* Boston Acoustics */
#define	USB_VENDOR_SMC	0x0707		/* Standard Microsystems */
#define	USB_VENDOR_MCT	0x0711		/* MCT */
#define	USB_VENDOR_AUREAL	0x0755		/* Aureal Semiconductor */
#define	USB_VENDOR_MIDIMAN	0x0763		/* Midiman */
#define	USB_VENDOR_GRIFFIN	0x077d		/* Griffin Technology */
#define	USB_VENDOR_SANDISK	0x0781		/* SanDisk */
#define	USB_VENDOR_BRIMAX	0x078e		/* Brimax */
#define	USB_VENDOR_AXIS	0x0792		/* Axis Communications AB */
#define	USB_VENDOR_ABL	0x0794		/* ABL Electronics */
#define	USB_VENDOR_ALFADATA	0x079d		/* Alfadata Computer */
#define	USB_VENDOR_NATIONALTECH	0x07a2		/* National Technical Systems */
#define	USB_VENDOR_ONNTO	0x07a3		/* Onnto */
#define	USB_VENDOR_BE	0x07a4		/* Be */
#define	USB_VENDOR_ADMTEK	0x07a6		/* ADMtek */
#define	USB_VENDOR_COREGA	0x07aa		/* Corega */
#define	USB_VENDOR_FREECOM	0x07ab		/* Freecom */
#define	USB_VENDOR_MICROTECH	0x07af		/* Microtech */
#define	USB_VENDOR_ABOCOM	0x07b8		/* AboCom Systems */
#define	USB_VENDOR_KEISOKUGIKEN	0x07c1		/* Keisokugiken */
#define	USB_VENDOR_APG	0x07c5		/* APG Cash Drawer */
#define	USB_VENDOR_BUG	0x07c8		/* B.U.G. */
#define	USB_VENDOR_ALLIEDTELESYN	0x07c9		/* Allied Telesyn International */
#define	USB_VENDOR_AVERMEDIA	0x07ca		/* AVerMedia Technologies */
#define	USB_VENDOR_SIIG	0x07cc		/* SIIG */
#define	USB_VENDOR_APTIO	0x07d2		/* Aptio Products */
#define	USB_VENDOR_ARASAN	0x07da		/* Arasan Chip Systems */
#define	USB_VENDOR_ALLIEDCABLE	0x07e6		/* Allied Cable */
#define	USB_VENDOR_ZOOM	0x0803		/* Zoom Telephonics */
#define	USB_VENDOR_BROADLOGIC	0x0827		/* BroadLogic */
#define	USB_VENDOR_HANDSPRING	0x082d		/* Handspring */
#define	USB_VENDOR_ACTIONSTAR	0x0835		/* Action Star Enterprise */
#define	USB_VENDOR_PALM	0x0830		/* Palm Computing */
#define	USB_VENDOR_ACCTON	0x083a		/* Accton Technology */
#define	USB_VENDOR_DIAMOND	0x0841		/* Diamond */
#define	USB_VENDOR_NETGEAR	0x0846		/* BayNETGEAR */
#define	USB_VENDOR_ACTIVEWIRE	0x0854		/* ActiveWire */
#define	USB_VENDOR_METRICOM	0x0870		/* Metricom */
#define	USB_VENDOR_ADESSOKBTEK	0x087c		/* ADESSO/Kbtek America */
#define	USB_VENDOR_APT	0x0880		/* APT Technologies */
#define	USB_VENDOR_BOCARESEARCH	0x0885		/* Boca Research */
#define	USB_VENDOR_ANDREA	0x08a8		/* Andrea Electronics */
#define	USB_VENDOR_BURRBROWN	0x08bb		/* Burr-Brown Japan */
#define	USB_VENDOR_2WIRE	0x08c8		/* 2Wire, Inc */
#define	USB_VENDOR_AIPTEK	0x08ca		/* AIPTEK International */
#define	USB_VENDOR_SMARTBRIDGES	0x08d1		/* SmartBridges */
#define	USB_VENDOR_BILLIONTON	0x08dd		/* Billionton Systems */
#define	USB_VENDOR_EXTENDED	0x08e9		/* Extended Systems */
#define	USB_VENDOR_AUTHENTEC	0x08ff		/* AuthenTec */
#define	USB_VENDOR_ALATION	0x0910		/* Alation Systems */
#define	USB_VENDOR_BIOMETRIC	0x0929		/* American Biometric Company */
#define	USB_VENDOR_YANO	0x094f		/* Yano */
#define	USB_VENDOR_KINGSTON	0x0951		/* Kingston Technology */
#define	USB_VENDOR_BLUEWATER	0x0956		/* BlueWater Systems */
#define	USB_VENDOR_AGILENT	0x0957		/* Agilent Technologies */
#define	USB_VENDOR_ADIRONDACK	0x0976		/* Adirondack Wire & Cable */
#define	USB_VENDOR_BECKHOFF	0x0978		/* Beckhoff */
#define	USB_VENDOR_ALTIUS	0x09b3		/* Altius Solutions */
#define	USB_VENDOR_ARRIS	0x09c1		/* Arris Interactive */
#define	USB_VENDOR_ACTIVCARD	0x09c3		/* ACTIVCARD */
#define	USB_VENDOR_ACTISYS	0x09c4		/* ACTiSYS */
#define	USB_VENDOR_AFOURTECH	0x09da		/* A-FOUR TECH */
#define	USB_VENDOR_AIMEX	0x09dc		/* AIMEX */
#define	USB_VENDOR_ADDONICS	0x09df		/* Addonics Technologies */
#define	USB_VENDOR_AKAI	0x09e8		/* AKAI professional M.I. */
#define	USB_VENDOR_ARESCOM	0x09f5		/* ARESCOM */
#define	USB_VENDOR_BAY	0x09f9		/* Bay Associates */
#define	USB_VENDOR_ALTERA	0x09fb		/* Altera */
#define	USB_VENDOR_TREK	0x0a16		/* Trek Technology */
#define	USB_VENDOR_ASAHIOPTICAL	0x0a17		/* Asahi Optical */
#define	USB_VENDOR_BOCASYSTEMS	0x0a43		/* Boca Systems */
#define	USB_VENDOR_BROADCOM	0x0a5c		/* Broadcom */
#define	USB_VENDOR_GEOCAST	0x0a79		/* Geocast Network Systems */
#define	USB_VENDOR_MOTOROLA	0x1063		/* Motorola */
#define	USB_VENDOR_PLX	0x10b5		/* PLX */
#define	USB_VENDOR_BELKIN2	0x1293		/* Belkin Components */
#define	USB_VENDOR_UMAX	0x1606		/* UMAX Data Systems */
#define	USB_VENDOR_INSIDEOUT	0x1608		/* Inside Out Networks */
#define	USB_VENDOR_ENTREGA	0x1645		/* Entrega */
#define	USB_VENDOR_ACTIONTEC	0x1668		/* Actiontec Electronics */
#define	USB_VENDOR_DLINK	0x2001		/* D-Link */
#define	USB_VENDOR_INTEL	0x8086		/* Intel */
#define	USB_VENDOR_HP2	0xf003		/* Hewlett Packard */

/*
 * List of known products.  Grouped by vendor.
 */

/* 3Com products */
#define	USB_PRODUCT_3COM_HOMECONN	0x009d		/* HomeConnect Camera */
#define	USB_PRODUCT_3COM_3C19250	0x03E8		/* 3C19250 Ethernet */
#define	USB_PRODUCT_3COM_USR56K	0x3021		/* U.S.Robotics 56000 */

#define	USB_PRODUCT_3COM_3C460	0x11f8		/* HomeConnect Ethernet */

#define	USB_PRODUCT_3COMUSR_OFFICECONN	0x0082		/* 3Com OfficeConnect Analog Modem */
#define	USB_PRODUCT_3COMUSR_USRISDN	0x008f		/* 3Com U.S. Robotics Pro ISDN TA */
#define	USB_PRODUCT_3COMUSR_HOMECONN	0x009d		/* 3Com HomeConnect camera */
#define	USB_PRODUCT_3COMUSR_USR56K	0x3021		/* U.S.Robotics 56000 */


/* Acer Peripherals products */
#define	USB_PRODUCT_ACERP_ACERSCAN_C310U	0x12a6		/* Acerscan C310U */
#define	USB_PRODUCT_ACERP_ACERSCAN_320U	0x2022		/* Acerscan 320U */
#define	USB_PRODUCT_ACERP_ACERSCAN_640U	0x2040		/* Acerscan 640U */
#define	USB_PRODUCT_ACERP_ACERSCAN_620U	0x2060		/* Acerscan 620U */

/* ActiveWire products */
#define	USB_PRODUCT_ACTIVEWIRE_IOBOARD	0x0100		/* I/O Board */
#define	USB_PRODUCT_ACTIVEWIRE_IOBOARD_FW1	0x0101		/* I/O Board, rev. 1 */

/* ADMtek products */
#define	USB_PRODUCT_ADMTEK_PEGASUS	0x0986		/* AN986 Ethernet */

/* ADS products */
#define	USB_PRODUCT_ADS_UBS10BT	0x0008		/* UBS-10BT Ethernet */

/* Agiler products */
#define	USB_PRODUCT_ELECOM_MOUSE29UO	0x0002		/* mouse 29UO */

/* AGFA products */
#define	USB_PRODUCT_AGFA_SNAPSCAN1212U	0x0001		/* SnapScan 1212U */
#define	USB_PRODUCT_AGFA_SNAPSCANTOUCH	0x0100		/* SnapScan Touch */
#define	USB_PRODUCT_AGFA_SNAPSCAN1212U2	0x2061		/* SnapScan 1212U */

/* AKS products */
#define	USB_PRODUCT_AKS_USBHASP	0x0001		/* USB-HASP 0.06 */

/* Alcor Micro products */
#define	USB_PRODUCT_ALCOR2_KBD_HUB	0x2802		/* Kbd Hub */

#define	USB_PRODUCT_ALCOR_MA_KBD_HUB	0x9213		/* MacAlly Kbd Hub */
#define	USB_PRODUCT_ALCOR_AU9814	0x9215		/* AU9814 Hub */
#define	USB_PRODUCT_ALCOR_SM_KBD	0x9410		/* MicroConnectors/StrongMan */
#define	USB_PRODUCT_ALCOR_NEC_KBD_HUB	0x9472		/* NEC Kbd Hub */

/* Altec Lansing products */
#define	USB_PRODUCT_ALTEC_ADA70	0x0070		/* ADA70 Speakers */
#define	USB_PRODUCT_ALTEC_ASC495	0xff05		/* ASC495 Speakers */

/* American Power Conversion products */
#define	USB_PRODUCT_APC_UPSPRO500	0x0002		/* Back-UPS Pro 500 */

/* Anchor products */
#define	USB_PRODUCT_ANCHOR_EZUSB	0x2131		/* EZUSB */
#define	USB_PRODUCT_ANCHOR_EZLINK	0x2720		/* EZLINK */

/* AOX products */
#define	USB_PRODUCT_AOX_USB101	0x0008		/* USB Ethernet controller engine */

/* Apple Computer products */
#define	USB_PRODUCT_APPLE_OPTMOUSE	0x0302		/* Optical mouse */
#define	USB_PRODUCT_APPLE_SPEAKERS	0x1101		/* Speakers */

/* ATen products */
#define	USB_PRODUCT_ATEN_UC1284	0x2001		/* Parallel printer adapter */
#define	USB_PRODUCT_ATEN_UC10T	0x2002		/* 10Mbps Ethernet */
#define	USB_PRODUCT_ATEN_UC232A	0x2008		/* Serial adapter */

/* Avision products */
#define	USB_PRODUCT_AVISION_1200U	0x0268		/* 1200U scanner */

/* Belkin products */
/*product BELKIN F5U111		0x????	F5U111 Ethernet */
#define	USB_PRODUCT_BELKIN2_F5U002	0x0002		/* F5U002 Parallel printer adapter */

/* Billionton products */
#define	USB_PRODUCT_BILLIONTON_USB100	0x0986		/* USB100N 10/100 Ethernet */

/* Brother Industries products */
#define	USB_PRODUCT_BROTHER_HL1050	0x0002		/* HL-1050 laser printer */

/* Behavior Technology Computer products */
#define	USB_PRODUCT_BTC_BTC7932	0x6782		/* Keyboard */

/* Canon products */
#define	USB_PRODUCT_CANON_S10	0x3041		/* PowerShot S10 */

/* CATC products */
#define	USB_PRODUCT_CATC_NETMATE	0x000a		/* Netmate Ethernet */
#define	USB_PRODUCT_CATC_NETMATE2	0x000c		/* Netmate2 Ethernet */
#define	USB_PRODUCT_CATC_CHIEF	0x000d		/* USB Chief Bus & Protocol Analyzer */
#define	USB_PRODUCT_CATC_ANDROMEDA	0x1237		/* Andromeda hub */

/* Cherry products */
#define	USB_PRODUCT_CHERRY_MY3000KBD	0x0001		/* My3000 */
#define	USB_PRODUCT_CHERRY_MY3000HUB	0x0003		/* My3000 */

/* Chic Technology products */
#define	USB_PRODUCT_CHIC_MOUSE1	0x0001		/* mouse */
#define	USB_PRODUCT_CHIC_CYPRESS	0x0003		/* Cypress */

/* Chicony products */
#define	USB_PRODUCT_CHICONY_KB8933	0x0001		/* KB-8933 */

/* Compaq products */
#define	USB_PRODUCT_COMPAQ_PJB100	0x504a		/* Personal Jukebox PJB100 */

/* Connectix products */
#define	USB_PRODUCT_CONNECTIX_QUICKCAM	0x0001		/* QuickCam */

/* Corega products */
#define	USB_PRODUCT_COREGA_ETHER_USB_T	0x0001		/* Ether USB-T */
#define	USB_PRODUCT_COREGA_FETHER_USB_TX	0x0004		/* FEther USB-TX */

/* Creative Labs products */
#define	USB_PRODUCT_CREATIVELABS_NOMAD_II	0x1002		/* Nomad II */
#define	USB_PRODUCT_CREATIVELABS_NOMAD_IIMG	0x4004		/* Nomad II MG */

/* CTX products */
#define	USB_PRODUCT_CTX_EX1300	0x9999		/* Ex1300 hub */

/* Cypress Semiconductor products */
#define	USB_PRODUCT_CYPRESS_MOUSE	0x0001		/* mouse */
#define	USB_PRODUCT_CYPRESS_THERMO	0x0002		/* thermometer */
#define	USB_PRODUCT_CYPRESS_FMRADIO	0x1002		/* FM Radio */

/* D-Link products */
/*product DLINK DSBS25		0x0100	DSB-S25 serial adapter*/
#define	USB_PRODUCT_DLINK_DSB650C	0x4000		/* 10Mbps Ethernet */
#define	USB_PRODUCT_DLINK_DSB650TX	0x4002		/* 10/100 Ethernet */
#define	USB_PRODUCT_DLINK_DSB650TX_PNA	0x4003		/* 1/10/100 Ethernet */
#define	USB_PRODUCT_DLINK_DSB650	0xABC1		/* 10/100 Ethernet */

/* Dallas Semiconductor products */
#define	USB_PRODUCT_DALLAS_J6502	0x4201		/* J-6502 speakers */

/* Diamond products */
#define	USB_PRODUCT_DIAMOND_RIO500USB	0x0001		/* Rio 500 USB */

/* Digi International products */
#define	USB_PRODUCT_DIGI_ACCELEPORT2	0x0002		/* AccelePort 2 */
#define	USB_PRODUCT_DIGI_ACCELEPORT4	0x0004		/* AccelePort 4 */
#define	USB_PRODUCT_DIGI_ACCELEPORT8	0x0008		/* AccelePort 8 */

/* EIZO products */
#define	USB_PRODUCT_EIZO_HUB	0x0000		/* hub */
#define	USB_PRODUCT_EIZO_MONITOR	0x0001		/* monitor */

/* Elsa products */
#define	USB_PRODUCT_ELSA_MODEM1	0x2265		/* ELSA */

/* Entrega products */
#define	USB_PRODUCT_ENTREGA_1S	0x0001		/* 1S serial connector */
#define	USB_PRODUCT_ENTREGA_2S	0x0002		/* 2S serial connector */
#define	USB_PRODUCT_ENTREGA_1S25	0x0003		/* 1S25 serial connector */
#define	USB_PRODUCT_ENTREGA_4S	0x0004		/* 4S serial connector */
#define	USB_PRODUCT_ENTREGA_E45	0x0005		/* E45 Ethernet */
#define	USB_PRODUCT_ENTREGA_CENTRONICS	0x0006		/* Centronics connector */
#define	USB_PRODUCT_ENTREGA_1S9	0x0093		/* 1S9 serial connector */
#define	USB_PRODUCT_ENTREGA_EZUSB	0x8000		/* EZ-USB */
/*product ENTREGA SERIAL	0x8001	DB25 Serial connector*/
#define	USB_PRODUCT_ENTREGA_2U4S	0x8004		/* 2U4S serial connector/usb hub */
/*product ENTREGA SERIAL_DB9	0x8093	DB9 Serial connector*/

/* Epson products */
#define	USB_PRODUCT_EPSON_PRINTER1	0x0001		/* USB Printer */
#define	USB_PRODUCT_EPSON_PRINTER2	0x0002		/* ISD Smart Cable for Mac */
#define	USB_PRODUCT_EPSON_PRINTER3	0x0003		/* ISD Smart Cable */
#define	USB_PRODUCT_EPSON_636	0x0101		/* Perfection 636U / 636Photo scanner */
#define	USB_PRODUCT_EPSON_610	0x0103		/* Perfection 610 scanner */
#define	USB_PRODUCT_EPSON_1200	0x0104		/* Perfection 1200U / 1200Photo scanner */
#define	USB_PRODUCT_EPSON_1600	0x0107		/* Expression 1600 */

/* e-TEK Labs products */
#define	USB_PRODUCT_ETEK_1COM	0x8007		/* Serial port */

/* Extended Systems products */
#define	USB_PRODUCT_EXTENDED_XTNDACCESS	0x0100		/* XTNDAccess IrDA */

/* Gravis products */
#define	USB_PRODUCT_GRAVIS_GAMEPADPRO	0x4001		/* GamePad Pro */

/* Griffin Technology */
#define	USB_PRODUCT_GRIFFIN_IMATE	0x0405		/* iMate, ABD adapter */

/* Freecom products */
#define	USB_PRODUCT_FREECOM_DVD	0xfc01		/* Connector for DVD drive */

/* Future Technology Devices products */
#define	USB_PRODUCT_FTDI_SERIAL	0x8372		/* Serial converter */

/* Fuji photo products */
#define	USB_PRODUCT_FUJIPHOTO_MASS0100	0x0100		/* Mass Storage */

/* Handspring */
#define	USB_PRODUCT_HANDSPRING_VISOR	0x0100		/* Handspring Visor */

/* HP products */
#define	USB_PRODUCT_HP_4100C	0x0101		/* Scanjet 4100C */
#define	USB_PRODUCT_HP_S20	0x0102		/* Photosmart S20 */
#define	USB_PRODUCT_HP_4200C	0x0105		/* ScanJet 4200C */
#define	USB_PRODUCT_HP_6200C	0x0201		/* ScanJet 6200C */
#define	USB_PRODUCT_HP_S20b	0x0202		/* PhotoSmart S20 */
#define	USB_PRODUCT_HP_3300C	0x0205		/* ScanJet 3300C */
#define	USB_PRODUCT_HP_5200C	0x0401		/* Scanjet 5200C */
#define	USB_PRODUCT_HP_6300C	0x0601		/* Scanjet 6300C */
#define	USB_PRODUCT_HP_5300C	0x0701		/* Scanjet 5300C */
#define	USB_PRODUCT_HP_970CSE	0x1004		/* Deskjet 970Cse */
#define	USB_PRODUCT_HP_P1100	0x3102		/* Photosmart P1100 */

/* HP products */
#define	USB_PRODUCT_HP2_C500	0x6002		/* PhotoSmart C500 */

/* IBM Corporation */
#define	USB_PRODUCT_IBM_USBCDROMDRIVE	0x4427		/* USB CD-ROM Drive */

/* Inside Out Networks products */
#define	USB_PRODUCT_INSIDEOUT_EDGEPORT4	0x0001		/* EdgePort/4 serial ports */

/* In-System products */
#define	USB_PRODUCT_INSYSTEM_F5U002	0x0002		/* Parallel printer adapter */
#define	USB_PRODUCT_INSYSTEM_ISD110	0x0200		/* IDE adapter ISD110 */
#define	USB_PRODUCT_INSYSTEM_ISD105	0x0202		/* IDE adapter ISD105 */
#define	USB_PRODUCT_INSYSTEM_USBCABLE	0x081a		/* USB cable */

/* Intel products */
#define	USB_PRODUCT_INTEL_TESTBOARD	0x9890		/* 82930 test board */
#define	USB_PRODUCT_INTEL_EASYPC_CAMERA	0x0110		/* Easy PC Camera */

/* I/O DATA products */
#define	USB_PRODUCT_IODATA_USBETTX	0x0904		/* USB ETTX */
#define	USB_PRODUCT_IODATA_USBETT	0x0901		/* USB ETT */

/* Iomega products */
#define	USB_PRODUCT_IOMEGA_ZIP100	0x0001		/* Zip 100 */
#define	USB_PRODUCT_IOMEGA_ZIP250	0x0030		/* Zip 250 */

/* Kawasaki products */
#define	USB_PRODUCT_KLSI_DUH3E10BT	0x0008		/* USB Ethernet controller engine */

/* Kawatsu products */
#define	USB_PRODUCT_KAWATSU_MH4000P	0x0003		/* MiniHub 4000P */

/* Keisokugiken Corp. products */
#define	USB_PRODUCT_KEISOKUGIKEN_USBDAQ	0x0068		/* HKS-0200 USBDAQ */

/* Kawasaki LSI products (?) */
#define	USB_PRODUCT_KLSI_DUH3E10BT	0x0008		/* 10BT Ethernet */

/* Kensington products */
#define	USB_PRODUCT_KENSINGTON_ORBIT	0x1003		/* Orbit USB/PS2 trackball */
#define	USB_PRODUCT_KENSINGTON_TURBOBALL	0x1005		/* TurboBall */

/* Kingston products */
#define	USB_PRODUCT_KINGSTON_KNU101TX	0x000a		/* KNU101TX Ethernet */

/* Kodak products */
#define	USB_PRODUCT_KODAK_DC220	0x0100		/* Digital Science DC220 */
#define	USB_PRODUCT_KODAK_DC260	0x0110		/* Digital Science DC260 */
#define	USB_PRODUCT_KODAK_DC265	0x0111		/* Digital Science DC265 */
#define	USB_PRODUCT_KODAK_DC290	0x0112		/* Digital Science DC290 */
#define	USB_PRODUCT_KODAK_DC240	0x0120		/* Digital Science DC240 */
#define	USB_PRODUCT_KODAK_DC280	0x0130		/* Digital Science DC280 */

/* Konica Corp. Products */
#define	USB_PRODUCT_KONICA_CAMERA	0x0720		/* Digital Color Camera */

/* KYE products */
#define	USB_PRODUCT_KYE_NICHE	0x0001		/* Niche mouse */
#define	USB_PRODUCT_KYE_NETSCROLL	0x0003		/* Genius NetScroll mouse */
#define	USB_PRODUCT_KYE_FLIGHT2000	0x1004		/* Flight 2000 joystick */
#define	USB_PRODUCT_KYE_VIVIDPRO	0x2001		/* ColorPage Vivid-Pro scanner */

/* LaCie products */
#define	USB_PRODUCT_LACIE_CDRW	0xa602		/* CD R/W */

/* Lexmark products */
#define	USB_PRODUCT_LEXMARK_S2450	0x0009		/* Optra S 2450 */

/* Linksys products */
#define	USB_PRODUCT_LINKSYS_USB10T	0x2202		/* USB10T Ethernet */
#define	USB_PRODUCT_LINKSYS_USB100TX	0x2203		/* USB100TX Ethernet */
#define	USB_PRODUCT_LINKSYS_USB100H1	0x2204		/* USB100H1 Ethernet/HPNA */
#define	USB_PRODUCT_LINKSYS_USB10TA	0x2206		/* USB10TA Ethernet */

/* Logitech products */
#define	USB_PRODUCT_LOGITECH_M2452	0x0203		/* M2452 */
#define	USB_PRODUCT_LOGITECH_M4848	0x0301		/* M4848 */
#define	USB_PRODUCT_LOGITECH_PAGESCAN	0x040f		/* PageScan */
#define	USB_PRODUCT_LOGITECH_QUICKCAMWEB	0x0801		/* QuickCam Web */
#define	USB_PRODUCT_LOGITECH_QUICKCAMPRO	0x0810		/* QuickCam Pro */
#define	USB_PRODUCT_LOGITECH_QUICKCAMEXP	0x0840		/* QuickCam Express */
#define	USB_PRODUCT_LOGITECH_QUICKCAM	0x0850		/* QuickCam */
#define	USB_PRODUCT_LOGITECH_N43	0xc000		/* N43 */
#define	USB_PRODUCT_LOGITECH_N48	0xc001		/* N48 mouse */
#define	USB_PRODUCT_LOGITECH_MBA47	0xc002		/* M-BA47 mouse */
#define	USB_PRODUCT_LOGITECH_WMMOUSE	0xc004		/* WingMan Gaming Mouse */
#define	USB_PRODUCT_LOGITECH_BB13	0xc401		/* USB-PS/2 Trackball */
#define	USB_PRODUCT_LOGITECH_WMPAD	0xc208		/* WingMan GamePad Extreme */
#define	USB_PRODUCT_LOGITECH_WMJOY	0xc281		/* WingMan Force joystick */
#define	USB_PRODUCT_LOGITECH_QUICKCAMPRO2	0xd001		/* QuickCam Pro */

/* Lucent products */
#define	USB_PRODUCT_LUCENT_EVALKIT	0x1001		/* USS-720 evaluation kit */

/* Macally products */
#define	USB_PRODUCT_MACALLY_MOUSE1	0x0101		/* mouse */

/* MCT Corp. */
#define	USB_PRODUCT_MCT_HUB0100	0x0100		/* Hub */
#define	USB_PRODUCT_MCT_USB232	0x0210		/* USB-232 Interface */

/* Melco, Inc products */
#define	USB_PRODUCT_MELCO_LUATX	0x0001		/* LU-ATX Ethernet */

/* Metricom products */
#define	USB_PRODUCT_METRICOM_RICOCHET_GS	0x0001		/* Ricochet GS */

/* Microsoft products */
#define	USB_PRODUCT_MICROSOFT_SIDEPREC	0x0008		/* SideWinder Precision Pro */
#define	USB_PRODUCT_MICROSOFT_INTELLIMOUSE	0x0009		/* IntelliMouse */
#define	USB_PRODUCT_MICROSOFT_NATURALKBD	0x000b		/* Natural */
#define	USB_PRODUCT_MICROSOFT_DDS80	0x0014		/* Digital Sound System 80 */
#define	USB_PRODUCT_MICROSOFT_SIDEWINDER	0x001a		/* Sidewinder Precision Racing Wheel */
#define	USB_PRODUCT_MICROSOFT_INTELLIEYE	0x0025		/* IntelliEye mouse */
#define	USB_PRODUCT_MICROSOFT_INETPRO	0x002b		/* Internet Pro */

/* Microtek products */
#define	USB_PRODUCT_MICROTEK_X6U	0x0099		/* ScanMaker X6 - X6U */
#define	USB_PRODUCT_MICROTEK_336CX	0x0094		/* Phantom 336CX - C3 scanner */
#define	USB_PRODUCT_MICROTEK_336CX2	0x00a0		/* Phantom 336CX - C3 scanner */
#define	USB_PRODUCT_MICROTEK_C6	0x009a		/* Phantom C6 scanner */
#define	USB_PRODUCT_MICROTEK_V6USL	0x00a3		/* ScanMaker V6USL */
#define	USB_PRODUCT_MICROTEK_V6USL2	0x80a3		/* ScanMaker V6USL */
#define	USB_PRODUCT_MICROTEK_V6UL	0x80ac		/* ScanMaker V6UL */

/* Midiman products */
#define	USB_PRODUCT_MIDIMAN_MIDISPORT2X2	0x1001		/* Midisport 2x2 */

/* Motorola products */
#define	USB_PRODUCT_MOTOROLA_MC141555	0x1555		/* MC141555 hub controller */

/* MultiTech products */
#define	USB_PRODUCT_MULTITECH_ATLAS	0xf101		/* MT5634ZBA */

/* Mustek products */
#define	USB_PRODUCT_MUSTEK_1200CU	0x0001		/* 1200 CU scanner */
#define	USB_PRODUCT_MUSTEK_600CU	0x0002		/* 600 CU scanner */
#define	USB_PRODUCT_MUSTEK_1200USB	0x0003		/* 1200 scanner */
#define	USB_PRODUCT_MUSTEK_1200UB	0x0006		/* 1200 UB scanner */
#define	USB_PRODUCT_MUSTEK_MDC800	0xa800		/* MDC-800 digital camera */

/* National Semiconductor */
#define	USB_PRODUCT_NATIONAL_BEARPAW	0x1000		/* BearPaw 1200 */

/* NEC products */
#define	USB_PRODUCT_NEC_HUB	0x55aa		/* hub */
#define	USB_PRODUCT_NEC_HUB_B	0x55ab		/* hub */

/* NetChip Technology Products */
#define	USB_PRODUCT_NETCHIP_TURBOCONNECT	0x1080		/* Turbo-Connect */

/* Netgear products */
#define	USB_PRODUCT_NETGEAR_EA101	0x1001		/* Ethernet */

/* OmniVision Technologies products */
#define	USB_PRODUCT_OMNIVISION_OV511	0x0511		/* OV511 Camera */
#define	USB_PRODUCT_OMNIVISION_OV511PLUS	0xa511		/* OV511+ Camera */

/* Palm Computing */
#define	USB_PRODUCT_PALM_SERIAL	0x0080		/* USB Serial Adaptor */

/* Peracom products */
#define	USB_PRODUCT_PERACOM_SERIAL1	0x0001		/* Serial Converter */
#define	USB_PRODUCT_PERACOM_ENET	0x0002		/* Ethernet */
#define	USB_PRODUCT_PERACOM_ENET3	0x0003		/* At-Home Ethernet */
#define	USB_PRODUCT_PERACOM_ENET2	0x0005		/* Ethernet */

/* Philips products */
#define	USB_PRODUCT_PHILIPS_DSS350	0x0101		/* DSS 350 Digital Speaker System */
#define	USB_PRODUCT_PHILIPS_DSS	0x0104		/* DSS XXX Digital Speaker System */
#define	USB_PRODUCT_PHILIPS_HUB	0x0201		/* hub */
#define	USB_PRODUCT_PHILIPS_PCVC680K	0x0308		/* PCVC680K Vesta Pro PC Camera */
#define	USB_PRODUCT_PHILIPS_DSS150	0x0471		/* DSS 150 Digital Speaker System */

/* P.I. Engineering products */
#define	USB_PRODUCT_PIENGINEERING_PS2USB	0x020b		/* PS2 to Mac Adapter */

/* PLX products */
#define	USB_PRODUCT_PLX_TESTBOARD	0x9060		/* test board */

/* Primax products */
#define	USB_PRODUCT_PRIMAX_G2X300	0x0300		/* G2-200 scanner */
#define	USB_PRODUCT_PRIMAX_G2E300	0x0301		/* G2E-300 scanner */
#define	USB_PRODUCT_PRIMAX_G2300	0x0302		/* G2-300 scanner */
#define	USB_PRODUCT_PRIMAX_G2E3002	0x0303		/* G2E-300 scanner */
#define	USB_PRODUCT_PRIMAX_9600	0x0340		/* Colorado 9600 scanner */
#define	USB_PRODUCT_PRIMAX_600U	0x0341		/* Colorado 600u scanner */
#define	USB_PRODUCT_PRIMAX_19200	0x0360		/* Colorado 19200 scanner */
#define	USB_PRODUCT_PRIMAX_1200U	0x0361		/* Colorado 1200u scanner */
#define	USB_PRODUCT_PRIMAX_G600	0x0380		/* G2-600 scanner */
#define	USB_PRODUCT_PRIMAX_636I	0x0381		/* ReadyScan 636i */
#define	USB_PRODUCT_PRIMAX_G2600	0x0382		/* G2-600 scanner */
#define	USB_PRODUCT_PRIMAX_G2E600	0x0383		/* G2E-600 scanner */
#define	USB_PRODUCT_PRIMAX_COMFORT	0x4d01		/* Comfort */
#define	USB_PRODUCT_PRIMAX_MOUSEINABOX	0x4d02		/* Mouse-in-a-Box */
#define	USB_PRODUCT_PRIMAX_PCGAUMS1	0x4d04		/* Sony PCGA-UMS1 */

/* Prolific products */
#define	USB_PRODUCT_PROLIFIC_PL2301	0x0000		/* PL2301 Host-Host interface */
#define	USB_PRODUCT_PROLIFIC_PL2302	0x0001		/* PL2302 Host-Host interface */
#define	USB_PRODUCT_PROLIFIC_ATAPI4	0x2307		/* ATAPI-4 Bridge Controller */

/* Qtronix products */
#define	USB_PRODUCT_QTRONIX_980N	0x2011		/* Scorpion-980N */

/* Quickshot products */
#define	USB_PRODUCT_QUICKSHOT_STRIKEPAD	0x6238		/* USB StrikePad */

/* Rainbow Technologies products */
#define	USB_PRODUCT_RAINBOW_IKEY2000	0x1200		/* i-Key 2000 */

/* Rockfire products */
#define	USB_PRODUCT_ROCKFIRE_GAMEPAD	0x2033		/* gamepad 203USB */

/* SanDisk products */
#define	USB_PRODUCT_SANDISK_IMAGEMATE	0x0001		/* USB ImageMate */

/* Shuttle Technology products */
#define	USB_PRODUCT_SHUTTLE_EUSB	0x0001		/* E-USB Bridge */

/* SIIG products */
#define	USB_PRODUCT_SIIG_DIGIFILMREADER	0x0004		/* DigiFilm-Combo Reader */

/* Sirius Technologies products */
#define	USB_PRODUCT_SIRIUS_ROADSTER	0x0001		/* NetComm Roadster II 56 USB */

/* SmartBridges products */
#define	USB_PRODUCT_SMARTBRIDGES_SMARTLINK	0x0001		/* SmartLink Ethernet */

/* SMC products */
#define	USB_PRODUCT_SMC_2102USB	0x0100		/* 10Mbps Ethernet */
#define	USB_PRODUCT_SMC_2202USB	0x0200		/* 10/100 Ethernet */

/* SOLID YEAR products */
#define	USB_PRODUCT_SOLIDYEAR_KEYBOARD	0x2101		/* Keyboard */

/* SONY products */
#define	USB_PRODUCT_SONY_DSC	0x0010		/* Sony DSC Cameras */
#define	USB_PRODUCT_SONY_MSC	0x0032		/* Sony MSC Memorystick Slot */

/* STMicroelectronics products */
#define	USB_PRODUCT_STMICRO_COMMUNICATOR	0x7554		/* Communicator */

/* Sun Microsystems products */
#define	USB_PRODUCT_SUN_KEYBOARD	0x0005		/* Type 6 USB */
/* XXX The above is a North American PC style keyboard possibly */

/* Supra products */
#define	USB_PRODUCT_DIAMOND2_SUPRAEXPRESS56K	0x07da		/* Supra Express 56K */
#define	USB_PRODUCT_DIAMOND2_SUPRA2890	0x0b4a		/* SupraMax 2890 56K */
#define	USB_PRODUCT_DIAMOND2_RIO600USB	0x5001		/* Rio 600 */

/* TEAC products */
#define	USB_PRODUCT_TEAC_FD05PUB	0x0000		/* FD-05PUB */

/* Telex Communications products */
#define	USB_PRODUCT_TELEX_MIC1	0x0001		/* Microphone */

/* Texas Intel products */
#define	USB_PRODUCT_TI_UTUSB41	0x1446		/* UT-USB41 */

/* Thrustmaster products */
#define	USB_PRODUCT_THRUST_FUSION_PAD	0xa0a3		/* Fusion Digital Gamepad */

/* Trek Technology products */
#define	USB_PRODUCT_TREK_THUMBDRIVE	0x1111		/* ThumbDrive */

/* UMAX products */
#define	USB_PRODUCT_UMAX_ASTRA1236U	0x0002		/* Astra 1236U Scanner */
#define	USB_PRODUCT_UMAX_ASTRA1220U	0x0010		/* Astra 1220U Scanner */
#define	USB_PRODUCT_UMAX_ASTRA2000U	0x0030		/* Astra 2000U Scanner */
#define	USB_PRODUCT_UMAX_ASTRA2100U	0x0130		/* Astra 2100U Scanner */
#define	USB_PRODUCT_UMAX_ASTRA2200U	0x0230		/* Astra 2200U Scanner */

/* Universal Access products */
#define	USB_PRODUCT_UNIACCESS_PANACHE	0x0101		/* Panache Surf ISDN Adapter */

/* Vision products */
#define	USB_PRODUCT_VISION_VC6452V002	0x0002		/* CPiA Camera */

/* Visioneer products */
#define	USB_PRODUCT_VISIONEER_7600	0x0211		/* OneTouch 7600 */
#define	USB_PRODUCT_VISIONEER_5300	0x0221		/* OneTouch 5300 */
#define	USB_PRODUCT_VISIONEER_6100	0x0231		/* OneTouch 6100 */
#define	USB_PRODUCT_VISIONEER_6200	0x0311		/* OneTouch 6200 */
#define	USB_PRODUCT_VISIONEER_8100	0x0321		/* OneTouch 8100 */
#define	USB_PRODUCT_VISIONEER_8600	0x0331		/* OneTouch 8600 */

/* Wacom products */
#define	USB_PRODUCT_WACOM_CT0405U	0x0000		/* CT-0405-U Tablet */
#define	USB_PRODUCT_WACOM_GRAPHIRE	0x0010		/* Graphire */
#define	USB_PRODUCT_WACOM_INTUOSA5	0x0021		/* Intuos A5 */

/* Y-E Data products */
#define	USB_PRODUCT_YEDATA_FLASHBUSTERU	0x0000		/* Flashbuster-U */

/* Yano products */
#define	USB_PRODUCT_YANO_U640MO	0x0101		/* U640MO-03 */

/* Zoom Telephonics products */
#define	USB_PRODUCT_ZOOM_2986L	0x9700		/* 2986L */

/* ZyXEL Communication Co. products */
#define	USB_PRODUCT_ZYXEL_980N	0x2011		/* Scorpion-980N */
