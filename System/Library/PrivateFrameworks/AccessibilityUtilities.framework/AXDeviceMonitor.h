/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:58 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXDeviceMonitorDelegate;
#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSRunLoop;

@interface AXDeviceMonitor : NSObject {

	NSRunLoop* _targetRunLoop;
	IOHIDManagerRef _hidManager;
	unsigned long long _state;
	id<AXDeviceMonitorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AXDeviceMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithMatchingDictionary:(id)arg1 callbackRunLoop:(id)arg2 ;
-(id)copyDevices;
-(void)informDelegate;
-(void)dealloc;
-(void)setDelegate:(id<AXDeviceMonitorDelegate>)arg1 ;
-(id<AXDeviceMonitorDelegate>)delegate;
-(void)invalidate;
-(void)begin;
@end

