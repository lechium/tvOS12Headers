/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/SocksHandshake.h>

@class NSMutableSet, NSMutableString;

@interface SocksHandshakev5 : SocksHandshake {

	BOOL _done;
	unsigned long long _state;
	int _numberOfAuthVersionSupported;
	NSMutableSet* _authMethods;
	unsigned char _addressType;
	int _destinationLen;
	NSMutableString* _domainName;
	unsigned char ipaddr[16];
	int _portLen;
	unsigned short _destPort;
	int _usernameLen;
	NSMutableString* _username;
	int _passwordLen;
	NSMutableString* _password;

}
-(BOOL)parse:(const char*)arg1 len:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)finish:(int)arg1 ;
@end

