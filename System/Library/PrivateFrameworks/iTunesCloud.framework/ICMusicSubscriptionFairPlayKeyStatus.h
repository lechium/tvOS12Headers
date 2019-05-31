/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ICMusicSubscriptionFairPlayKeyStatus : NSObject <NSCopying> {

	BOOL _hasOnlinePlaybackKeys;
	BOOL _hasOfflinePlaybackKeys;
	unsigned long long _accountUniqueIdentifier;

}

@property (assign,nonatomic) unsigned long long accountUniqueIdentifier;              //@synthesize accountUniqueIdentifier=_accountUniqueIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasOnlinePlaybackKeys;                              //@synthesize hasOnlinePlaybackKeys=_hasOnlinePlaybackKeys - In the implementation block
@property (assign,nonatomic) BOOL hasOfflinePlaybackKeys;                             //@synthesize hasOfflinePlaybackKeys=_hasOfflinePlaybackKeys - In the implementation block
-(unsigned long long)accountUniqueIdentifier;
-(void)setHasOnlinePlaybackKeys:(BOOL)arg1 ;
-(void)setHasOfflinePlaybackKeys:(BOOL)arg1 ;
-(id)initWithFairPlaySubscriptionInfo:(FPSubscriptionInfo_)arg1 ;
-(void)setAccountUniqueIdentifier:(unsigned long long)arg1 ;
-(BOOL)hasOnlinePlaybackKeys;
-(BOOL)hasOfflinePlaybackKeys;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
