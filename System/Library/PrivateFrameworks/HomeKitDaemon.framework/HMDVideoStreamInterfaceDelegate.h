/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDVideoStreamInterfaceDelegate <NSObject>
@required
-(void)videoStream:(id)arg1 didStartRelay:(id)arg2;
-(void)videoStream:(id)arg1 didStart:(id)arg2;
-(void)videoStream:(id)arg1 didStop:(id)arg2;
-(void)videoStreamDidNetworkImprove:(id)arg1;
-(void)videoStreamDidNetworkDeteriorate:(id)arg1;
-(void)videoStreamDidUpdateConfiguration:(id)arg1;

@end
