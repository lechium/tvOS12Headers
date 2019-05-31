/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNContactUpdate.h>

@class CNPropertyDescription;

@interface CNContactKeyValueUpdate : CNContactUpdate {

	CNPropertyDescription* _property;
	id _value;

}

@property (readonly) CNPropertyDescription * property;              //@synthesize property=_property - In the implementation block
@property (readonly) id value;                                      //@synthesize value=_value - In the implementation block
-(BOOL)applyToABPerson:(void*)arg1 withPropertiesContext:(id)arg2 error:(id*)arg3 ;
-(id)initWithProperty:(id)arg1 value:(id)arg2 ;
-(void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2 ;
-(CNPropertyDescription *)property;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)value;
@end

