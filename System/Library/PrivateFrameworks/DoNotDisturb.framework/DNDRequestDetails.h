/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:22 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface DNDRequestDetails : NSObject <NSCopying, NSSecureCoding> {

	NSString* _clientIdentifier;
	NSUUID* _auditUUID;
	unsigned long long _timestamp;

}

@property (nonatomic,copy,readonly) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * auditUUID;                       //@synthesize auditUUID=_auditUUID - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
+(id)detailsRepresentingNowWithClientIdentifier:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSString *)clientIdentifier;
-(id)initWithClientIdentifier:(id)arg1 auditUUID:(id)arg2 timestamp:(unsigned long long)arg3 ;
-(NSUUID *)auditUUID;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
@end

