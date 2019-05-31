/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:21 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CHSynchronizedLoggable.h>

@class NSXPCConnection, NSXPCInterface, NSMutableArray;

@interface TransactionManager : CHSynchronizedLoggable {

	NSXPCConnection* _connection;
	NSXPCInterface* _interface;
	id _syncHelperReadyNotificationRef;
	NSMutableArray* _queuedTransactions;

}
+(id)instance;
-(void)appendTransactions:(id)arg1 ;
-(void)createXpcConnection;
-(void)createXpcConnection_sync;
-(void)setupConnectionHandlers_sync;
-(void)appendTransactions_sync:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
