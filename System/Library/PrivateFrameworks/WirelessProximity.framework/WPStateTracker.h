/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessProximity/WPClient.h>

@protocol WPStateTrackerProtocol;
@interface WPStateTracker : WPClient {

	id<WPStateTrackerProtocol> _delegate;

}

@property (assign,nonatomic,__weak) id<WPStateTrackerProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)stateDidChange:(long long)arg1 ;
-(id)clientAsString;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setDelegate:(id<WPStateTrackerProtocol>)arg1 ;
-(id<WPStateTrackerProtocol>)delegate;
-(void)invalidate;
-(id)initWithDelegate:(id)arg1 ;
@end
