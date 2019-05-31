/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, CBManager;

@interface CBPeer : NSObject <NSCopying> {

	BOOL _isLinkEncrypted;
	unsigned char _connectedTransport;
	NSUUID* _identifier;
	unsigned long long _mtuLength;
	long long _pairingState;
	long long _hostState;
	long long _role;
	CBManager* _manager;

}

@property (assign,nonatomic) unsigned long long mtuLength;                  //@synthesize mtuLength=_mtuLength - In the implementation block
@property (assign,nonatomic) long long pairingState;                        //@synthesize pairingState=_pairingState - In the implementation block
@property (assign,nonatomic) long long hostState;                           //@synthesize hostState=_hostState - In the implementation block
@property (assign,nonatomic) BOOL isLinkEncrypted;                          //@synthesize isLinkEncrypted=_isLinkEncrypted - In the implementation block
@property (assign,nonatomic) long long role;                                //@synthesize role=_role - In the implementation block
@property (assign,nonatomic,__weak) CBManager * manager;                    //@synthesize manager=_manager - In the implementation block
@property (assign,nonatomic) unsigned char connectedTransport;              //@synthesize connectedTransport=_connectedTransport - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                         //@synthesize identifier=_identifier - In the implementation block
-(void)handleMsg:(int)arg1 args:(id)arg2 ;
-(void)setHostState:(long long)arg1 ;
-(void)handleHostStateUpdated:(id)arg1 ;
-(id)initWithInfo:(id)arg1 manager:(id)arg2 ;
-(void)setMtuLength:(unsigned long long)arg1 ;
-(void)setIsLinkEncrypted:(BOOL)arg1 ;
-(void)setConnectedTransport:(unsigned char)arg1 ;
-(void)handleMTUChanged:(id)arg1 ;
-(void)handleLinkEncryptionChanged:(id)arg1 ;
-(long long)pairingState;
-(void)setPairingState:(long long)arg1 ;
-(BOOL)isLinkEncrypted;
-(unsigned char)connectedTransport;
-(long long)hostState;
-(unsigned long long)mtuLength;
-(void)setRole:(long long)arg1 ;
-(long long)role;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CBManager *)manager;
-(void)setManager:(CBManager *)arg1 ;
@end

