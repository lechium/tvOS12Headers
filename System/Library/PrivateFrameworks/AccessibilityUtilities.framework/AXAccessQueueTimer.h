/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:59 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXAccessQueueTimer <NSObject>
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isPending,nonatomic,readonly) BOOL pending; 
@required
-(void)afterDelay:(double)arg1 processBlock:(/*^block*/id)arg2;
-(BOOL)isPending;
-(BOOL)isActive;
-(void)cancel;

@end

