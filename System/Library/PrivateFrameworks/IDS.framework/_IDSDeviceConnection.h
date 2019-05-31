/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSDaemonListenerProtocol.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSInputStream, NSOutputStream, NSNumber, NSMutableDictionary, NSDictionary;

@interface _IDSDeviceConnection : NSObject <IDSDaemonListenerProtocol> {

	NSString* _nsuuid;
	BOOL _isDefaultPairedDevice;
	NSString* _service;
	NSString* _streamName;
	NSString* _serviceToken;
	NSString* _connectionUUID;
	int _socket;
	unsigned long long _mtu;
	/*^block*/id _openSocketCompletionHandler;
	NSObject*<OS_dispatch_queue> _openSocketCompletionHandlerQueue;
	NSString* _openSocketCompletionHandlerID;
	NSInputStream* _inputStreamForSocket;
	NSOutputStream* _outputStreamForSocket;
	BOOL _hasTimedOut;
	NSNumber* _clientTimeout;
	NSMutableDictionary* _awdMetrics;

}

@property (nonatomic,readonly) int socket; 
@property (nonatomic,readonly) unsigned long long mtu; 
@property (nonatomic,readonly) NSDictionary * metrics; 
@property (nonatomic,readonly) NSInputStream * inputStream; 
@property (nonatomic,readonly) NSOutputStream * outputStream; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_close;
-(void)_connect;
-(void)xpcObject:(id)arg1 objectContext:(id)arg2 ;
-(id)deviceConnectionKey;
-(void)_cleanupCompletionBlock;
-(id)initWithDevice:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)setStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2 ;
-(BOOL)updateConnectionWithOptions:(id)arg1 error:(id*)arg2 ;
-(NSOutputStream *)outputStream;
-(void)_daemonDied:(id)arg1 ;
-(unsigned long long)mtu;
-(int)socket;
-(NSInputStream *)inputStream;
-(void)dealloc;
-(NSDictionary *)metrics;
-(void)close;
@end
