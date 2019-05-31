/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SSVPlaybackLeaseDelegate <NSObject>
@optional
-(void)playbackLease:(id)arg1 automaticRefreshDidFinishWithResponse:(id)arg2 error:(id)arg3;
-(void)playbackLeaseDidEnd:(id)arg1;
-(void)playbackLease:(id)arg1 didEndWithReasonType:(unsigned long long)arg2;
-(void)playbackLease:(id)arg1 automaticRefreshDidFailWithError:(id)arg2;
-(void)playbackLeaseAutomaticRefreshDidFinish:(id)arg1;

@end
