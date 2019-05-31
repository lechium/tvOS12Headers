/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CMPickupDelegate;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMPickupManager : NSObject {

	NSObject*<OS_dispatch_queue> fPrivateQueue;
	Dispatcher* fDispatcher;
	id<CMPickupDelegate> _delegate;

}

@property (assign,nonatomic) id<CMPickupDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)isPickupAvailable;
-(void)onPickupStateUpdated:(const Sample*)arg1 ;
-(void)startPickupUpdates;
-(void)stopPickupUpdates;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<CMPickupDelegate>)arg1 ;
-(id<CMPickupDelegate>)delegate;
@end
