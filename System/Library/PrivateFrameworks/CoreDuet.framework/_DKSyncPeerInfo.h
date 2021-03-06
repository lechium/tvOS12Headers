/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, _DKSyncPeer, NSString;

@interface _DKSyncPeerInfo : NSObject {

	NSUUID* _uuid;
	_DKSyncPeer* _peer;
	long long _transports;
	NSString* _transportsString;

}

@property (nonatomic,retain) NSUUID * uuid;                            //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) _DKSyncPeer * peer;                       //@synthesize peer=_peer - In the implementation block
@property (assign,nonatomic) long long transports;                     //@synthesize transports=_transports - In the implementation block
@property (nonatomic,retain) NSString * transportsString;              //@synthesize transportsString=_transportsString - In the implementation block
-(_DKSyncPeer *)peer;
-(void)setPeer:(_DKSyncPeer *)arg1 ;
-(NSString *)transportsString;
-(void)setTransports:(long long)arg1 ;
-(void)setTransportsString:(NSString *)arg1 ;
-(long long)transports;
-(id)description;
-(id)debugDescription;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSUUID *)uuid;
@end

