/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKRequest.h>

@class WLKContinueWatchingResponse;

@interface WLKContinueWatchingRequest : WLKRequest {

	BOOL _allowAuthentication;
	WLKContinueWatchingResponse* _response;

}

@property (assign,nonatomic) BOOL allowAuthentication;                              //@synthesize allowAuthentication=_allowAuthentication - In the implementation block
@property (nonatomic,readonly) WLKContinueWatchingResponse * response;              //@synthesize response=_response - In the implementation block
-(BOOL)allowAuthentication;
-(void)makeRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)setAllowAuthentication:(BOOL)arg1 ;
-(id)init;
-(WLKContinueWatchingResponse *)response;
@end

