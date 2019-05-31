/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>

@protocol _HMFCFHTTPServerConnectionDelegate, OS_dispatch_queue;
@class HMFNetAddress, NSObject, NSMutableArray, NSString;

@interface _HMFCFHTTPServerConnection : HMFObject <HMFLogging> {

	id<_HMFCFHTTPServerConnectionDelegate> _delegate;
	HMFNetAddress* _address;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSMutableArray* _pendingRequests;
	NSMutableArray* _pendingRespones;
	CFHTTPServerConnectionRef _internal;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingRequests;                      //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingRespones;                      //@synthesize pendingRespones=_pendingRespones - In the implementation block
@property (nonatomic,readonly) CFHTTPServerConnectionRef internal;                    //@synthesize internal=_internal - In the implementation block
@property (__weak) id<_HMFCFHTTPServerConnectionDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) HMFNetAddress * address;                               //@synthesize address=_address - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMFNetAddress *)address;
-(void)_handleCompletedReceivedRequest:(id)arg1 error:(id)arg2 ;
-(void)handleRequest:(id)arg1 bodyReadStream:(CFReadStreamRef)arg2 eventType:(unsigned long long)arg3 ;
-(void)_stopReadBody:(id)arg1 ;
-(void)_sendStatusCode:(long long)arg1 forRequest:(id)arg2 ;
-(void)_sendStatusCode:(long long)arg1 forRequest:(id)arg2 bodyData:(id)arg3 ;
-(NSMutableArray *)pendingRespones;
-(id)initWithConnectionRef:(CFHTTPServerConnectionRef)arg1 ;
-(void)_handleRecievedRequestRef:(CFHTTPServerRequestRef)arg1 ;
-(void)_handleCompletedResponse:(CFHTTPServerResponseRef)arg1 error:(id)arg2 ;
-(CFHTTPServerConnectionRef)internal;
-(id)logIdentifier;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSMutableArray *)pendingRequests;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setDelegate:(id<_HMFCFHTTPServerConnectionDelegate>)arg1 ;
-(id<_HMFCFHTTPServerConnectionDelegate>)delegate;
-(void)invalidate;
-(BOOL)open;
-(void)close;
-(void)sendResponse:(id)arg1 ;
-(BOOL)isValid;
@end

