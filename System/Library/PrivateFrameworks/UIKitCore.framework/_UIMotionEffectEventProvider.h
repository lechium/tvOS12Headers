/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:08:27 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIMotionEffectEventConsumer;
@interface _UIMotionEffectEventProvider : NSObject {

	id<_UIMotionEffectEventConsumer> _consumer;

}

@property (assign) id<_UIMotionEffectEventConsumer> consumer;              //@synthesize consumer=_consumer - In the implementation block
-(void)setSlowUpdatesEnabled:(BOOL)arg1 ;
-(void)startGeneratingEvents;
-(void)stopGeneratingEvents;
-(id)currentEvent;
-(BOOL)shouldLogEvents;
-(double)fastUpdateIntervalForLogs;
-(double)slowUpdateIntervalForLogs;
-(id<_UIMotionEffectEventConsumer>)consumer;
-(void)setConsumer:(id<_UIMotionEffectEventConsumer>)arg1 ;
-(BOOL)wantsSynchronizedUpdates;
@end
