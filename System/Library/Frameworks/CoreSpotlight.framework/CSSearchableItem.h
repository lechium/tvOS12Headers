/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <libobjc.A.dylib/CSIndexQueuableItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CSSearchableItemAttributeSet, NSString, NSDate;

@interface CSSearchableItem : NSObject <CSIndexQueuableItem, NSSecureCoding, NSCopying> {

	CSSearchableItemAttributeSet* _attributeSet;
	T _score;

}

@property (assign) BOOL noIndex; 
@property (assign) T score;                                                  //@synthesize score=_score - In the implementation block
@property (assign) BOOL isUpdate; 
@property (copy) NSString * bundleID; 
@property (copy) NSString * protection; 
@property (copy) NSString * uniqueIdentifier; 
@property (copy) NSString * domainIdentifier; 
@property (copy) NSDate * expirationDate; 
@property (retain) CSSearchableItemAttributeSet * attributeSet;              //@synthesize attributeSet=_attributeSet - In the implementation block
+(id)searchableItemFromUserActivity:(id)arg1 bundleID:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(NSString *)domainIdentifier;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(T)score;
-(void)setScore:(T)arg1 ;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(BOOL)noIndex;
-(id)_propertiesDescription;
-(BOOL)_isFullyFormed;
-(BOOL)_hasAttributesOfType:(id)arg1 ;
-(void)setProtection:(NSString *)arg1 ;
-(void)setNoIndex:(BOOL)arg1 ;
-(id)initWithAttributeSet:(id)arg1 ;
-(void)_standardizeFileProvider:(id)arg1 ;
-(void)_standardizePeople:(id)arg1 ;
-(void)_standardizeDeprecatedProperties:(id)arg1 ;
-(void)_standardizeHTML:(id)arg1 ;
-(void)_standardizeMarkAs:(id)arg1 ;
-(void)_parseEmailHeadersForFeatures:(id)arg1 ;
-(void)_standardizeSiriShortcuts:(id)arg1 ;
-(void)_fixBrokenAuthorNames:(id)arg1 ;
-(void)_populateMissingPeopleWithNames:(id)arg1 emailAddresses:(id)arg2 allItemPersons:(id)arg3 primaryItemPersons:(id)arg4 additionalItemPersons:(id)arg5 hiddenAdditionalItemPersons:(id)arg6 personDictionary:(id)arg7 contactProperties:(id)arg8 nameKey:(id)arg9 emailKey:(id)arg10 contactIdentifierKey:(id)arg11 personKey:(id)arg12 attributeSet:(id)arg13 ;
-(void)breakOutPersonInformationInSet:(id)arg1 withName:(id)arg2 emails:(id)arg3 contactIdentifiers:(id)arg4 nameKey:(id)arg5 emailKey:(id)arg6 contactIdentifierKey:(id)arg7 emailAddressKey:(id)arg8 attributeSet:(id)arg9 ;
-(void)standardizeAttributes;
-(id)filteredSpotlightAttributes;
-(void)_updateWithSearchableItem:(id)arg1 ;
-(void)setIsUpdate:(BOOL)arg1 ;
-(CSSearchableItemAttributeSet *)attributeSet;
-(void)setAttributeSet:(CSSearchableItemAttributeSet *)arg1 ;
-(void)setDomainIdentifier:(NSString *)arg1 ;
-(id)initWithUniqueIdentifier:(id)arg1 domainIdentifier:(id)arg2 attributeSet:(id)arg3 ;
-(id)searchableItem;
-(NSString *)protection;
-(BOOL)isUpdate;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)attributes;
-(void)setAttributes:(id)arg1 ;
-(NSString *)bundleID;
-(NSString *)uniqueIdentifier;
@end

