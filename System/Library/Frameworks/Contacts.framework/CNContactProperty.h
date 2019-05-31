/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CNContact;

@interface CNContactProperty : NSObject <NSCopying, NSSecureCoding> {

	NSString* _key;
	NSString* _identifier;
	CNContact* _internalContact;

}

@property (nonatomic,retain) CNContact * internalContact;              //@synthesize internalContact=_internalContact - In the implementation block
@property (nonatomic,copy) NSString * key;                             //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) CNContact * contact; 
@property (nonatomic,readonly) id value; 
@property (nonatomic,copy,readonly) NSString * label; 
+(id)contactPropertyWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 ;
+(id)contactPropertyWithContactNoCopy:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 ;
+(BOOL)supportsSecureCoding;
-(void)setInternalContact:(CNContact *)arg1 ;
-(CNContact *)internalContact;
-(id)primitiveValue;
-(id)labeledValueForContact:(id)arg1 ;
-(BOOL)isMultiValueProperty;
-(id)sourceContact;
-(int)multiValueIdentifier;
-(id)labeledValue;
-(CNContact *)contact;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)value;
-(NSString *)key;
-(NSString *)label;
-(void)setKey:(NSString *)arg1 ;
@end

