/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FMNSXPCConnecting.h>

@protocol OS_dispatch_queue;
@class FMNSXPCConnection, NSObject, NSString;

@interface FMNSXPCCachedConnection : NSObject <FMNSXPCConnecting> {

	FMNSXPCConnection* _connection;
	/*^block*/id _didInvalidate;
	/*^block*/id _failureBlock;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) FMNSXPCConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) id failureBlock;                                         //@synthesize failureBlock=_failureBlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,copy) id didInvalidate;                                        //@synthesize didInvalidate=_didInvalidate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithFMNSXPCConnection:(id)arg1 ;
-(id)didInvalidate;
-(void)setDidInvalidate:(id)arg1 ;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
-(id)failureBlock;
-(void)setFailureBlock:(id)arg1 ;
-(void)invalidate;
-(void)_invalidate;
-(id)remoteObjectProxy;
-(FMNSXPCConnection *)connection;
-(void)setConnection:(FMNSXPCConnection *)arg1 ;
@end

