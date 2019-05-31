/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, TVHSDMAPEntityKind, NSArray, NSDictionary;

@interface TVHKMediaEntityKind : NSObject <NSCopying> {

	NSString* _entityClassName;
	TVHSDMAPEntityKind* _DAMPEntityKind;
	NSString* _DMAPShuffleSortArgumentValue;
	NSArray* _attributes;
	NSDictionary* _attributesByName;

}

@property (nonatomic,copy) NSDictionary * attributesByName;                      //@synthesize attributesByName=_attributesByName - In the implementation block
@property (nonatomic,copy) NSString * entityClassName;                           //@synthesize entityClassName=_entityClassName - In the implementation block
@property (nonatomic,retain) TVHSDMAPEntityKind * DAMPEntityKind;                //@synthesize DAMPEntityKind=_DAMPEntityKind - In the implementation block
@property (nonatomic,copy) NSString * DMAPShuffleSortArgumentValue;              //@synthesize DMAPShuffleSortArgumentValue=_DMAPShuffleSortArgumentValue - In the implementation block
@property (nonatomic,copy) NSArray * attributes;                                 //@synthesize attributes=_attributes - In the implementation block
-(id)attributeForName:(id)arg1 ;
-(NSDictionary *)attributesByName;
-(NSString *)entityClassName;
-(void)setEntityClassName:(NSString *)arg1 ;
-(void)setDAMPEntityKind:(TVHSDMAPEntityKind *)arg1 ;
-(void)setDMAPShuffleSortArgumentValue:(NSString *)arg1 ;
-(TVHSDMAPEntityKind *)DAMPEntityKind;
-(void)setAttributesByName:(NSDictionary *)arg1 ;
-(NSString *)DMAPShuffleSortArgumentValue;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)attributes;
-(void)setAttributes:(NSArray *)arg1 ;
@end

