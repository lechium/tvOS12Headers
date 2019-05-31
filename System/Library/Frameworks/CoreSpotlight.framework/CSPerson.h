/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface CSPerson : NSObject <NSSecureCoding, NSCopying> {

	NSString* _displayName;
	NSArray* _handles;
	NSString* _handleIdentifier;
	NSString* _contactIdentifier;

}

@property (nonatomic,retain) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSArray * handles;                        //@synthesize handles=_handles - In the implementation block
@property (nonatomic,retain) NSString * handleIdentifier;              //@synthesize handleIdentifier=_handleIdentifier - In the implementation block
@property (copy) NSString * contactIdentifier;                         //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)initWithDisplayName:(id)arg1 handles:(id)arg2 handleIdentifier:(id)arg3 ;
-(NSString *)handleIdentifier;
-(void)setHandleIdentifier:(NSString *)arg1 ;
-(NSString *)contactIdentifier;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(void)setHandles:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(NSArray *)handles;
@end

