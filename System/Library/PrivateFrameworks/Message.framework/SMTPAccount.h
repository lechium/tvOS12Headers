/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <Message/DeliveryAccount.h>

@class MFSMTPConnection, NSTimer;

@interface SMTPAccount : DeliveryAccount {

	Class _deliveryClass;
	MFSMTPConnection* _connection;
	NSTimer* _timer;
	long long _lastTimerSetTime;
	unsigned _supportsPipelining : 1;
	unsigned _supportsOutboxCopy : 1;
	unsigned _useCellDataOnly : 1;

}
+(id)newDefaultInstance;
+(id)accountTypeString;
+(id)displayedAccountTypeString;
+(unsigned)defaultPortNumber;
+(id)displayedShortAccountTypeString;
+(void*)legacyKeychainProtocol;
+(BOOL)isCommonPortNumber:(unsigned)arg1 ;
+(id)saslProfileName;
+(void)registerAppleServiceDeliveryHostname:(id)arg1 ;
-(void)releaseAllConnections;
-(id)preferredAuthScheme;
-(BOOL)_shouldTryDirectSSLConnectionOnPort:(unsigned)arg1 ;
-(Class)connectionClass;
-(id)certUIService;
-(CFStringRef)connectionServiceType;
-(void)releaseAllForcedConnections;
-(void)setPreferredAuthScheme:(id)arg1 ;
-(id)alternateConnectionSettings;
-(id)insecureConnectionSettings;
-(id)secureConnectionSettings;
-(Class)deliveryClass;
-(BOOL)canBeFallbackAccount;
-(BOOL)supportsOutboxCopy;
-(id)authenticatedConnection:(BOOL)arg1 ;
-(void)setSupportsOutboxCopy:(BOOL)arg1 ;
-(void)checkInConnection:(id)arg1 ;
-(id)errorForResponse:(id)arg1 ;
-(BOOL)supportsPipelining;
-(id)_defaultSettingsWithPort:(unsigned)arg1 useSSL:(BOOL)arg2 directSSL:(BOOL)arg3 ;
-(id)connectionSettingsForAuthentication:(BOOL)arg1 secure:(id)arg2 insecure:(id)arg3 ;
-(void)setSupportsPipelining:(BOOL)arg1 ;
-(void)disconnect:(id)arg1 ;
-(void)connectionExpired:(id)arg1 ;
-(void)setTimer;
-(BOOL)_isAppleServiceDeliveryHostname:(id)arg1 ;
-(void)setDeliveryClass:(Class)arg1 ;
-(id)customAuthenticationErrorStringForError:(id)arg1 authScheme:(id)arg2 ;
-(void)dealloc;
-(id)serviceName;
@end

