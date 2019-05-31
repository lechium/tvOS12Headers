/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _IDSDataChannelLinkContext, NSUUID, NSData;

@interface IDSDataChannelLinkContext : NSObject {

	_IDSDataChannelLinkContext* _internal;

}

@property (readonly) char linkID; 
@property (readonly) NSUUID * linkUUID; 
@property (readonly) NSUUID * QRSessionID; 
@property (readonly) unsigned char flags; 
@property (readonly) unsigned char networkType; 
@property (readonly) long long connectionType; 
@property (readonly) unsigned long long RATType; 
@property (readonly) unsigned short maxMTU; 
@property (readonly) long long relayServerProvider; 
@property (readonly) NSData * relaySessionToken; 
@property (readonly) NSData * relaySessionKey; 
@property (readonly) unsigned char remoteNetworkType; 
@property (readonly) long long remoteConnectionType; 
@property (readonly) unsigned long long remoteRATType; 
@property (readonly) unsigned maxBitrate; 
@property (readonly) BOOL serverIsDegraded; 
-(unsigned char)networkType;
-(long long)connectionType;
-(unsigned char)flags;
-(id)initWithDummyInformation;
-(id)initWithLinkID:(char)arg1 linkUUID:(id)arg2 QRSessionID:(id)arg3 flags:(unsigned char)arg4 networkType:(unsigned char)arg5 connectionType:(long long)arg6 RATType:(unsigned long long)arg7 MTU:(unsigned short)arg8 remoteNetworkType:(unsigned char)arg9 remoteConnectionType:(long long)arg10 remoteRATType:(unsigned long long)arg11 maxBitrate:(unsigned)arg12 relayServerProvider:(long long)arg13 relaySessionToken:(id)arg14 relaySessionKey:(id)arg15 serverIsDegraded:(BOOL)arg16 ;
-(void)setRATType:(unsigned long long)arg1 ;
-(void)setMaxBitrate:(unsigned)arg1 ;
-(void)setMTU:(unsigned short)arg1 ;
-(char)linkID;
-(BOOL)serverIsDegraded;
-(long long)remoteConnectionType;
-(unsigned)maxBitrate;
-(long long)relayServerProvider;
-(unsigned long long)RATType;
-(unsigned long long)remoteRATType;
-(NSData *)relaySessionToken;
-(NSData *)relaySessionKey;
-(unsigned char)remoteNetworkType;
-(NSUUID *)QRSessionID;
-(NSUUID *)linkUUID;
-(unsigned short)maxMTU;
-(id)description;
@end

