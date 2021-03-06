/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/_GEONetworkDefaultsServerProxy.h>
#import <libobjc.A.dylib/GEOPListStateCapturing.h>

@protocol _GEONetworkDefaultsServerProxyDelegate, OS_dispatch_queue;
@class NSObject, NSMutableArray, NSURLSession, NSString;

@interface _GEONetworkDefaultsLocalProxy : NSObject <_GEONetworkDefaultsServerProxy, GEOPListStateCapturing> {

	id<_GEONetworkDefaultsServerProxyDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _isolation;
	NSMutableArray* _updateCompletionHandlers;
	NSURLSession* _session;
	unsigned long long _stateCaptureHandle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<_GEONetworkDefaultsServerProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)captureStatePlistWithHints:(os_state_hints_s*)arg1 ;
-(void)updateNetworkDefaults:(/*^block*/id)arg1 ;
-(id)_urlRequestForNetworkDefaults;
-(void)_processNetworkDefaultsResponse:(id)arg1 data:(id)arg2 error:(id)arg3 request:(id)arg4 ;
-(void)_updateWithNewConfig:(id)arg1 error:(id)arg2 request:(id)arg3 response:(id)arg4 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<_GEONetworkDefaultsServerProxyDelegate>)arg1 ;
-(id<_GEONetworkDefaultsServerProxyDelegate>)delegate;
@end

