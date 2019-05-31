/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:10 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessProximity/WPClient.h>

@protocol WPHeySiriProtocol;
@interface WPHeySiri : WPClient {

	BOOL _isScanning;
	id<WPHeySiriProtocol> _delegate;

}

@property (assign,nonatomic,__weak) id<WPHeySiriProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL isScanning;                                              //@synthesize isScanning=_isScanning - In the implementation block
-(void)setIsScanning:(BOOL)arg1 ;
-(void)stateDidChange:(long long)arg1 ;
-(id)clientAsString;
-(void)deviceDiscovered:(id)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)advertisingStartedOfType:(unsigned char)arg1 ;
-(void)advertisingStoppedOfType:(unsigned char)arg1 ;
-(void)advertisingPendingOfType:(unsigned char)arg1 ;
-(void)startAdvertisingWithData:(id)arg1 ;
-(void)stopScanningAndAdvertising;
-(void)startScanning;
-(void)stopScanning;
-(void)startScanningAndAdvertisingWithData:(id)arg1 ;
-(BOOL)isScanning;
-(void)stopAdvertising;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setDelegate:(id<WPHeySiriProtocol>)arg1 ;
-(id<WPHeySiriProtocol>)delegate;
-(void)invalidate;
@end

