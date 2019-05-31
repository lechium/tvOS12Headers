/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSVPlaybackLeaseDelegate.h>

@class SSVPlaybackLease, NSString;

@interface _TVCKFusePlaybackLease : NSObject <SSVPlaybackLeaseDelegate> {

	int _assetCount;
	SSVPlaybackLease* _lease;

}

@property (nonatomic,retain) SSVPlaybackLease * lease;              //@synthesize lease=_lease - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_endLease;
-(void)getAssetWithRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)playbackLease:(id)arg1 automaticRefreshDidFinishWithResponse:(id)arg2 error:(id)arg3 ;
-(void)playbackLeaseDidEnd:(id)arg1 ;
-(SSVPlaybackLease *)lease;
-(void)cleanupAsset;
-(void)setLease:(SSVPlaybackLease *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)_init;
@end

