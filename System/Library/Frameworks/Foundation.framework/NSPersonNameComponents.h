/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSPersonNameComponents : NSObject <NSCopying, NSSecureCoding> {

	id _private;

}

@property (copy) NSString * namePrefix; 
@property (copy) NSString * givenName; 
@property (copy) NSString * middleName; 
@property (copy) NSString * familyName; 
@property (copy) NSString * nameSuffix; 
@property (copy) NSString * nickname; 
@property (copy) NSPersonNameComponents * phoneticRepresentation; 
+(id)_allProperties;
+(id)__componentsRequiredForScriptDetectionWithPhoneticDesired:(BOOL)arg1 ;
+(id)_allComponents;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToComponents:(id)arg1 ;
-(id)_scriptDeterminingStringRepresentationWithPhoneticDesired:(BOOL)arg1 ;
-(void)setNamePrefix:(NSString *)arg1 ;
-(void)setNameSuffix:(NSString *)arg1 ;
-(void)setGivenName:(NSString *)arg1 ;
-(void)setFamilyName:(NSString *)arg1 ;
-(void)setPhoneticRepresentation:(NSPersonNameComponents *)arg1 ;
-(NSPersonNameComponents *)phoneticRepresentation;
-(void)setMiddleName:(NSString *)arg1 ;
-(void)setNickname:(NSString *)arg1 ;
-(NSString *)givenName;
-(NSString *)middleName;
-(NSString *)namePrefix;
-(NSString *)nameSuffix;
-(NSString *)nickname;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_isEmpty;
-(NSString *)familyName;
@end

