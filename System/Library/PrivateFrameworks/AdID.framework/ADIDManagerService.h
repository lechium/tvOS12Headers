/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AdID.framework/AdID
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/ADSingleton.h>
#import <libobjc.A.dylib/ADIDManager_XPC.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCListener, NSMutableArray, NSString;

@interface ADIDManagerService : ADSingleton <ADIDManager_XPC, NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _forceReconcileQueue;
	NSXPCListener* _listener;
	NSMutableArray* _reconcileArray;

}

@property (retain) NSXPCListener * listener;                               //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSMutableArray * reconcileArray;              //@synthesize reconcileArray=_reconcileArray - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)forceReconcile:(/*^block*/id)arg1 ;
-(unsigned long long)delayForNewForceReconcileRequest;
-(NSMutableArray *)reconcileArray;
-(void)setReconcileArray:(NSMutableArray *)arg1 ;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
@end

