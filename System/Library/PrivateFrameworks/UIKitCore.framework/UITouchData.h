/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UITouch;

@interface UITouchData : NSObject {

	CGPoint startTouchDownLocation;
	unsigned long long lastTapCount;
	double lastTouchUpTimestamp;
	double lastTouchDownTimestamp;
	BOOL touchIsValidTap;
	UITouch* lastTouch;

}
@end

