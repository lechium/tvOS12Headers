/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:12 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MCNearbyServiceBrowserDelegate <NSObject>
@optional
-(void)browser:(id)arg1 didNotStartBrowsingForPeers:(id)arg2;

@required
-(void)browser:(id)arg1 foundPeer:(id)arg2 withDiscoveryInfo:(id)arg3;
-(void)browser:(id)arg1 lostPeer:(id)arg2;

@end

