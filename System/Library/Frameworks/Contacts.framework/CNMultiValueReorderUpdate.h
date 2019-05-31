/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNMultiValueUpdate.h>

@class NSOrderedSet;

@interface CNMultiValueReorderUpdate : CNMultiValueUpdate {

	NSOrderedSet* _values;

}

@property (nonatomic,copy,readonly) NSOrderedSet * values;              //@synthesize values=_values - In the implementation block
-(void)applyToMutableMultiValue:(id)arg1 withIdentifierMap:(id)arg2 ;
-(BOOL)applyToABPerson:(void*)arg1 abmultivalue:(void*)arg2 propertyDescription:(id)arg3 error:(id*)arg4 ;
-(long long)compareIndexOfIdentifier:(id)arg1 toIndexOfIdentifier:(id)arg2 ;
-(id)initWithValues:(id)arg1 ;
-(id)description;
-(NSOrderedSet *)values;
@end

