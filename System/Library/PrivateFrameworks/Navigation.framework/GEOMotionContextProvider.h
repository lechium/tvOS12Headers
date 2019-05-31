/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:31 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOMotionContextProvider <NSObject>
@property (assign,nonatomic,__weak) id<GEOMotionContextProviderDelegate> motionDelegate; 
@required
-(void)stopMotionUpdates;
-(void)setMotionDelegate:(id)arg1;
-(void)startMotionUpdates;
-(id<GEOMotionContextProviderDelegate>)motionDelegate;

@end

