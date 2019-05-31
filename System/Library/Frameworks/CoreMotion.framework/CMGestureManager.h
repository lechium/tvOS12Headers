/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CMGestureManager : NSObject {

	id _internal;

}

@property (copy) id gestureHandler; 
+(BOOL)isGestureServiceEnabled;
+(BOOL)isGestureServiceAvailable;
+(void)setGestureServiceEnabled:(BOOL)arg1 ;
-(void)setGestureHandler:(id)arg1 ;
-(id)gestureHandler;
-(id)initWithPriority:(int)arg1 ;
-(id)init;
-(void)dealloc;
@end

