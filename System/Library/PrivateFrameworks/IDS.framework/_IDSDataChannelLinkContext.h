/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:02 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSData;

@interface _IDSDataChannelLinkContext : NSObject {

	char _linkID;
	unsigned char _flags;
	unsigned char _networkType;
	long long _connectionType;
	unsigned long long _RATType;
	unsigned short _maxMTU;
	unsigned char _remoteNetworkType;
	long long _remoteConnectionType;
	unsigned long long _remoteRATType;
	unsigned _maxBitrate;
	NSUUID* _linkUUID;
	NSUUID* _QRSessionID;
	long long _relayServerProvider;
	NSData* _relaySessionToken;
	NSData* _relaySessionKey;
	BOOL _serverIsDegraded;

}
-(id)description;
@end

