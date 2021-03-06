/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNSuggestedContactPredicate.h>

@class NSString, NSArray;

@interface CNFullTextSearchContactPredicate : CNPredicate <CNSuggestedContactPredicate> {

	NSString* _searchString;
	NSArray* _containerIdentifiers;
	NSArray* _groupIdentifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * searchString;                     //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,copy,readonly) NSArray * containerIdentifiers;              //@synthesize containerIdentifiers=_containerIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * groupIdentifiers;                  //@synthesize groupIdentifiers=_groupIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(BOOL)arg2 service:(id)arg3 error:(id*)arg4 ;
-(id)initWithSearchString:(id)arg1 containerIdentifiers:(id)arg2 groupIdentifiers:(id)arg3 ;
-(NSArray *)groupIdentifiers;
-(NSArray *)containerIdentifiers;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSString *)searchString;
@end

