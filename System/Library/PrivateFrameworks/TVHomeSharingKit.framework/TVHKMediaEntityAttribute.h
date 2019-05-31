/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet;

@interface TVHKMediaEntityAttribute : NSObject <NSCopying> {

	BOOL _allowsDefaultValue;
	BOOL _supportsDMAPQueryTerm;
	unsigned _DMAPQueryMinimumSharingVersion;
	NSString* _name;
	NSString* _sortAsName;
	unsigned long long _attributeType;
	NSString* _attributeValueClassName;
	id _defaultValue;
	NSSet* _DMAPCodeNames;
	/*^block*/id _DMAPCodeNamesBlock;
	NSString* _DMAPSortArgumentValue;
	NSString* _DMAPQueryTermCodeName;
	unsigned long long _DMAPQueryTermValueType;
	NSString* _DMAPQueryTermValueClassName;
	/*^block*/id _DMAPQueryTermValueBlock;
	/*^block*/id _DMAPQueryTermBlock;

}

@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * sortAsName;                                    //@synthesize sortAsName=_sortAsName - In the implementation block
@property (assign,nonatomic) unsigned long long attributeType;                       //@synthesize attributeType=_attributeType - In the implementation block
@property (nonatomic,copy) NSString * attributeValueClassName;                       //@synthesize attributeValueClassName=_attributeValueClassName - In the implementation block
@property (nonatomic,retain) id defaultValue;                                        //@synthesize defaultValue=_defaultValue - In the implementation block
@property (assign,nonatomic) BOOL allowsDefaultValue;                                //@synthesize allowsDefaultValue=_allowsDefaultValue - In the implementation block
@property (nonatomic,copy) NSSet * DMAPCodeNames;                                    //@synthesize DMAPCodeNames=_DMAPCodeNames - In the implementation block
@property (nonatomic,copy) id DMAPCodeNamesBlock;                                    //@synthesize DMAPCodeNamesBlock=_DMAPCodeNamesBlock - In the implementation block
@property (nonatomic,copy) NSString * DMAPSortArgumentValue;                         //@synthesize DMAPSortArgumentValue=_DMAPSortArgumentValue - In the implementation block
@property (assign,nonatomic) BOOL supportsDMAPQueryTerm;                             //@synthesize supportsDMAPQueryTerm=_supportsDMAPQueryTerm - In the implementation block
@property (assign,nonatomic) unsigned DMAPQueryMinimumSharingVersion;                //@synthesize DMAPQueryMinimumSharingVersion=_DMAPQueryMinimumSharingVersion - In the implementation block
@property (nonatomic,copy) NSString * DMAPQueryTermCodeName;                         //@synthesize DMAPQueryTermCodeName=_DMAPQueryTermCodeName - In the implementation block
@property (assign,nonatomic) unsigned long long DMAPQueryTermValueType;              //@synthesize DMAPQueryTermValueType=_DMAPQueryTermValueType - In the implementation block
@property (nonatomic,copy) NSString * DMAPQueryTermValueClassName;                   //@synthesize DMAPQueryTermValueClassName=_DMAPQueryTermValueClassName - In the implementation block
@property (nonatomic,copy) id DMAPQueryTermValueBlock;                               //@synthesize DMAPQueryTermValueBlock=_DMAPQueryTermValueBlock - In the implementation block
@property (nonatomic,copy) id DMAPQueryTermBlock;                                    //@synthesize DMAPQueryTermBlock=_DMAPQueryTermBlock - In the implementation block
+(id)_classNameFromAttributeType:(unsigned long long)arg1 ;
-(void)setAttributeType:(unsigned long long)arg1 ;
-(void)setAttributeValueClassName:(NSString *)arg1 ;
-(NSString *)attributeValueClassName;
-(unsigned long long)attributeType;
-(void)setDefaultValue:(id)arg1 ;
-(void)setDMAPCodeNames:(NSSet *)arg1 ;
-(void)setSupportsDMAPQueryTerm:(BOOL)arg1 ;
-(void)setDMAPQueryTermValueClassName:(NSString *)arg1 ;
-(void)setDMAPQueryTermBlock:(id)arg1 ;
-(void)setDMAPQueryTermCodeName:(NSString *)arg1 ;
-(void)setDMAPQueryTermValueType:(unsigned long long)arg1 ;
-(void)setDMAPQueryTermValueBlock:(id)arg1 ;
-(void)setDMAPSortArgumentValue:(NSString *)arg1 ;
-(void)setDMAPCodeNamesBlock:(id)arg1 ;
-(void)setDMAPQueryMinimumSharingVersion:(unsigned)arg1 ;
-(NSSet *)DMAPCodeNames;
-(unsigned long long)DMAPQueryTermValueType;
-(id)DMAPCodeNamesBlock;
-(NSString *)DMAPSortArgumentValue;
-(BOOL)supportsDMAPQueryTerm;
-(unsigned)DMAPQueryMinimumSharingVersion;
-(NSString *)DMAPQueryTermCodeName;
-(NSString *)DMAPQueryTermValueClassName;
-(id)DMAPQueryTermValueBlock;
-(id)DMAPQueryTermBlock;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)defaultValue;
-(void)setSortAsName:(NSString *)arg1 ;
-(NSString *)sortAsName;
-(BOOL)allowsDefaultValue;
-(void)setAllowsDefaultValue:(BOOL)arg1 ;
@end

