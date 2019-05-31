/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:23 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, DNDModeAssertionLifetime;

@interface DNDModeAssertionDetails : NSObject <NSCopying, NSSecureCoding> {

	BOOL _userRequested;
	NSString* _identifier;
	NSString* _modeIdentifier;
	DNDModeAssertionLifetime* _lifetime;
	unsigned long long _syncSuppressionOptions;

}

@property (getter=isUserRequested,nonatomic,readonly) BOOL userRequested;              //@synthesize userRequested=_userRequested - In the implementation block
@property (nonatomic,readonly) unsigned long long syncSuppressionOptions;              //@synthesize syncSuppressionOptions=_syncSuppressionOptions - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * modeIdentifier;                         //@synthesize modeIdentifier=_modeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) DNDModeAssertionLifetime * lifetime;               //@synthesize lifetime=_lifetime - In the implementation block
+(id)userRequestedAssertionDetailsWithIdentifier:(id)arg1 modeIdentifier:(id)arg2 lifetime:(id)arg3 ;
+(id)_lifetimeClasses;
+(id)detailsWithIdentifier:(id)arg1 modeIdentifier:(id)arg2 lifetime:(id)arg3 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isUserRequested;
-(DNDModeAssertionLifetime *)lifetime;
-(NSString *)modeIdentifier;
-(id)initWithIdentifier:(id)arg1 modeIdentifier:(id)arg2 lifetime:(id)arg3 userRequested:(BOOL)arg4 syncSuppressionOptions:(unsigned long long)arg5 ;
-(unsigned long long)syncSuppressionOptions;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

