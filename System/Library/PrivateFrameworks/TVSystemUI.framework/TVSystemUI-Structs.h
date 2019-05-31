/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:56 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct __IOSurface* IOSurfaceRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned didEncounterError : 1;
	unsigned didReceiveItemsFromViewService : 1;
	unsigned didChangeState : 1;
} SCD_Struct_TV3;

typedef struct {
	unsigned viewServiceWillAppear : 1;
	unsigned viewServiceDidAppear : 1;
	unsigned viewServiceWillDisappear : 1;
	unsigned viewServiceDidDisappear : 1;
	unsigned handleMessageFromHost : 1;
	unsigned viewServiceWillDismissWithHostRequestItems : 1;
	unsigned animationControllerForOperation : 1;
} SCD_Struct_TV4;

typedef struct CGImage* CGImageRef;

typedef struct {
	unsigned didAddHostViewController : 1;
	unsigned didReceiveItemsFromViewService : 1;
	unsigned didChangeAnimationState : 1;
	unsigned didEncounterError : 1;
} SCD_Struct_TV6;

