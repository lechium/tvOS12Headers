/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <NetworkExtension/NetworkExtension-Structs.h>
@class NEFlowMetaData, NSObject, NSData;

@interface NEAppProxyFlow : NSObject {

	NEFlowMetaData* _metaData;
	NEFlowRef _flow;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign) NEFlowRef flow;                                  //@synthesize flow=_flow - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (retain) NSData * applicationData; 
@property (readonly) NEFlowMetaData * metaData;                     //@synthesize metaData=_metaData - In the implementation block
+(id)flowErrorForVPNFlowError:(long long)arg1 ;
+(CFErrorRef)copyVPNFlowErrorFromFlowError:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NEFlowRef)flow;
-(void)clearEventHandlers;
-(id)initWithNEFlow:(NEFlowRef)arg1 queue:(id)arg2 ;
-(void)openWithLocalEndpoint:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)closeReadWithError:(id)arg1 ;
-(void)closeWriteWithError:(id)arg1 ;
-(void)setFlow:(NEFlowRef)arg1 ;
-(NEFlowMetaData *)metaData;
-(NSData *)applicationData;
-(void)setApplicationData:(NSData *)arg1 ;
-(void)dealloc;
-(unsigned long long)hash;
-(NSObject*<OS_dispatch_queue>)queue;
@end

