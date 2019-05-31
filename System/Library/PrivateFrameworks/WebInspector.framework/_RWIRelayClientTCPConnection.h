/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/_RWIRelayClientConnection.h>
#import <libobjc.A.dylib/_RWITCPConnectionDelegate.h>

@class _RWITCPConnection, NSString;

@interface _RWIRelayClientTCPConnection : _RWIRelayClientConnection <_RWITCPConnectionDelegate> {

	_RWITCPConnection* _connection;

}

@property (nonatomic,retain) _RWITCPConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)connectionFromTCPConnection:(id)arg1 delegate:(id)arg2 ;
+(id)connectionFromLockdownCheckinWithInfo:(void*)arg1 delegate:(id)arg2 ;
-(void)closeInternal;
-(id)initWithTCPConnection:(id)arg1 delegate:(id)arg2 ;
-(void)tcpConnection:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)tcpConnectionDidClose:(id)arg1 ;
-(void)sendMessage:(id)arg1 ;
-(_RWITCPConnection *)connection;
-(void)setConnection:(_RWITCPConnection *)arg1 ;
@end
