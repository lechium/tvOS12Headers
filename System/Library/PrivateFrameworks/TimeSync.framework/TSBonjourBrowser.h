/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:33 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, TSBonjourBrowserDelegate;
#import <TimeSync/TimeSync-Structs.h>
@class NSObject, NSArray;

@interface TSBonjourBrowser : NSObject {

	DNSServiceRef_tRef _sdRef;
	NSObject*<OS_dispatch_queue> _queue;
	id<TSBonjourBrowserDelegate> _delegate;
	NSArray* _nodes;

}

@property (assign,nonatomic) id<TSBonjourBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * nodes;                                      //@synthesize nodes=_nodes - In the implementation block
-(void)setNodes:(NSArray *)arg1 ;
-(NSArray *)nodes;
-(BOOL)stopBrowsing;
-(void)addedServiceWithName:(const char*)arg1 regType:(const char*)arg2 domain:(const char*)arg3 onInterface:(unsigned)arg4 withFlags:(unsigned)arg5 ;
-(void)removedServiceWithName:(const char*)arg1 regType:(const char*)arg2 domain:(const char*)arg3 onInterface:(unsigned)arg4 withFlags:(unsigned)arg5 ;
-(BOOL)startBrowsingWithError:(id*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<TSBonjourBrowserDelegate>)arg1 ;
-(id<TSBonjourBrowserDelegate>)delegate;
@end

