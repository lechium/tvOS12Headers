/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol ENDevicePublicKey, ENCypher;
@class NSData;

@interface ENParticipantDevice : NSObject <NSSecureCoding> {

	id<ENDevicePublicKey> _devicePublicKey;
	NSData* _identifier;
	id<ENCypher> _cypher;

}

@property (nonatomic,retain) id<ENCypher> cypher;                                  //@synthesize cypher=_cypher - In the implementation block
@property (nonatomic,readonly) id<ENDevicePublicKey> devicePublicKey;              //@synthesize devicePublicKey=_devicePublicKey - In the implementation block
@property (nonatomic,readonly) NSData * identifier;                                //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id<ENCypher>)cypher;
-(void)setCypher:(id<ENCypher>)arg1 ;
-(id)signAndConcealData:(id)arg1 withSender:(id)arg2 cypherIdentifier:(id*)arg3 error:(id*)arg4 ;
-(id)initWithDevicePublicKey:(id)arg1 cypher:(id)arg2 identifier:(id)arg3 ;
-(id)verifyAndRevealData:(id)arg1 withReceipient:(id)arg2 cypherIdentifier:(id)arg3 error:(id*)arg4 ;
-(id<ENDevicePublicKey>)devicePublicKey;
-(NSData *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

