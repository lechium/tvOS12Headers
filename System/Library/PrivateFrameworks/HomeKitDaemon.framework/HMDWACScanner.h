/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:10 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDWACScanner.h>

@protocol HMDWACScanner
@required
-(void)setDelegate:(id)arg1 queue:(id)arg2;
-(void)backoff;
-(void)stop;
-(void)start;
-(void)resume;

@end


@protocol OS_dispatch_queue, HMDWACScannerDelegate;
@class NSObject, CUWiFiScanner, NSString;

@interface HMDWACScanner : NSObject <HMFLogging, HMDWACScanner> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	CUWiFiScanner* _wifiScanner;
	id<HMDWACScannerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (assign,nonatomic,__weak) id<HMDWACScannerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)backoff;
-(id)init;
-(void)setDelegate:(id<HMDWACScannerDelegate>)arg1 ;
-(id<HMDWACScannerDelegate>)delegate;
-(void)stop;
-(void)start;
-(void)resume;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

