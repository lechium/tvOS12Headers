/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCListener, RMToolServerDelegate;

@interface RMToolServer : NSObject {

	NSXPCListener* _listener;
	RMToolServerDelegate* _delegate;

}

@property (nonatomic,retain) NSXPCListener * listener;                     //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) RMToolServerDelegate * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(RMToolServerDelegate *)arg1 ;
-(RMToolServerDelegate *)delegate;
-(id)initWithTarget:(id)arg1 ;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
@end
