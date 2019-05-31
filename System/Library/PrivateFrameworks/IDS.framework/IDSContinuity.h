/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _IDSContinuity;

@interface IDSContinuity : NSObject {

	_IDSContinuity* _internal;

}

@property (readonly) long long state; 
-(void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 withOptions:(id)arg5 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 withOptions:(id)arg4 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 withOptions:(id)arg5 boostedScan:(BOOL)arg6 duplicates:(BOOL)arg7 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 withOptions:(id)arg4 boostedScan:(BOOL)arg5 duplicates:(BOOL)arg6 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 peers:(id)arg3 withOptions:(id)arg4 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 withOptions:(id)arg5 boostedScan:(BOOL)arg6 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 withOptions:(id)arg4 boostedScan:(BOOL)arg5 ;
-(void)connectToPeer:(id)arg1 ;
-(void)startTrackingPeer:(id)arg1 ;
-(void)stopTrackingPeer:(id)arg1 ;
-(void)stopAdvertisingOfType:(long long)arg1 ;
-(void)disconnectFromPeer:(id)arg1 ;
-(void)stopScanningForType:(long long)arg1 ;
-(void)stopTrackingPeer:(id)arg1 forType:(long long)arg2 ;
-(void)startTrackingPeer:(id)arg1 forType:(long long)arg2 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(long long)state;
@end

