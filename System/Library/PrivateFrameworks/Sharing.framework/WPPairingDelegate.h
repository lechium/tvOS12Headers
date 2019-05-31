/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WPPairingDelegate <NSObject>
@optional
-(void)pairingStartedScanning:(id)arg1;
-(void)pairingStoppedScanning:(id)arg1;
-(void)pairing:(id)arg1 failedToStartScanningWithError:(id)arg2;
-(void)pairing:(id)arg1 foundDevice:(id)arg2 payload:(id)arg3 rssi:(id)arg4 peerInfo:(id)arg5;
-(BOOL)pairing:(id)arg1 foundDevice:(id)arg2 payload:(id)arg3 rssi:(id)arg4;

@required
-(void)pairingDidUpdateState:(id)arg1;

@end

