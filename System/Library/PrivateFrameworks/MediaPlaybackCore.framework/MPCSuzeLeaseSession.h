/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICSuzeLeaseSession;

@interface MPCSuzeLeaseSession : NSObject {

	ICSuzeLeaseSession* _icSuzeLeaseSession;

}

@property (nonatomic,readonly) ICSuzeLeaseSession * icSuzeLeaseSession;              //@synthesize icSuzeLeaseSession=_icSuzeLeaseSession - In the implementation block
-(void)endAutomaticallyRefreshingLease;
-(void)beginAutomaticallyRefreshingLease;
-(ICSuzeLeaseSession *)icSuzeLeaseSession;
-(id)initWithICSuzeLeaseSession:(id)arg1 ;
@end

