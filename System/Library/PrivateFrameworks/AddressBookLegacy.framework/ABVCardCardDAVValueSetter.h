/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookLegacy/AddressBookLegacy-Structs.h>
#import <AddressBookLegacy/ABVCardPersonValueSetter.h>

@interface ABVCardCardDAVValueSetter : ABVCardPersonValueSetter {

	BOOL _recordIsGroup;
	BOOL _importingToExistingGroup;

}

@property (assign) BOOL recordIsGroup;              //@synthesize recordIsGroup=_recordIsGroup - In the implementation block
+(CFDictionaryRef)_personToGroupPropertyMap;
+(int)groupPropertyForPersonProperty:(int)arg1 ;
-(BOOL)propertyIsValidForPerson:(unsigned)arg1 ;
-(BOOL)setImageData:(id)arg1 cropRectX:(int)arg2 cropRectY:(int)arg3 cropRectWidth:(int)arg4 cropRectHeight:(int)arg5 ;
-(void)setRecordIsGroup:(BOOL)arg1 ;
-(id)initWithPerson:(void*)arg1 removeExistingProperties:(BOOL)arg2 ;
-(id)initWithGroup:(void*)arg1 removeExistingProperties:(BOOL)arg2 ;
-(void*)copyParsedRecordWithSource:(void*)arg1 outRecordType:(unsigned*)arg2 ;
-(void)_drainExistingProperties;
-(BOOL)recordIsGroup;
-(BOOL)setValue:(void*)arg1 forProperty:(unsigned)arg2 ;
-(id)imageData;
-(void*)valueForProperty:(unsigned)arg1 ;
@end
